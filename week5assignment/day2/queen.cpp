#include <iostream>
using namespace std;

bool isSafe(int board[8][8], int row, int col) {
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 1) return false;
    }
    
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) return false;
    }
    
    for (int i = row, j = col; i < 8 && j >= 0; i++, j--) {
        if (board[i][j] == 1) return false;
    }
    
    return true;
}

bool solveQueens(int board[8][8], int col) {
    if (col >= 8) return true;
    
    for (int i = 0; i < 8; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            
            if (solveQueens(board, col + 1)) return true;
            
            board[i][col] = 0;
        }
    }
    
    return false;
}

void printBoard(int board[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] == 1) cout << "Q ";
            else cout << ". ";
        }
        cout << endl;
    }
}

int main() {
    int board[8][8] = {0};
    
    if (solveQueens(board, 0)) {
        cout << "Solution found:" << endl;
        printBoard(board);
    } else {
        cout << "No solution exists" << endl;
    }
    
    return 0;
}