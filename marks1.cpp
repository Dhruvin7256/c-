#include<iostream>
int main()
{
    int m,p,c,total,per;

    std::cout<<"\n enter marks of maths:";
    std::cin>>m;
    std::cout<<"\n enter marks of physics:";
    std::cin>>p;
    std::cout<<"\n enter marks of chemistry:";
    std::cin>>c;

    total=m+p+c;

    std::cout<<"\n Total:"<<total;

    per=total/3;

    std::cout<<"\n Percentage:"<<per;
    
}