#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n = 3;
    int arr[n] = {10, 20, 300};

    int maxNo = INT_MIN; // The minimum value in cpp is stored in maxNo
    int minNo = INT_MAX; // The maximum value in cpp is stored in minNo
    
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]); // compare maxNo & arr[i] value 
        minNo = min(minNo, arr[i]);
    }

    cout << maxNo << " " << minNo; 
    
    return 0;
}