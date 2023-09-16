#include<iostream>
#include<string.h>
using namespace std;
class complex
{
    char cc[10];
    public:void getd()
            {
            cin>>cc;
            }
            friend complex operator+(complex c,complex c2);
            void display()
            {
                cout<<cc;
            }
};
complex operator+(complex c,complex c2)
{
            complex c3;
            strcat(c.cc,c2.cc);
            strcpy(c3.cc,c.cc);
            return c3;
}
int main()
{
    complex c1,c2,c3;
    c1.getd();
    c2.getd();
    c3=c1+c2;
    c3.display();
    return 0;
}
