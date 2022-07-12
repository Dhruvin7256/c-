#include<iostream>
int main()
{
	char i,j,n;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
	{
        n=i+64;
		std::cout<<"\t"<<n;
	}
		std::cout<<"\n";
	}
} 