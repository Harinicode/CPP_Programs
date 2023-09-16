#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:void getd()
            {
            cin>>r>>i;
            }
            friend complex operator+(complex c,complex c2);
            void display()
            {
            cout<<r<<"+"<<i<<"i";
            }
};
complex operator+(complex c,complex c2)
{
            complex c3;
            c3.r=c.r+c2.r;
            c3.i=c.i+c2.i;
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
