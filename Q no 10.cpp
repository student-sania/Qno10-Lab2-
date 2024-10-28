# include <iostream>
using namespace std;
int main(){
	// Add Two Integer Arrays
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

	return 0;
}
