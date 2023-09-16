#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:void getd()
            {
            cin>>h>>m>>s;
            }
            friend Time operator+(Time t1,Time t2);
            void display()
            {
            cout<<h<<" "<<m<<" "<<s<<"\n";
            }
};
Time operator+(Time t1,Time t2)
{
    Time t;
    t.m=0;
    t.h=0;
    t.s=t1.s+t2.s;
    t.m=t1.m+t2.m;
    t.h=t1.h+t2.h;
    if(t.s>=60)
    {
    t.s-=60;
    t.m++;
    }
    if(t.m>=60)
    {
    t.m-=60;
    t.h++;
    }
   // t.h=t1.h+t2.h;
    return t;
}
int main()
{
    Time t1,t2,t3;
    t1.getd();
    t2.getd();
    t3=t1+t2;
    t3.display();
    return 0;
}
