#include <iostream>
using namespace std;
int main(){
    int n = 9;
    int arr[n] = {1, 3, 5, 6, 7, 9, 4, 2, 8, 9};
    for (int i = 0; i < n-1; i++){ 
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    // After sorting this array 
    for (int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }cout<<endl;
}
