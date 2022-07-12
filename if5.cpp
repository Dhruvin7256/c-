#include<iostream>
int main()
{
    int a,b,c;

    std::cout<<"\n enter value of a:";
    std::cin>>a;
    std::cout<<"\n enter value of b:";
    std::cin>>b;

    c=a*b;

    if(c%a==0 && c%b==0)
    {
        std::cout<<"\n it is divisible by its multiplication 3 and 7";
    }
    else
    {
        std::cout<<"\n it is not divisible by its multiplication 3 and 7";
    }
}