#include <iostream>
using namespace std;

void CurrentState(char board[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
        	cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "-----------" << endl;
    }
    cout << "------------------------------------" << endl;
}
void turn(char board[3][3], char player)
{
	cout << "Player " << player << ", enter your move (row & column): ";
 	
	int row , col;
    cin >> row >> col; 
	    
	while(row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ')
    {
        cout << "Invalid Try Again" <<endl;
        cout << "Enter row, col: ";
        cin >> row >> col;
    } 
    board[row][col] = player;
}
bool CheckDraw(char board[3][3]) 
{
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            if (board[i][j] == ' ') 
			{
                return false; // There is an empty space, the game is not a draw yet
            }
        }
    }
    return true; // All spaces are filled, it's a draw
}
bool CheckWin(char board[3][3], char player)
{
	// Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) 
	{
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) 
		{
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || 
		(board[0][2] == player && board[1][1] == player && board[2][0] == player)) 
	{
        return true;
    }
    
    return false;
}
int main()
{
    char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    
    system("CLS");
    cout << "Welcome to Tic-Tac-Toe!" << endl << endl;
    
    // assigning X and O to players
    char p1 = 'X', p2 = 'O';
    cout << "Player 1: " << p1 << endl;
    cout << "Player 2: " << p2 << endl;
    cout <<"\nLet's Start!" << endl;
    
    char currentPlayer = p1;
    
    while(1)
    {
        CurrentState(board);
        
        turn(board, currentPlayer);
        
        if (CheckWin(board, currentPlayer)) 
		{
			system("CLS");
    		CurrentState(board);
            cout << "Player " << currentPlayer << " wins!" << endl << endl;
            break;
        } else if (CheckDraw(board)) 
		{
			system("CLS");
    		CurrentState(board);
            cout << "It's a draw!" << endl << endl;
            break;
        }
        currentPlayer = (currentPlayer == p1) ? p2 : p1;
		system("CLS");
    }
    
    char choice;
    cout << "Do You Want to Play Again? (Y/N): ";
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y') 
	{
        main(); // Restart the game
    } 
	else 
	{
        cout << "\nThanks for playing!" << endl;
    }
    return 0;
}

