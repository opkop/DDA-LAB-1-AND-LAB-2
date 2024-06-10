#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int size, int &count)
{
    for (int i = 0; i < size - 1; i++)
    {
        int imin = i;
        for (int j = i + 1; j < size; j++)
        {
            count++; 
            if (arr[j] < arr[imin])
            {
                imin = j;
            }
        }
        if (imin != i)
        {
            swap(arr[i], arr[imin]);
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    
    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 1;
    }

    int count = 0;
    int* arr = new int[n]; // Dynamically allocate array

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nSorted array using selection sort:" << endl;
    selectionSort(arr, n, count);  
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Number of iterations: " << count << endl;

    delete[] arr; // Free the allocated memory
    return 0;
}
