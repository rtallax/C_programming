#if 1
#include <stdio.h>

int main()
{

	//Pointer to an array of five numbers
		int(*a)[5];

	int b[5] = { 1, 2, 3, 4, 5 };

	int i = 0;

	//Points to the whole array b

		a = &b;

	for (i = 0; i < 5; i++)
		printf("*(*a+i):%d\n",*(*a+i));
		//cout << *(*a + i) << endl;

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	//creating an array
		int arr[] = { 1, 2, 3 };
	const int SIZE = 3;
	// we can make an integer pointer array to
	// storing the address of array elements
	int i, *ptr[SIZE];

	for (i = 0; i < SIZE; i++) {

		// assigning the address of integer.
		ptr[i] = &arr[i];
	}

	// printing values using pointer
	for (i = 0; i < SIZE; i++) {

		 printf("Value of arr[%d] = %d, %d\n",i,*ptr[i],arr[i]);
		//cout << "Value of arr[" << i << "] = " << *ptr[i] << endl;
	}
	return 0;
}

#endif
