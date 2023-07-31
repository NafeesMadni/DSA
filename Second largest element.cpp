// Hint: Check if the code is correctly handling the case when all elements in the array are the same.

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    if (secondLargest != INT_MIN)
    {
        return secondLargest;
    }
    else
    {
        return -1;
    }
}

int main(){
    int n = 5;
    vector<int> arr = {9, 9, 9, 9, 9};

    cout<<findSecondLargest(n, arr);
    
    return 0;
}