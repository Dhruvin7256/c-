#include<iostream>
int main()
{
    int a;

    std::cout<<"\n enter value of a:";
    std::cin>>a;

    if(a%5==0 && a%3==0)
    {
        std::cout<<"\n a is divisible by 5 and 3";
    }
    else
    {
        std::cout<<"\n a is not divisible by 5 and 3";
    }
}