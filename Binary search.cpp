// linear search time complexity is O(N), we can search an element in less than O(N) using binary search
// for implementing a binary search, element of an array should be in sorted order

#include<iostream>
using namespace std;

int BinarySearch(int arr[], int key, int n){
    int s = 0; // starting index
    int e = n; // ending index 
    while(s <= e){
        int count = 1;
        cout << "S: " << s << ", E: " << e <<endl;
        
        int mid = (s + e)/2;
        cout << "Mid[ " << count <<" ]: " << mid <<endl;
        
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        count++;
    }
    return -1;
}

int main(){
    int n = 8;
    int key = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8};
    
    cout << "Element is present at index:  " << BinarySearch(arr, key, n);
}
