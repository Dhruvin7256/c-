#include<iostream>
#include<stdio.h>
using namespace std;
class Flight
{
    private:
    int Flightnumber;
    string Destination;
    float Distance;
    float Fuel;
    float CALFUEL()
    {
        if(Distance<=1000)
        {
            cout<<"\n Flight required 500 litre of Fuel";
        }
        else if(Distance>1000 && Distance<=2000)
        {
            cout<<"\n Flight required 1100 litre of Fuel";
        }
        else if(Distance>2000)
        {
            cout<<"\n Flight required 2200 litre of Fuel";
        }
        
    }
    public:

        void FEEDINFO();
        void SHOWINFO();
};
         void Flight::FEEDINFO()
        {
            
            cout<<"\n ENTER FLIGHT NUMBER:";
            cin>>Flightnumber;
            cout<<"\n ENTER DESTINATION:";
            cin>>(Destination);
            cout<<"\n ENTER TOTAL DISTANCE :";
            cin>>Distance;
            
        }
        void Flight::SHOWINFO()
        {
            cout<<"\n    FLIGHT INFORMATION ";
            cout<<"\n------------------------\n";
            cout<<"\n FLIGHT NUMBER:"<<Flightnumber<<endl;
            cout<<"\n DESTINATION:"<<Destination<<endl;
            cout<<"\n TOTAL DISTANCE:"<<Distance<<endl;
            Fuel=CALFUEL();
}

int main()
{
   
    Flight f1;
    f1.FEEDINFO();
    f1.SHOWINFO();
    
    return 0;
}



