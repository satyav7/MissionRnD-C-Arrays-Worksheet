#include "FunctionHeadersArrays1.h"
#include <stdio.h>

int main(){
	int arr[11] = {1,2,2,3,3,4,4,5,5,5,2};
	int len,i;


	len=removeArrayDuplicates(arr, 11);
	
	for (i = 0; i < len; i++)
		printf("%d", arr[i]);
	printf("\n");
	//Test RemoveArraysDuplicates
	/*
	int arr[3] = { 1, 2, 7 };
	int len = removeArrayDuplicates(arr, 3);
	printf("%d", len);
	*/

	//Test Students Count
	/*
	int arr2[3]={1,4,10};
	int *newarray=sortedArrayInsertNumber(arr, 3, 3);
	printf("%d %d %d %d", newarray[0], newarray[1], newarray[2],newarray[3]);
	*/
	
}