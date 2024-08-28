/* Program that generates a random number and asks the
user to guess that number. Provides feedback on whether the guess is too
high or too low until the user guesses the correct number.*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    int i, quit_status = 0, flag = 0, original_number, num;
    srand(time(0));
    original_number = rand() % 10;

    cout << "\nEnter the number\n";
    cin >> num;

    while (quit_status == 0)
    {
        if (num == original_number)
        {
            flag = 1;
            break;
        }
        if (num > original_number)
        {
            cout << "Guessed number is greater than the original number\n";
            cout << "Enter the quit status\n";
            cin >> quit_status;
            if (quit_status == 1)
            {
                quit_status == 1;
                break;
            }
            cout << "Renter the number\n";
            cin >> num;
        }
        else if (num < original_number)
        {
            cout << "Guessed number is lesser than the original number\n";
            cout << "Enter the quit status\n";
            cin >> quit_status;
            if (quit_status == 1)
            {
                quit_status == 1;
                break;
            }
            cout << "Renter the number\n";
            cin >> num;
        }
    }
    if (flag == 1)
    {
        cout << "Hurray !! You guessed the right number....\n";
    }
    if (quit_status == 1)
    {
        cout << "You quit the game...\n";
    }
}
