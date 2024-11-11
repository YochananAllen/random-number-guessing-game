// random number guessing game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Name: Yochanan Allen 
//Write a program that generates a random number and asks the user to guess what the number is.
//If the user’s guess is higher than the random number, the program should display “Too high, try again.”
//If the user’s guess is lower than the random number, the program should display “Too low, try again.”
//The program should use a loop that repeats until the user correctly guesses the random number.

#include <iostream>
#include <random>

using namespace std;

int main() {
   
    random_device rd;
    default_random_engine gen(rd());       
    uniform_int_distribution<> distr(1, 100); 

    int randomNumber = distr(gen); 
    int guess = 0;

    cout << "Welcome to the Random Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

  
    while (guess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high, try again." << endl;
        }
        else if (guess < randomNumber) {
            cout << "Too low, try again." << endl;
        }
        else {
            cout << "Congratulations! You've guessed the number!" << endl;
        }
    }

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
