// w.c.p to check whether a number is prime or not using while and for loop//
#include<stdio.h>
int main()
{
	int n,i=2;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n){
		break;
		i++;
	}
if(n<=1){
	printf("not a prime number");
}
else if(i==n){
	print("not a number");
}
return 0;
}
