#include<iostream>
int main()
{
    float a,b,c;
    std::cout<<"Enter the value of rate : ";
    std::cin>>a;
    std::cout<<"Enter the value of quntity: ";
    std::cin>>b;
    std::cout<<"rate   \t  quntity   \tamount\t    discount 5%\t\tbillamount\tgst 18%  \t netbill\n";
    std::cout<<" "<<a<<"\t "<<b<<"\t\t "<<a*b<<"\t\t"<<(a*b)*0.05<<"\t\t "<<a*b-((a*b)*0.05)<<"\t\t "<<(a*b-((a*b)*0.05))*0.18<<"\t\t "<< a*b-((a*b)*0.05)+((a*b-((a*b)*0.05))*0.18);
    
    
    
}
