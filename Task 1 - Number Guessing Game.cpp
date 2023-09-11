#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	// generates a random number!
    srand(time(0));
    int num = rand() % 20 + 1; // to avoid 0 added 1
    
    int input = 0, attempts = 0;
    cout << "Guess the correct number!" << endl;
    
    while(input != num)
    {
        // enter the number
        cin >> input;
        
        // if guessed number is lesser than actual number
        if(input < num)
        {
            cout << "Too Low!" << endl;
            cout << "Try Again: ";
        }
        
        // if guessed number is greater than actual number
        else if(input > num)
        {
            cout << "Too High!" << endl;
            cout << "Try Again: ";
        }
        attempts++;
        cout << endl;
    }
    cout << "Congratulations!" << endl;
    
    if(attempts == 1)
        cout << "You guessed the correct number in just 1 attempt." << endl;
    else
        cout << "You guessed the correct number in " << attempts << " attempts." << endl;
    
    return 0;
}
