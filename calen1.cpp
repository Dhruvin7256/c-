#include<iostream>
int main()
{
    float days,years,months,week,day;

    std::cout<<"\n enter no of days:";
    std::cin>>days;

    years=days/365;
    months=days/30;
    week=days/7;
    day=week/7;

    std::cout<<"\n years:"<<years<<"\n months:"<<months<<"\n week:"<<week<<"\n day:"<<day;
}