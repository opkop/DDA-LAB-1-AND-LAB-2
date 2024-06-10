#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high, int& count) {
    int pivot = arr[high];  
    int i = low - 1;  

    for (int j = low; j <= high - 1; j++) {
        
        count++;
        if (arr[j] < pivot) {
            i++;  
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high, int& count) {
    if (low < high) {
        int pi = partition(arr, low, high, count);

        // Separately sort elements before and after partition
        quickSort(arr, low, pi - 1, count);
        quickSort(arr, pi + 1, high, count);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    
    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;
    quickSort(arr, 0, n - 1, count);

    cout << "\nSorted array using quick sort:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl << "Number of iterations: " << count << endl;

    return 0;
}
