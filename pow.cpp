#include<iostream>
using namespace std;
void power(double x,int y)
{
double p=1;
int i;
for(i=0;i<y;i++)
p*=x;
cout<<"product "<<p;
}
char power(char x,int y)
{
int i;
for(i=0;i<y;i++)
cout<<x;
}

int main()
{
double n;
int p,y;
char x;
cin>>n>>p;
power(n,p);
cout<<"Enter char and no of times that letter has to be print";
cin>>x>>y;
power(x,y);
return 0;
}












