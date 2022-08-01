#include<iostream>
using namespace std;
class Report
{
    private:
    int adno;
    char name[20] ;
    int marks[5];
    float average;
    void GETAVG();
   
    public:

        void READINFO();
        void DISPLAYINFO();
};
        void Report::GETAVG()
        {
           int i; 
          average=0.0;
          for(i=0;i<5;i++)
          average+=marks[i];
          average/=5;
            
        }
        void Report::READINFO()
        {
            cout<<"\n ENTER ADMISSION NO:";
            cin>>adno;
            cout<<"\n ENTER STUDENT NAME:";
            cin>>(name);

            for(int i=0;i<5;i++)
            {
                cout<<" ENTER "<<i+1<<"THE MARKS:";
                cin>>marks[i];
            }
            GETAVG();
        }
        void Report::DISPLAYINFO()
        {
            cout<<"\n ADMISSION NO:"<<adno<<endl;
    
            cout<<"\n STUDENT NAME:"<<name<<endl;

            for(int i=0;i<5;i++)
            {
                cout<<" ENTER "<<i+1<<"THE MARKS:"<<marks[i]<<endl;;
            }
            cout<<"\n";
            cout<<"\n AVERAGE IS:"<<average<<endl;
        }
int main()
{
   
    Report r1;
    r1.READINFO();
    r1.DISPLAYINFO();
    
    return 0;
}



