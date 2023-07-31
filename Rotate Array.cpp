// Rotate an array by k

#include <iostream>

using namespace std;

void RotateArray(int arr[], int n, int k){
    for (int i = 0; i < k; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    int n = 6, k = 3;
    int arr[n] = {1, 2, 3, 4, 5, 6};
    RotateArray(arr, n, k);
    return 0;
}