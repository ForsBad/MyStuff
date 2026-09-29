#include <iostream>
#include "sorts.h"


int main(){
	using namespace std;
	int arr1[5] = {12,23,34,45,65};
	int arr2[5] = {87,76,54,43,32};
	int res1 = isSorted(arr1, 5);
	int res2 = isSorted(arr2, 5);

	cout << "res1" << res1 << "res2" << res2 << endl;
}
