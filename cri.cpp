#include<iostream>
#include<stdio.h>
using namespace std;
class Cricket
{
    private:
    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    float calcavg()
    {
        return batavg=runs/(innings-notout);
        
    }
    public:

        void readdata();
        void displaydata();
};
         void Cricket::readdata()
        {
            
            cout<<"\n BATSMAN CODE:";
            cin>>bcode;
            cout<<"\n BATSMAN NAME:";
            cin>>(bname);
            cout<<"\n NO OF INNINGS:";
            cin>>innings;
            cout<<"\n NO OF NOTOUT :";
            cin>>notout;
            cout<<"\n NO OF RUNS:";
            cin>>runs;
             batavg=calcavg();
        }
        void Cricket::displaydata()
        {
            cout<<"\n   MATCH INFORMATION ";
            cout<<"\n------------------------\n";
            cout<<"\n BATSMAN CODE:"<<bcode<<endl;
            cout<<"\n BATSMAN NAME:"<<bname<<endl;
            cout<<"\n NO OF INNINGS:"<<innings<<endl;
            cout<<"\n NO OF NOTOUT:"<<notout<<endl;
            cout<<"\n NO OF RUNS:"<<runs<<endl;
            cout<<"\n BATSMAN AVERAGE:"<<batavg<<endl;
}


int main()
{
   
    Cricket c1;
    c1.readdata();
    c1.displaydata();
    
    return 0;
}



