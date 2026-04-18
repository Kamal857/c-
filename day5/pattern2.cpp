/*
to print pattern like 
  pyramid
    
*/
#include<iostream>
using namespace std;
int main()

{
    int i,j,k;
    int n;
    cout<<"Enter the row number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            cout<<" ";
        }
        for(k=0;k<2*i-1;k++)
        {
            cout<<"*";
    
        }
        cout<<endl;
    }
    return 0;

}