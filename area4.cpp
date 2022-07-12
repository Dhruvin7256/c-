#include<iostream>
int main()
{
    int area,length,height;

    std::cout<<"\n enter length of triangle:";
    std::cin>>length;
    std::cout<<"\n enter height of triangle:";
    std::cin>>height;

    area=(length*height)/2;

    std::cout<<"\n area of triangle:"<<area;
}