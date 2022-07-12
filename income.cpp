#include<iostream>
int main()
{
    float income,tax;

    std::cout<<"\n enter income:";
    std::cin>>income;

    if(income<2500)
    {
        tax=income*0;
        std::cout<<"\n Tax:"<<tax;
    }
    else if(income>2500 && income<5000)
    {
        tax=(income-2500)*0.10;
        std::cout<<"\n Tax:"<<tax;
    }
    else if(income>5000 && income<10000)
    {
        tax=(income-5000)*0.20+250;
        std::cout<<"\n Tax:"<<tax;
    }
    else if(income<10000)
    {
        tax=(income-10000)*0.30+1000;
        std::cout<<"\n Tax:"<<tax;
    }
}