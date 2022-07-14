#include<iostream>
int main()
{
    int i,n,j=1;

    std::cout<<"enter the value:";
    std::cin>>n;
    for(i=1;i<=n;i*=2,j++)
    {
        std::cout<<"\n"<<i*j;
    }
}