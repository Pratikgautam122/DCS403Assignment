#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";
    return 0;
}

