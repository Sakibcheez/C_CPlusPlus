#include <iostream>
#include <vector>

using namespace std;

const char PLAYER1 = 'X';
const char PLAYER2 = 'O';
const int SIZE = 3;

void printBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << endl;
        if (i < SIZE - 1) cout << "---------\n";
    }
}

bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < SIZE; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

bool isBoardFull(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') return false;
        }
    }
    return true;
}

int main() {
    vector<vector<char>> board(SIZE, vector<char>(SIZE, ' '));
    char currentPlayer = PLAYER1;

    while (true) {
        printBoard(board);
        int row, col;
        cout << "Player " << (currentPlayer == PLAYER1 ? "1 (X)" : "2 (O)") << ", enter your move (row and column): ";
        cin >> row >> col;

        // Check for valid input
        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        // Place the move on the board
        board[row][col] = currentPlayer;

        // Check for a win or a draw
        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << (currentPlayer == PLAYER1 ? "1 (X)" : "2 (O)") << " wins!\n";
            break;
        }
        if (isBoardFull(board)) {
            printBoard(board);
            cout << "It's a draw!\n";
            break;
        }

        // Switch players
        currentPlayer = (currentPlayer == PLAYER1) ? PLAYER2 : PLAYER1;
    }

    return 0;
}

