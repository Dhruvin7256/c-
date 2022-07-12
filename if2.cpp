#include<iostream>
int main()
{
    int a;

    std::cout<<"\n enter value of a :";
    std::cin>>a;

    if(a>0)
    {
        std::cout<<"\n a is positive";
    }
    else if(a<0)
    {
        std::cout<<"\n a is negative";
    }
}