#include<iostream>
int main()
{
    float salary, grosssalary;

    std::cout<<"\n enter salary:";
    std::cin>>salary;


    if(salary<=5000)
    {
        grosssalary=salary*0.72;
        std::cout<<"\n grosssalary:"<<grosssalary;
    }
    else if(salary>5000 && salary<10000)
    {
        grosssalary=salary*0.58;
        std::cout<<"\n grosssalary:"<<grosssalary;
    }
    else if(salary>10000 && salary<15000)
    {
        grosssalary=salary*0.45;
        std::cout<<"\n grosssalary:"<<grosssalary;
    }
    else if(salary>15000)
    {
        grosssalary=salary*0.30;
        std::cout<<"\n grosssalary:"<<grosssalary;
    }
}