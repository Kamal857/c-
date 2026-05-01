#include<iostream>
using namespace std;

class students{
    private :
        int marks;
    
    public:
        void setmark(int m)
        {
            if(m>0 && m<=100)
            {
                marks=m;
            }
            else{
                cout<<"Invalid Marks";
                marks=0;
            }
        }
         int getmarks()
         {
            return marks;
         }

};

int main()
{
    int m;
    students s;
    cout<<"Enter Marks of Student:";
    cin>>m;
    s.setmark(m);
    cout<<s.getmarks();
    return 0;
 
    

}