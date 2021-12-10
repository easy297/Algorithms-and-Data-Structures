#include <iostream>

static void merge(int *arr, int N, int q) {

int size_left = q + 2;
int size_right = N - q;
int *left = new int[size_left];
int *right = new int[size_right];
int i = 0;
for (; i <= q; i++) {
left[i] = arr[i];
}
left[i] = INT_MAX;
int j = 0;
for (; j <= N - q - 2; j++) {
right[j] = arr[j + q + 1];
}
right[j] = INT_MAX;
int k = 0;
i = 0, j = 0;
while(k < N) {
if (left[i] <= right[j]) {
arr[k] = left[i];
k++;
i++;}
else {
arr[k] = right[j];
j++;
k++;
}
}
delete[] left;
delete[] right;

}

int main()
{
int n = 7;
int q = 3;
int arr[7] = { 4,6,8,12,5,7,9 };

merge(arr, n, q);

for (int i = 0; i < n; i++) {
std::cout << arr[i] << " ";
}
}
