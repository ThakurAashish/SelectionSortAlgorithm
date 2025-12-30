// C++
// Implementation of Selection Sort 

#include<iostream>
using namespace std;

// Function for Selection Sort
void SelectionSort( int arr [], int n ){
    int i , j , minIndex;

    // Unsorted SubArray
    for ( int i = 0; i < n-1 ; i++){
        
    // Unsorted Array 
        int minIndex = i ;
    for (int j = i+1 ; j<n ; j++){

    // Swap the found minimum element with 1st element     
        if (arr[j] < arr [minIndex])
        minIndex = j;
    }
    swap(arr[minIndex], arr[i]);
    }
}

// Function for Print An array
void printArray(int arr[], int size){
    int i ;
    for(i =0 ; i< size ; i++) {
        cout << arr[i] << " ";  
    }
}

// Function Program 
int main()
{
    int arr[] = { 64, 25, 12, 22, 11 };

    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    SelectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}