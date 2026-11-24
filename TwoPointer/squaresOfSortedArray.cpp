#include<iostream>
using namespace std;
void SquareOfSorted(int arr[],int n) {
int pos = n - 1;
int i = 0, j = n - 1;
int res[5] = { 0,0,0,0,0 };
for (int k = 0;k < n;k++) {
	if (arr[i] * arr[i] >= arr[j] * arr[j]) {
		res[pos] = arr[i]*arr[i];
		pos--;
		i++;
	}
	else {
		res[pos] = arr[j]*arr[j];
		pos--;
		j--;

	}
	
	
}
for (int i = 0;i < 5;i++) {
	arr[i] = res[i];
}

}
int main() {
	int arr[] = { -8,2,4,5,9 };
	SquareOfSorted(arr, 5);
	for (int i = 0;i < 5;i++) {
		cout <<arr[i] << " ";
	}
	cout << endl;
	
}