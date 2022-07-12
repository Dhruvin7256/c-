#include<iostream>
int main()
{
    int celsius, farenheit;

    std::cout<<"\n enter celsius:";
    std::cin>>celsius;

    farenheit=(celsius*9/5)+32;

    std::cout<<"\n farenheit:"<<farenheit;
}