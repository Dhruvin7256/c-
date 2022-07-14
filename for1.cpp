#include<iostream>
int main()
{
    int i,n=0;

    std::cout<<"enter the value:";
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        std::cout<<"\n"<<i*i;
    }
}