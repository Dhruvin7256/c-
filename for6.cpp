#include<iostream>
int main()
{
    int i,n,t1=1,t2=1,a=1;

    std::cout<<" enter value of n:";
    std::cin>>n;

    std::cout<<"t1"std::cout<<"t2"<<t2<<t1;
    

    for(i=3;i<=n;++i)
    {
        t1=t2;
        t2=a;
        a=t1+t2;

        std::cout<<"a"<<a;
    }
}