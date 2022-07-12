#include<iostream>
int main()
{
    int i,j,n=11;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            
            std::cout<<"\t"<<n++;
        }
        n+=5;
        std::cout<<"\n";
    }
}