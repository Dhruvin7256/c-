#include<iostream>
int main()
{
    int x,y;

    std::cout<<"\n enter value of x:";
    std::cin>>x;
    std::cout<<"\n enter value of y:";
    std::cin>>y;

    if(x<2000 || x>3000)
    {
        std::cout<<"\n Value of x:"<<x;
    }
    if(y>100 && y<500)
    {
        std::cout<<"\n Value of y:"<<y;
    }
}