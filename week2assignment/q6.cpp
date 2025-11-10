#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    int vowels = 0, consonants = 0;
    for (char ch : text) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    return 0;
}