
template <bool Condition, typename TrueResult, typename FalseResult>
class if_;// this is declare and work well.


/*
template <bool Condition, typename TrueResult, typename FalseResult>
class if_{}; //this works well? this is not a declare and this is an implementment?
*/ 
/*
template <bool Condition, typename TrueResult, typename FalseResult>
class T{};


template <bool Condition, typename TrueResult, typename FalseResult> //error: aggregate ‘E<false, int, double> eeee’ has incomplete type and cannot be defined E<false, int, double> eeee;
class E;
*/

template <typename TrueResult, typename FalseResult>
struct if_<true, TrueResult, FalseResult>
{
  typedef TrueResult result;
};
 
template <typename TrueResult, typename FalseResult>
struct if_<false, TrueResult, FalseResult>
{
  typedef FalseResult result;
};

int main()
{
//I can't understand 
  typename if_<true, int, void*>::result number(3);
  typename if_<false, int, void*>::result pointer(&number);
  
  if_<true, int, int> fff1;
  
/*  
if_<true, double, int> ifff;
 
 // T<true, int, double> tttt;
  
//  E<false, int, double> eeee;// this is error;
 //  typedef typename if_<(sizeof(void *) > sizeof(uint32_t)), uint64_t, uint32_t>::result
 //     integral_ptr_t;
 
 //  integral_ptr_t converted_pointer = reinterpret_cast<integral_ptr_t>(pointer);
 
 //std::cout<< "This is a test\n";
 
 */
 
  return 0;
}