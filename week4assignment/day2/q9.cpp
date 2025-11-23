#include <iostream>
using namespace std;

int main() {
    int symmetric[3][3] = {
        {1, 2, 3},
        {2, 1, 4},
        {3, 4, 1}
    };
    
    int nonSymmetric[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 0}
    };
    
    cout << "Matrix 1:" << endl;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << symmetric[i][j] << " ";
        }
        cout << endl;
    }
    
    bool isSymmetric = true;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(symmetric[i][j] != symmetric[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if(!isSymmetric) break;
    }
    
    cout << "Is Symmetric: " << (isSymmetric ? "Yes" : "No") << endl << endl;
    
    cout << "Matrix 2:" << endl;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << nonSymmetric[i][j] << " ";
        }
        cout << endl;
    }
    
    isSymmetric = true;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(nonSymmetric[i][j] != nonSymmetric[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if(!isSymmetric) break;
    }
    
    cout << "Is Symmetric: " << (isSymmetric ? "Yes" : "No") << endl;
    
    return 0;
}