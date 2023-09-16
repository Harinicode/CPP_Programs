#include<iostream>
using namespace std;
class dis
{
    int f,i;
    public:void getd()
            {
            cin>>f>>i;
            }
            friend dis operator+(dis d,dis d2);
            void display()
            {
            cout<<f<<"\'"<<i<<"\""<<"\n";
            }
};
dis& operator+(dis &d,dis &d2)
{
    dis dd;
    dd.i=0;
    dd.f=0;
    dd.i=d.i+d2.i;
    if(dd.i>=12)
    {
    dd.i-=12;
    dd.f++;
    }
    dd.f=d.f+d2.f;
    return dd;
}
int main()
{
    dis d1,d2,d3;
    d1.getd();
    d2.getd();
    d3=d1+d2;
    d3.display();
    return 0;
}
