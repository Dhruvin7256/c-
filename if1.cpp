#include<iostream>
int main()
{
    int a,b;

    std::cout<<"\n enter value of a:";
    std::cin>>a;
    std::cout<<"\n enter value of b:";
    std::cin>>b;

    if(a<b)
    {
        std::cout<<" a is smaller";
    }
    else
    {
        std::cout<<"b is smaller";
    }
}