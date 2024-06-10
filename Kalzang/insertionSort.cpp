#include <iostream>
using namespace std;

void insertionSort(int arr[], int size, int &count)
{
    int i, j;
    for (i = 1; i < size; i++)
    {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
            count++;  
        }
        arr[j + 1] = temp;
      
        if (j != i - 1) {
            count++;
        }
    }
}

int main()
{
    int n, i;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int count = 0;
    int arr[n];
    
    cout << "Enter the elements of the array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n, count);
    cout << "\nSorted array using insertion sort:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Number of iterations: " << count << endl;

    return 0;
}
