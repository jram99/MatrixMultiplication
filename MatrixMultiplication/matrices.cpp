// C program to multiply two rectangular matrices 
#include<stdio.h> 
using namespace std;
  
// Multiplies two matrices mat1[][] and mat2[][] 
// and prints result. 
// (row1) x (col1) and (row2) x (col2) are dimensions 
// of given matrices. 
void multiply(int row1, int col1, int mat1[][col1], 
            int row2, int col2, int mat2[][col2]) 
{ 
    int x, r, c; 
    int res[row1][col2];
    for (r = 0; r < row1; r++) 
    { 
        for (c = 0; c < col2; c++) 
        { 
            res[r][c] = 0; 
            for (x = 0; x < col1; x++) 
            { 
                *(*(res + r) + c) += *(*(mat1 + r) + x) * 
                                    *(*(mat2 + x) + c); 
            } 
        } 
    } 
    for (r = 0; r < row1; r++) 
    { 
        for (c = 0; c < col2; c++) 
        { 
            printf("%d ", *(*(res + r) + c)); 
        } 
        printf("\n"); 
    } 
} 
  
// Driver code 
int main() 
{ 
    int const val = 2;
    int val2 = 2;
    int mat1[][val] = { { 2, 4 }, { 3, 4 } }; 
    int mat2[][2] = { { 1, 2 }, { 1, 3 } }; 
    int row1 = 2, col1 = 2, row2 = 2, col2 = 2; 
    multiply(row1, col1, mat1, row2, col2, mat2); 
    return 0; 
}