#include<iostream>
int main()
{
    int i,n=0;

    std::cout<<"enter the value:";
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            std::cout<<"\n"<<i*i;    
        }
        else
        {
            std::cout<<"\n"<<i;
        }
        
    }
}