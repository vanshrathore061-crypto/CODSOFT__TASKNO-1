TIC TAC TOE GAME
#include <iostream>
using namespace std;

// Function to display the game board
void displayBoard(char board[3][3]) {
    cout << "\n";
    cout << "     |     |     " << endl;
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
    cout << "     |     |     " << endl;
    cout << "\n";
}

// Function to check if a player has won
bool checkWin(char board[3][3], char player) {

    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player) {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player &&
            board[1][i] == player &&
            board[2][i] == player) {
            return true;
        }
    }

    // Check diagonals
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player) {
        return true;
    }

    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player) {
        return true;
    }

    return false;
}

// Function to check if the board is full
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] >= '1' && board[i][j] <= '9') {
                return false;
            }
        }
    }

    return true;
}

int main() {

    char playAgain;

    do {
        // Create and initialize the board
        char board[3][3] = {
            {'1', '2', '3'},
            {'4', '5', '6'},
            {'7', '8', '9'}
        };

        char currentPlayer = 'X';
        int choice;
        bool gameOver = false;

        cout << "=============================" << endl;
        cout << "       TIC-TAC-TOE GAME      " << endl;
        cout << "=============================" << endl;

        cout << "\nPlayer 1: X" << endl;
        cout << "Player 2: O" << endl;

        // Game loop
        while (!gameOver) {

            displayBoard(board);

            cout << "Player " << currentPlayer
                 << ", enter your move (1-9): ";
            cin >> choice;

            // Convert choice into row and column
            int row = (choice - 1) / 3;
            int col = (choice - 1) % 3;

            // Validate the move
            if (choice < 1 || choice > 9 ||
                board[row][col] == 'X' ||
                board[row][col] == 'O') {

                cout << "Invalid move! Please try again.\n";
                continue;
            }

            // Update the board
            board[row][col] = currentPlayer;

            // Check for win
            if (checkWin(board, currentPlayer)) {
                displayBoard(board);
                cout << "Congratulations! Player "
                     << currentPlayer << " wins!" << endl;
                gameOver = true;
            }

            // Check for draw
            else if (checkDraw(board)) {
                displayBoard(board);
                cout << "It's a draw!" << endl;
                gameOver = true;
            }

            // Switch players
            else {
                if (currentPlayer == 'X')
                    currentPlayer = 'O';
                else
                    currentPlayer = 'X';
            }
        }

        // Ask to play again
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "\nThanks for playing Tic-Tac-Toe!" << endl;

    return 0;
}
