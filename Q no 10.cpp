# include <iostream>
using namespace std;
int main(){
	// Add
	int integer1[5] = {2,4,6,8,10};
	int integer2[5] = {1,3,5,7,9};
	int size = 5;
	int sum[size];
	for(int i=0; i<size; i++){
		sum[i] = integer1[i] + integer2[i];
	}
	cout << "The Sum of two integer arrays are: ";
	for (int i=0 ;i<size; i++){
		cout << sum[i] << " ";
	}
	cout << endl;
	// Concatenate
	int integer3[] = {2,4,6,8};
	int integer4[] = {1,3,5,7,9};
	int size1 = sizeof(integer3) / sizeof(integer3[0]);
	int size2 = sizeof(integer4) / sizeof(integer4[0]);
	int concatenate[size1 + size2];
	for (int i=0; i<size1; i++){
		concatenate[i] = integer3[i];
	}
	for (int i=0; i<size2; i++){
		concatenate[size1 + i] = integer4[i];
	}
	cout << "The Concatenate Array is: ";
	for (int i=0; i<size1 + size2; i++){
		cout << concatenate[i] << " ";
	}
	cout << endl;
	return 0;
}