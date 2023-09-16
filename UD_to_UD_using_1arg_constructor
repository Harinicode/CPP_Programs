#include<iostream>
using namespace std;
class Indian
{                                                                                //UD to UD
       float r;
    public:Indian()
           {}
           float getdata()
           {
            cin>>r;
            }
           float getd()
          {
             return(r/83);
           }
  };   
 
class US
{
       float d;
    public:US()
           {}
           US(Indian I)
           {
            d=I.getd();
            }
            void show()
            {
            cout<<d;
            }
  };   
int main()
{
     Indian Rs;
    Rs.getdata();
    US USD;
    USD=Rs;
    USD.show();
    return 0;
}
