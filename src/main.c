#include <stdio.h>
long getfactorial(long value);
void main(void)
{
	printf("This is first ITI Repo");
	long var;
	printf("Enter a number");
	scanf("%d",&var);
	printf("factorial is %d",getfactorial(var));
}
long getfactorial(long value)
{
	if(value ==0 || value ==1) return 1;
	else{
		long res = 1;
		for(long i = value ;i>=2;--i)
		{
			res *=i;
		}
		return res;
	}
	
}