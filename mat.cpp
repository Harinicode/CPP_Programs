#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>a[i][j];

    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
    if(a[i][j]==a[j][i])
    cout<<"sym";
    else
    if((i!=j)&&(a[i][i]!=0))
    cout<< "dia";
    else
    if(a[i][j]==-a[j][i])
    cout<<"Skew";
    else
    cout<<"" ;
    return 0;
       }
    }
