#include<iostream>
#include<string.h>
using namespace std;
void connect(char *p, char *pp)
{
    strcat(p, pp);
}
int main()
{
    char a[10],b[10]; 
    cout<<"Enter two strings";
    cin>>a>>b;
    //cin.getline(a,10);
    char *aa=a;
    char *bb=b;
    connect(aa, bb);
    cout<<"After concation " <<a;
    return 0;
}
