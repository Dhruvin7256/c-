#include<iostream>
int main()
{
    float m,p,c,Total,Per,Grade;

    std::cout<<"\n enter marks of Maths:";
    std::cin>>m;
    std::cout<<"\n enter marks of Physics:";
    std::cin>>p;
    std::cout<<"\n enter marks of Chemistry:";
    std::cin>>c;

    Total=m+p+c;

    std::cout<<"\n Total:"<<Total;

    Per=Total/3;

    std::cout<<"\n Percentage:"<<Per;

    if(Per>95)
    {
        std::cout<<"\n Grade A";
    }
    else if(Per>80)
    {
        std::cout<<"\n Grade B";
    }
    else if(Per>65)
    {
        std::cout<<"\n Grade C";
    }
    else if(Per>35)
    {
        std::cout<<"\n Grade D";
    }
    else if(Per<35)
    {
        std::cout<<"\n Grade E";
        std::cout<<"\n You are FAIL";
    }

}