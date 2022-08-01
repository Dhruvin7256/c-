#include<iostream>
#include<stdio.h>
using namespace std;
class Test
{
    private:
    int Testcode;
    string Description;
    int Nocandidates;
    int Centrereqd;
    float CALCNTR()
    {
        return (Nocandidates/100+1);
        
    }
    public:

        void SCHEDULE()
        {
            
            cout<<"\n ENTER VALUE OF TESTCODE:";
            cin>>Testcode;
            cout<<"\n ENTER DESCRIPTION:";
            cin>>(Description);
            cout<<"\n NO OF CANDIDATES:";
            cin>>Nocandidates;
            Centrereqd=CALCNTR();
        }
        void DISPTEST()
        {
            cout<<"\n   TEST INFORMATION ";
            cout<<"\n------------------------\n";
            cout<<"\n TESTCODE:"<<Testcode<<endl;
            cout<<"\n DESCRIPTION:"<<Description<<endl;
            cout<<"\n NO OF CANDIDATES:"<<Nocandidates<<endl;
            cout<<"\n NO OF CENTRE REQUIRED:"<<Centrereqd<<endl;
}
};

int main()
{
   
    Test t1;
    t1.SCHEDULE();
    t1.DISPTEST();
    
    return 0;
}



