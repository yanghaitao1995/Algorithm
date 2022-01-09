/*
 * Demo:
 *      The bubble sort algorithm based on C
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// initialize an array
	int array[10] = {3,2,5,1,9,1,6,10,4,9};
	// initialize tmp
	int tmp = 0;
	// bubble sort
	for(int j=sizeof(array)/sizeof(array[0])-1;j>1;j--)
	{
		for(int i=0;i<j;i++)
		{
			if(array[i] > array[i+1])
			{
				tmp = array[i];
				array[i] = array[i+1];
				array[i+1] = tmp;
			}
			else
			{
				continue;
			}
		}
	}

	// print the array based on bubble sort algorithm
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

