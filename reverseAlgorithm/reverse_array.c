/*
 * Demo:
 *      array reverse based on C
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// define int array
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	// define the tmp
	int tmp = 0;
	// exchange the array element
	for(int i=0,j=sizeof(array)/sizeof(array[0])-1;i<j;i++,j--)
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
	// print the array element
	for(int index=0;index<sizeof(array)/sizeof(array[0]);index++)
	{
		if(index == sizeof(array)/sizeof(array[0])-1)
		{
			printf("%d\n", array[index]);
		}
		else
		{
			printf("%d ", array[index]);
		}
	}

	system("pause");
	return 0;
}

