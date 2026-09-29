#include <iostream>
#include "sorts.h"

void SelectionSort(int* arr,unsigned int size, bool ascending){
	


}

int isSorted(const int* arr, unsigned int size){
	bool isAscending = true;
	bool isDescending = true;
	for(int i = 1; i < size; i++){
		if (arr[i] >= arr[i-1]){
			isDescending = false;
		}
		if (arr[i] <= arr[i-1]){
			isAscending = false;
		}
		
	}
	if(isAscending&&isDescending){
		return 0;
	}
	if(isAscending){
		return 1;
	}
	if(isDescending){
		return -1;
	}
}
