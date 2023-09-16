#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
    private:int secs;
    public:int getTime()
            {
            cout<<"Enter Seconds value";
            cin>>secs;
            return secs;
            }
            void calcTime(int);
            void dispTime(int hrs,int mts,int secs)
            {
            cout<<setw(3)<<hrs<<":"<<setw(3)<<mts<<":"<<setw(3)<<secs;
            }

};

void Time::calcTime(int sec)
{
    int  h=0,m=0,s=0;
    s=sec;
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    sec=s;
    dispTime(h,m,s);

}

int main()
{int a;
Time t;
a=t.getTime();
t.calcTime(a);
//t.dispTime();
return 0;


}


