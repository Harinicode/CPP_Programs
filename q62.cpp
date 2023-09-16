#include<iostream>
using namespace std;
int add(int a,int b,int c,int d)
{

    return(((a*d)+(b*c))/(b*d));
}

int sub(int a,int b,int c,int d)
{
    return(((a*d)-(b*c))/(b*d));
}



int mul(int a,int b,int c,int d)
{
    return((a*c)/(b*d));
}

int div(int a,int b,int c,int d)
{
    return((a*d)/(b*c));
}

int oper(int a,int b,int c,int d)
{
    int ch,choice;
    while(ch=1)
    {
    cout<<"The choices are: \n 1.Addition\n 2.Subtraction\n 3.Multiplication \n 4.Division\n";
    cin>>choice;
    switch(choice);
    {
        case1: cout<<"a/b+c/d :"<<add(a,b,c,d);
                break;
        case2: cout<<"a/b-c/d :"<<sub(a,b,c,d);
                break;
        case3: cout<<"a/b*c/d :"<<mul(a,b,c,d);
                break;
        case4: cout<<"a/b/c/d :"<<div(a,b,c,d);
                break;
    }
    }
    cout<<"Enter any value to Stop else Enter 1 to continue";
    cin>>ch;
    if(ch==1)
        oper(a,b,c,d);
    else
        return 0;

}
int main()
{
    int a,b,c,d,ch;
    cout<<"Enter the 4 values";
    cin>>a>>b>>c>>d;
    oper(a,b,c,d);
    return 0;
}



