 
#include <bits/stdc++.h>
using namespace std;

 
void mergeTwoHalf(int A[], int n)
{
	int half_i = 0;  
    int temp[n];
    for (int i = 0; i < n - 1; i++) {
		if (A[i] > A[i + 1]) {
			half_i = i + 1;
			break;
		}
	}
 if (half_i == 0)
		return;

	int i = 0, j = half_i, k = 0;
	while (i < half_i && j < n) {
		if (A[i] < A[j])
			temp[k++] = A[i++];
		else
			temp[k++] = A[j++];
	}

	 
	while (i < half_i)
		temp[k++] = A[i++];
    while (j < n)
		temp[k++] = A[j++];

	for (int i = 0; i < n; i++)
		A[i] = temp[i];
}

 
int main()
{
	int A[] = { 2, 3, 8, -1, 7, 10 };
	int n = sizeof(A) / sizeof(A[0]);
	mergeTwoHalf(A, n);
for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	return 0;
}
