#include <iostream>

//Compute and print Pascal's triangle rows 

int** pascalTriangle(int rows){
    int** pt = new int*[rows];
    for(int i = 0; i< rows; i++){
        pt[i] = new int[i+1];
        pt[i][0] = 1;
        for(int j = 1; j < i; j++){
            pt[i][j] = pt[i-1][j-1] + pt[i-1][j];
        }
        pt[i][i] = 1;
    }
    return pt;
}
void printPascalTriangle(int** pt, int rows){
    for(int i = 0; i< rows; i++){
        for(int j = 0; j <= i; j++){
            std::cout<< pt[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main() {
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    int** pt = pascalTriangle(rows);
    printPascalTriangle(pt, rows);
    return 0;
}