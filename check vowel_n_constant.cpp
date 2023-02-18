


// Five alphabets a, e, i, o and u are known as vowels. All other alphabets except these 5 alphabets are known are consonants.

// This program assumes that the user will always enter an alphabet.

// Program to Check Vowel or a Consonant Manually


#include <iostream>
using namespace std;

int main()
{
    char c;
    int LowercaseVowel;
    int UppercaseVowel;

    cout << "Kindly Enter an alphabet of choice: ";
    cin >> c;

    // evaluates and accepts to 1 (true) if c is a lowercase vowel
    LowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates and accepts to 1 (true) if c is an uppercase vowel
    UppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if either LowercaseVowel or UppercaseVowel is true
    if (LowercaseVowel || UppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
}