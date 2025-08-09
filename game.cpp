#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "Welcome to the Math Quiz Game!\n";

    // Question 1
    cout << "1. What is 5 + 3? ";
    cin >> answer;
    if (answer == 8) {
        cout << "Correct\n";
        score++;
    } else {
        cout << "Wrong. The correct answer is 8.\n";
    }

    // Question 2
    cout << "2. What is 12 - 7? ";
    cin >> answer;
    if (answer == 5) {
        cout << "Correct\n";
        score++;
    } else {
        cout << "Wrong. The correct answer is 5.\n";
    }

    // Question 3
    cout << "3. What is 4 * 2? ";
    cin >> answer;
    if (answer == 8) {
        cout << "Correct\n";
        score++;
    } else {
        cout << "Wrong. The correct answer is 8.\n";
    }

    cout << "\nYou scored " << score << " out of 3.\n";
    cout << "Thanks for playing game\n";

    return 0;
}

