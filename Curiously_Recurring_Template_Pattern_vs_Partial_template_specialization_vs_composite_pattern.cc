#include <stdio.h>

//group 1: Curiously Recurring Template Pattern;
template <class T>
class Writer
{
  public:
    Writer()  { }
    ~Writer()  { }

    void write(const char* str) const
    {
      static_cast<const T*>(this)->writeImpl(str); //here the magic is!!!
    }
};

class FileWriter : public Writer<FileWriter>
{
  public:
    FileWriter(FILE* aFile) { mFile = aFile; }
    ~FileWriter() { fclose(mFile); }

    //here comes the implementation of the write method on the subclass
    void writeImpl(const char* str) const
    {
//       fprintf(mFile, "%s\n", str);
		printf("this file-writer %s\n", str);
    }

  private:
    FILE* mFile;
};

class ConsoleWriter : public Writer<ConsoleWriter>
{
  public:
    ConsoleWriter() { }
    ~ConsoleWriter() { }

    void writeImpl(const char* str) const
    {
//      printf("%s\n", str);
		printf("this is console-writer %s\n", str);
    }
};

//group 2 : Partial template specialization
template <class T>
class Reader;

class FileReader
{
  public:
	void readImpl() const
	{
		printf("this is File Reader\n");
	}
};

class ConsoleReader
{
  public:
	void readImpl() const
	{
		printf("this is Console Reader\n");
	}
};

//template <class T>//compile error: template parameters not used in partial specialization:
template<>// if this is the only parameter ,leave it empty. example: http://en.wikipedia.org/wiki/Partial_template_specialization
class Reader<FileReader>
{
  private:
	FileReader realObject_;
  public:
	void read()
	{	
		realObject_.readImpl();
	}
};

//template <class T>//compile error: template parameters not used in partial specialization:
template<>
class Reader<ConsoleReader>
{
  private:
	ConsoleReader realObject_;
  public:
	void read()
	{	
		realObject_.readImpl();
	}
};

//group 3 composite pattern
template<class T>
class Player
{
  private:
	T realObject_;
  public:
	void play()
	{
		realObject_.playImpl();
	}
};

class FilePlayer
{
  public:
	void playImpl() const
	{
		printf("this is File Player\n");
	}
};

class ConsolePlayer
{
  public:
	void playImpl() const
	{
		printf("this is Console Player\n");
	}
};


int main()
{
//group 1 CRTP
	Writer<FileWriter> fwobject;
	fwobject.write("ddd");
	
	Writer<ConsoleWriter> cwobject;
	cwobject.write("ccc");

//group 2 Partial template specialization
	Reader<FileReader> fr;
	fr.read();
	
	Reader<ConsoleReader> cr;
	cr.read();
	
//group 3 composite pattern
	Player<FilePlayer> fp;
	fp.play();
	
	Player<ConsolePlayer> cp;
	cp.play();
	
	
	return 0;
}