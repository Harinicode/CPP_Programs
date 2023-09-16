#include<iostream>
#include<string.h>
using namespace std;
const int n=25;
class source
{
    char a[n];
    public:void getd()
            {
            cin>>a;
            }
            int getr()
            {
            return a;
            }

};
class destine
{
    char b[n];
    public: destine(){}
            destine(source s)
            {
            strcpy(b,s.getr());
            }
            void display()
            {
            cout<<b;
            }
};
int main()
{
    source s;
    destine d;
    s.getd();
    d=s;
    d.display();
    return 0;
}




