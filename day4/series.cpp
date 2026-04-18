// to generate the series like 1 + x + x^2 + x^3 + .......+ x^n
#include<iostream>
using namespace std;
int s(int , int );
int main()
{
    int x,n;
    cout<<"Enter the value of x and n";
    cin>>x>>n;
    cout<<1<<" + ";

    for(int i=1;i<=n;i++)
    {
        cout<<s(x,i)<<" + ";
    }
}
int s(int x , int n)
{
    if (n==0)
        return 1;
    else if(n==1)
        return(x);
    else
        return (x*s(x,n-1));
}
