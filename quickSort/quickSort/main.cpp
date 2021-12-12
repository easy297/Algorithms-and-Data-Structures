//
//  main.cpp
//  quickSort
//
//  Created by Izim on 10.12.2021.
//

#include <iostream>
using namespace std;

static void swap(int* arr, int x, int y)
{
int temp = arr[x];
arr[x] = arr[y];
arr[y] = temp;
}

static int partition(int* arr, int p, int r)
{
    int i = p - 1, k = p;
    while(k < r)
    {
        if(arr[k] < arr[r])
        {
            swap(arr, k, i + 1);
            i++;
        }
        k++;
    }
    swap(arr, i + 1, r);
    return i + 1;
}

static void quickSort(int* arr, int p, int r)
{
    if(p < r)
    {
        int q = partition(arr, p, r);
        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, r);
    }
}

int main() {
    int p = 0;
    int n;
    std::cout << "Enter your array's N: ";
    std::cin >> n;
    int r = n - 1;
    int* arr = new int[n];
    std::cout << "Fulfill your array: ";
    for (int i = 0; i < n; i++)
    {
    std::cin >> arr[i];
    }

    quickSort(arr, p, r);
    std::cout << "Here's your array: ";
    for (int i = 0; i < n; i++)
    {
    std::cout << arr[i] << " ";
    }
}
