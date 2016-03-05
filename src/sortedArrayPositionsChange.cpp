/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>
#include<stdlib.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	
	if (Arr == NULL || len <= 0)
		return NULL;
	int temp = 0, count = 0, i;
	for (i = 1; i < len; i++) {
		if (Arr[i - 1] > Arr[i]){
		if (count == 0){
				temp = i - 1;
				count++;
			}
			else
				break;
		}
	}
	if (count == 1){
		Arr[temp] = Arr[temp] + Arr[i];
		Arr[i] = Arr[temp] - Arr[i];
		Arr[temp] = Arr[temp] - Arr[i];
	}
}
