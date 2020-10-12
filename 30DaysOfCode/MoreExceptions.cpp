#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "n and p should be non-negative";
  }
} myex;

class Calculator
{
    public:
            Calculator()
            {

            }

            int power(int n, int p)
            {
                int result;
                if(n<0 || p<0)
                {
                    throw myex;
                }
                else
                {
                    result = pow(n,p);
                } 
                return result;  
            }

};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0)
    {
      if(scanf("%d %d",&n,&p)==2)
      {
         try
         {
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e)
         {
             cout<<e.what()<<endl;
         }
      }
    }
    
}