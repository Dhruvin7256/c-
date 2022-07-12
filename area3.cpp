#include<iostream>
int main()
{
    int area,breadth,height;

    std::cout<<"\n enter breadth of a rectangle:";
    std::cin>>breadth;
    std::cout<<"\n enter height of a rectangle:";
    std::cin>>height;

    area=breadth*height;

    std::cout<<"\n area of rectangle:"<<area;
}