#include<iostream>
using namespace std;

class Teacher{
public :
    string name;
    string dep;
    float salary;
    int id;
};

int main()
{
    int n;
    cout<<"ENter the number of teacher you want to add ";
    cin>>n;
    Teacher t[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Teacher name :";
        cin>>t[i].name;
        cout<<"\n"<<"Enter department and salary";
        cin>>t[i].dep>>t[i].salary;
        cout<<"\n The name of Teacher is"<<t[i].name;
    }
    return 0;
}