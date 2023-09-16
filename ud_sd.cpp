#include<iostream>
#include<string.h>
using namespace std;
const int n=25;
class destine
{
    char b[n];
    public:destine()
            {}
            destine(char a[])
            {
            strcpy(b,a);
            }
            void display()
            {
            cout<<b;
            }
};
class source
{
    char a[n];
    public:void getd()
            {
            cin>>a;
            }
            operator destine()
            {
            char t[n];
            strcpy(t,a);
            return (destine(t));
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
