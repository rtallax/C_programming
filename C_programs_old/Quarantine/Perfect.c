
// PERFECT No: sum of factors of given number except itself

// Example   n=6   , factors of 6 is 1,2,3,4,5,6    The Number(6) is divisible by factors which leaves remainder zero(0) are 1,2,3,except itself so, 6 is perfect number

#include<stdio.h>

int main()
{
	int i,n,sum=0,limit,j,temp;
	printf("Enter the limit:\t");
	scanf("%d",&limit);
	printf("Perfect Numbers is:\n");
	for(j=1;j<=limit;j++)
	{
		sum=0;
		temp=n=j;
		
		for(i=1;i<n;i++)
		{
			if(n%i==0)     //i=1,2,3 only
			{
				sum=sum+i;
			}
		}
	if(temp==sum)
		printf("%d\n",temp);
	}
	getchar();
}

/*

#include <stdio.h>   

int main()   
{   
 int i, Number, Sum = 0 ;   
  
 printf("\n Please Enter any number \n") ;   
 scanf("%d", &Number) ;   
 
 for(i = 1 ; i < Number ; i++)   
  {   
   if(Number % i == 0)   
     Sum = Sum + i ;   
  }    

 if (Sum == Number)   
    printf("\n %d is a Perfect Number", Number) ;   
 else   
    printf("\n%d is not the Perfect Number", Number) ;   

return 0 ;   
}
*/
