#include<iostream>
#include<stdio.h>
using namespace std;
class Student
{
    private:
    int admno;
    char sname[20];
    int eng,maths,science;
    float total;
    float ctotal()
    {
        return eng+maths+science;
        
    }
    public:

        void Takedata()
        {
            
            cout<<"\n ADDMISSION NO:";
            cin>>admno;
            cout<<"\n STUDENT NAME:";
            cin>>(sname);
            cout<<"\n ENTER MARKS OF ENG:";
            cin>>eng;
            cout<<"\n ENTER MARKS OF MATHS:";
            cin>>maths;
            cout<<"\n ENTER MARKS OF SCIENCE:";
            cin>>science;
             total=ctotal();
        }
        void showdata()
        {
            cout<<"\n   STUDENT DETAILS ";
            cout<<"\n------------------------\n";
            cout<<"\n ADDMISSION NO:"<<admno<<endl;
            cout<<"\n STUDENT NAME:"<<sname<<endl;
            cout<<"\n MARKS OF ENG:"<<eng<<endl;
            cout<<"\n MARKS OF MATHS:"<<maths<<endl;
            cout<<"\n MARKS OF SCIENCE:"<<science<<endl;
            cout<<"\n TOTAL IS:"<<total<<endl;
}
};

int main()
{
   
    Student s1;
    s1.Takedata();
    s1.showdata();
    
    return 0;
}



