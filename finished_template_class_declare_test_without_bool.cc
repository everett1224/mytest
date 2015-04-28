
template <class Condition, typename TrueResult, typename FalseResult>
class if_;// this is declare 


template <typename TrueResult, typename FalseResult>
struct if_<int, TrueResult, FalseResult>
{
  typedef TrueResult result;
};
 
template <typename TrueResult, typename FalseResult>
struct if_<double, TrueResult, FalseResult>
{
  typedef FalseResult result;
};


template <class Condition, typename TrueResult, typename FalseResult>
class else_{};// this is implementation


template <typename TrueResult, typename FalseResult>
struct else_<int, TrueResult, FalseResult>
{
  typedef TrueResult result;
};
 
template <typename TrueResult, typename FalseResult>
struct else_<double, TrueResult, FalseResult>
{
  typedef FalseResult result;
};

int main()
{
//I can't understand 
  typename if_<int, int, void*>::result number(3);
  typename if_<double, int, void*>::result pointer(&number);
  
//  if_<short, int, int> fff1; //error: aggregate ‘if_<short int, int, int> fff1’ has incomplete type and cannot be defined if_<short, int, int> fff1;
  
  typename else_<int, int, void*>::result number2(3);
  typename else_<double, int, void*>::result pointer2(&number2);
  
  else_<short, int, int> fff2;
  

  return 0;
}