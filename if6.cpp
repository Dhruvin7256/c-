#include<iostream>
int main()
{
    int a,b,c,d;

    std::cout<<"\n enter value of a:";
    std::cin>>a;
    std::cout<<"\n enter value of b:";
    std::cin>>b;

    c=a*b;
    d=a+b;

    if(c%d==0)
    {
        std::cout<<"\n its multiplication is divisible by its addition";
    }
    else
    {
        std::cout<<"\n its multiplication is not divisible by its addition";
    }
}
