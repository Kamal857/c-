// to  find the sum of two numbers using function

#include<iostream>
using namespace std;
int fact(int ,int );
int main()
{
    int a ,b;
    cout<<"Enter a number a  and b";
    cin>>a>>b;
    fact(a,b);
}

int fact(int a , int b)
{
    int x =a+b;
    cout<<"The sum of two numbers is "<<x;
}