#include <iostream>
using namespace std;


int fib(int n, int &count) {
    count++;  
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1, count) + fib(n - 2, count);
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << " terms: ";
    int total_call_count = 0;
    for (int i = 0; i < n; ++i) {  
        int call_count = 0;
        int result = fib(i, call_count);
        total_call_count += call_count;
        cout << result << " ";
    }

    cout << "\nTotal number of recursive calls for computing Fibonacci series up to term " << n << ": " << total_call_count << endl;

    return 0;
}
