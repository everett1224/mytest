#include <iostream>

using namespace std;

class Some  //for the life time test.
{  
	int n;  
	public:  
	  Some(int s){n=s;}  
	  ~Some(){  
		cout<< "destroy\n";  
	  }  
	  int ret(){return n;}  
	Some(const Some& t)  
	{  
		n = t.n;  
	 
		cout << "copy" << n << "end" << endl;  
	}  
};  
int main(int argc, char* argv[])  
{  
        cout<<Some(111).ret()<<"\n";  
        cout<<"wait\n";  
//      cin.get();  

cout<<"_______________________________\n";

		Some tt = Some(1024);
		Some tt1 = tt;

        return 0;  
}  