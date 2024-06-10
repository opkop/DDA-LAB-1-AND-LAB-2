#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right, int &count) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        count++; // Count each comparison
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right, int &count) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid, count);
        mergeSort(arr, mid + 1, right, count);

        merge(arr, left, mid, right, count);
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
    mergeSort(arr, 0, n - 1, count);

    cout << "\nSorted array using merge sort:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl << "Number of iterations: " << count << endl;

    return 0;
}
