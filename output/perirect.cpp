#include<iostream>
using namespace std;

class area{

   private:
    int length;
    int breadth;
    
    public :
        void setl(int l ,int b)
        {
            if (l>=0 && b>=0 )
            {
                length=l;
                breadth=b;
            }
            else
            {
                cout<<"Invalid Length and Breadth";
            }
        }

        int getarea()
        {
            return length*breadth;
        }
        int getperi()
        {
            return 2*(length+breadth);
        }
};

  int main()
  {
     area a;
     int l,b;
    cout<<"Enter Length and Breadth";
    cin>>l>>b;
    a.setl(l,b);
    cout<<"\nThe Area And perimeter is "<<a.getarea()<<" "<<a.getperi();
    return 0;
  }     