/*
Lesson 3.2 Samples
Pawelski
3/23/2021
Sample programs from the notes.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Example #1
    int time = 20;
    if (time < 18) {
        cout << "Good day.\n";
    }
    else {
        cout << "Good evening.\n";
    }
    cout << "\n";
    
    // Example #2
    int num;
    cout << "Enter a number >> ";
    cin >> num;
    if (num < 0) {
        cout << "Negative\n";
    }
    else {
        cout << "Postive\n";
    }
    cout << "\n";

    // Example #3
    int grade;
    cout << "Enter the score you received >> ";
    cin >> grade;
    if (grade <= 100 && grade >= 93) {
        cout << "You got an A!\n";
    }
    else {
        cout << "You did not get an A...\n";
    }
    cout << "\n";

    // Example #4
    string fruit;
    cout << "What is your favorite fruit? >> ";
    cin >> fruit;
    if (fruit == "banana" || fruit == "mango")
    {
        cout << "I like that fruit too!\n";
    }
    else
    {
        cout << "Disgusting...\n";
    }
    return 0;
}
