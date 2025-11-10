#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (islower(ch))
        cout << "Uppercase: " << (char)toupper(ch);
    else if (isupper(ch))
        cout << "Lowercase: " << (char)tolower(ch);
    else
        cout << "Not a letter.";

    return 0;
}
