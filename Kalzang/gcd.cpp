#include <iostream>
using namespace std;


int GCD(int a, int b, int &count) {
    count++; 
    if (b == 0)
        return a;
    return GCD(b, a % b, count);
}

int main() {
    int a, b;
    cout << "Enter two integers:\n";
    cin >> a >> b;
    
    int call_count = 0;
    int result = GCD(a, b, call_count);
    
    cout << "GCD of " << a << " and " << b << " is " << result << endl;
    cout << "Number of recursive calls: " << call_count << endl;

    return 0;
}
