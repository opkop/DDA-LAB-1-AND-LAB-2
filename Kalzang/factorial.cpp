#include<iostream>
using namespace std;

int fact(int n,int &count)
{
    count++;
    if(n==0)
      return 1;
    return n*fact(n-1,count);
}
int main()
{
    int n;
    cout<<"Enter a number:\n";
    cin>>n;
    int call_count = 0;
    int result = fact(n,call_count);
    
    cout << "Factorial of " << n <<" "<< " is " << result << endl;
    cout << "Number of recursive calls: " << call_count << endl;

}