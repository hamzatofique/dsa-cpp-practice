#include<iostream>
using namespace std;
void zeroAtEnd(int arr[], int size) {
	if (size == 0) return;
	int i = 0;
	for (int j = 0;j < size;j++) {
		if (arr[j] !=0) {
			arr[i] = arr[j];
			i++;

		}
	}
	while (i <= size-1) {
		arr[i] = 0;
		i++;
	}
}
int main() {
	//removing duplicate in sorted place as original
	//slow-fast pointer approach
	int arr[] = {1,1,0,0,4,4};
	int n = 6;
	cout << "Original Array:";
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	zeroAtEnd(arr, 6);
	cout << "Zeroes at end:";
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
}