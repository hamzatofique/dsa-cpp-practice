//#include<iostream>
//#include<algorithm>
//#include<math.h>
//using namespace std;
//int rainwater(int arr[], int n)
//{
//	int l = 0, r = n - 1;
//	int left_max = 0, right_max = 0;
//	long long water = 0;
//	while (l < r) {
//		if (arr[l] < arr[r]) {
//			if (arr[l] >= left_max) left_max = arr[l];
//			else
//				water += left_max - arr[l];//water is only added when the bar is less then its max
//			l++;
//		}
//		else  {
//			if (arr[r] >= right_max) right_max = arr[l];
//			else
//   				water += right_max- arr[l];
//			r++;
//		}
//	}
//	return water;
//	
//
//}
//int main()
//{
//	int arr[5];
//	for (int i = 0;i< 5;i++) {
//		cin >> arr[i];
//	}
//	cout << endl;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	cout << "RainWater : " << rainwater(arr, n);
//	return 0;
//}