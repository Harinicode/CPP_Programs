#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Harini
{
        char h[10];
        public:char* read()
                {
                    cin>>h;
                    return h;
                }

};
class Sindu:private Harini
{
        char s[10],v[10];
        public:void call()
                {
                strcpy(v,read());
                }
                void getd(char si[])
                {
                strcpy(s,si);
                }
               void changetog()
                {
                cout<<"1st name of sindu"<<v<<endl;
                cout<<"2nd name"<<s;
                strcpy(s,v);
                cout<<"After altering"<<s;
                }
};

int main()
{   Sindu s;
    s.call();
    char a[10];
   cin>>a;
   s.getd(a);
   s.changetog();
   return 0;
   }








