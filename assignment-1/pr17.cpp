//WAP that reads a character and prints out whether or not it is a vowel or a consonant.
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter an alphabet character: ";
    cin >> ch;

    // Convert to lowercase to simplify comparison
    char lowerCh = tolower(ch);

    // Check if the character is an alphabet
    if ((lowerCh >= 'a' && lowerCh <= 'z')) {
        // Check for vowels
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << "Error: Please enter a valid alphabet character." << endl;
    }

    return 0;
}

//output:
//Enter an alphabet character: A
//A is a vowel.
//Enter an alphabet character: b
//b is a consonant.
//Enter an alphabet character: 1
//Error: Please enter a valid alphabet character.
//Enter an alphabet character: @
//Error: Please enter a valid alphabet character.
