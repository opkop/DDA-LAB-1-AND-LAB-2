#include <iostream>
using namespace std;

int SequentialSearch(int arr[], int n, int key, int& iterations) {
    iterations = 0; 
    for (int i = 0; i < n; ++i) {
        iterations++; 
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n;
    cout<<"Enter a number of element:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter a Sorted Array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter a element to find:\n";
    cin>>key;
    int iterations; 

    int result = SequentialSearch(arr, n, key, iterations);
    if (result != -1) {
        cout << "Element found at index: " << result << " with " << iterations << " iterations." << endl;
    } else {
        cout << "Element not found in the array with " << iterations << " iterations." << endl;
    }

    return 0;
}
