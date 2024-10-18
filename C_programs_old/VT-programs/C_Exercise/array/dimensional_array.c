#include<stdio.h>
#define one_dimensional 1
#define two_dimensional 2
#define three_dimensional 3

#define non-pointer
#define bit one_dimensional

int main()
{

#if bit == 1
	int  arr[5]={2,4,6,8,10};
	int a, *ptr;
	ptr=arr;
	for(a=0;a<5;a++)
	{	
		printf("array address=%lu\t value=%u\n",ptr,*ptr++);
	}
#elif bit == 2
	int arr_2d[2][3]={{1,3,5},{7,9,11}};
	int i,j ;
	int (*ptr_2d)[3];
	ptr_2d = arr_2d ;
	for(i=0;i<2;i++)
	{
//		printf("addr of ptr=%lu\n",(ptr_2d + i));
		for(j=0;j<3;j++)
		{
		#ifdef non-pointer
			printf("%d  ",arr_2d[i][j]);
		#endif
		#ifdef pointer
			printf("%d\t",*(*(ptr_2d+i)+j));
		#endif
		}
	printf("\n");
	}
#elif bit == 3
	int arr_3d[2][3][4]=  {
				{
			        	{2,4,6,8},
			        	{10,12,14,16},
				        {18,20,22,24},
				},
				{
				 	{26,28,30,32},
					{34,36,38,40},
					{42,44,46,48},
				}
			      }; 
	int x,y,z ;
	int (*ptr_3d)[3][4];
	ptr_3d =&arr_3d;
	for(x=0;x<2;x++)
	{
		for(y=0;y<3;y++)
		{
			for(z=0;z<4;z++)
			{
		#ifdef non-pointer
				printf("%d  ",arr_3d[x][y][z]);
		#endif
		#ifdef pointer
				printf("%d\t",*(*(*(ptr_3d+x)+y)+z));	
		#endif	
			}
		printf("\n");
		}
	printf("\n");
	}				
#endif
	return 0;
}
