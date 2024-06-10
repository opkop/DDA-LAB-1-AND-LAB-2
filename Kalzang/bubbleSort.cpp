#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size, int& count)
{
    int i, r;
    for (r = 0; r < size - 1; r++)
    {
        for (i = 0; i < size - 1 - r; i++) 
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                count++;
            }
        }
    }
}

int main()
{
    int n, i;
    cout << "Enter the size of the array: ";
    cin >> n;
    int count = 0;
    int arr[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sorted Array using bubble sort: ";
    bubbleSort(arr, n, count);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Number of iterations: " << count << endl;
    return 0;
}
