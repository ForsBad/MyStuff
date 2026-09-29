#include <iostream>
#include <utility>
#include "first file.h"
#include <string>

/*
int main(){

std::cout << "hello" << std::endl;
return 0;


}
*/


int main(int argc, char** argv){
	int SizeOfArr = 10;
	int MyArr[SizeOfArr]{12,45,45,56,78,12,89,45,-15,56};

	/*	std::cout << "ArrMax = " << GetMax(MyArr, SizeOfArr) << "\n";
	std::cout << "ArrMin = " << GetMin(MyArr, SizeOfArr) << "\n";
	std::cout << "SelectionSortMin" << SelectionSort(MyArr, SizeOfArr, 0);
	std::cout << "SelectionSortMax" << SelectionSort(MyArr, SizeOfArr, 1);
	return 0;
	int i = 0;
	while(MyArr[i] > 0){
	i++;
	}
	std::cout << MyArr[i] << std::endl;*/

	int sizeM = std::stoi(argv[1]);
	CreateDoubleMatrix(sizeM);

	return 0;

}
int hello(){
	std::cout << "hello" << std::endl;
	return 0;


}



int CreateDoubleMatrix(int size){
	int** DoubleMatrix = new int*[size];
	for(int i = 0; i < size; i++){
		DoubleMatrix[i] = new int[size];	
	
	}
	

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
		DoubleMatrix[i][j] = i+j;

		}
	}




	DoubleMatrix[size-1][size-1] = 10;
	std::cout << DoubleMatrix[size-1][size-1] << std::endl;
	std::cout << DoubleMatrix[6][7] << std::endl;


	for(int i = 0; i < size; i++){
		delete[] DoubleMatrix[i];	
	
	}

	delete[] DoubleMatrix;
	DoubleMatrix = nullptr;
	return 0;


}
/*

int GetMax(int* arr, int size){
	int ind_max = 0;
	for(int i =1;i < size; i++){
		if (arr[i] > arr[ind_max]){
			ind_max = i;
		}
	
	
	}
	return arr[ind_max];
}


int GetMin(int* arr, int size){
	int ind_min = 0;
	for(int i =1;i < size; i++){
		if (arr[i] < arr[ind_min]){
			ind_min = i;
		}
	
	
	}
	return arr[ind_min];
}

int SelectionSort(int* arr, int size, bool ascending){
	if (!ascending) {
		for(int i = size; i > 0;i--){
			int indMin = GetMin(arr, i);
			std::swap(arr[i - 1],arr[indMin]);	

		}

	}else{
		for(int i = 0; i < size;i++){
			int indMax = GetMax(arr, size - i);
			std::swap(arr[size - i - 1],arr[indMax]);	

		}

	}	
	
	return arr;


}
*/
