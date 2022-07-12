#include<iostream>
int main()
{
	int i,j,n=2;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
	{
      	std::cout<<"\t"<<n;
 	}
		n+=2;
		std::cout<<"\n";
	}
} 