#include<iostream>
int main()
{
    int a,b,c;

    std::cout<<"\n enter value of a:";
    std::cin>>a;
    std::cout<<"\n enter value of b:";
    std::cin>>b;
    std::cout<<"\n enter value of c:";
    std::cin>>c;

    if(a>b)
    {
        std::cout<<"\n a is larger";
    }
    else if(b>c)
    {
        std::cout<<"\n b is larger";
    }
    else
    {
        std::cout<<"\n c is larger";
    }
}