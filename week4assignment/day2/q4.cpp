#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {3, 9, 1},
        {4, 2, 7},
        {8, 6, 5}
    };
    
    cout << "Matrix:" << endl;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl << "Row max values: ";
    
    for(int i = 0; i < 3; i++) {
        int max = matrix[i][0];
        
        for(int j = 1; j < 3; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        
        cout << max;
        if(i < 2) cout << ", ";
    }
    cout << endl;
    
    return 0;
}