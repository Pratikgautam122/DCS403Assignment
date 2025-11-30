#include <iostream>
using namespace std;

int fibonacci(int n, int current = 0, int next = 1) {
    if (n == 0) return current;
    return fibonacci(n - 1, next, current + next);
}

int main() {
    int n;
    cout<<"Enter the term you want to find : "<<endl;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}