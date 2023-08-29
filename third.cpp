#include<iostream>
using namespace std;
class student
      {
        public:
        int sub1,sub2,sub3;
        float avg;
        char name;
        void getdata(int x,int y,int z,char p)
          {
            sub1=x;
            sub2=y;
            sub3=z;
            name=p;
          }
          void cal()
          {
            avg=sub1+sub2+sub3/3;
          }
          void check()
          {
            if(avg>80)
            {
              cout<<"A grade"<<endl;
            }
            else if(avg>=50)
              {
                cout<<"B grade"<<endl;
              }
              else
              {
                cout<<"C grade"<<endl;
              }
          }
          void show()
          {
            
            cout<<"Average="<<avg<<endl;
          }

      };
int main()
  {
    int sub1,sub2,sub3;
    float avg;
    char name;
    
    cout<<"\nEnter your marks for 3 subjects respectively";
    cin>>sub1>>sub2>>sub3;
    cout<<"Enter your name"<<endl;
    cin>>name;

    student s;
    s.getdata(sub1,sub2,sub3,name);
    s.cal();
    s.check();
    s.show();

    return 0;
  }