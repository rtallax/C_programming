/*
 * Write a function to find the longest common prefix string amongst an array of strings.
 * If there is no common prefix, return an empty string "".
 *
 * Input: strs = ["flower","flow","flight"]
 * Output: "fl"
 *
 * Input: strs = ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings. 
 */

#include<stdio.h>
#include<string.h>

char val(char *str)
{
	int i=0,j=0,temp=0 ;
	int arr[i][j];
	printf("str = %s\n",*str);
/*	for(i=0,i<3,i++)
	{
		for(j=0;j!='\0';j++)
		{	
			if(
		}
	}
	*/
}

int main()
{
	char strs[3][10] = {"flower","flow","flight"};
//	char strs = {"f","g","h","i","j","k"};
//	char (*fun)(char);
//	fun=&val;
	val(strs);
	return 0;
}
