// C program to multiply two rectangular matrices 
#include<stdio.h> 
  
// Multiplies two matrices mat1[][] and mat2[][] 
// and prints result. 
// (row1) x (col1) and (row2) x (col2) are dimensions 
// of given matrices. 
void multiply(int row1, int col1, int mat1[][col1], 
            int row2, int col2, int mat2[][col2]) 
{ 
    int x, i, j; 
    int res[row1][col2];
    for (i = 0; i < row1; i++) 
    { 
        for (j = 0; j < col2; j++) 
        { 
            res[i][j] = 0; 
            for (x = 0; x < col1; x++) 
            { 
                *(*(res + i) + j) += *(*(mat1 + i) + x) * 
                                    *(*(mat2 + x) + j); 
            } 
        } 
    } 
    for (i = 0; i < row1; i++) 
    { 
        for (j = 0; j < col2; j++) 
        { 
            printf("%d ", *(*(res + i) + j)); 
        } 
        printf("\n"); 
    } 
} 
  
// Driver code 
int main() 
{ 
    int mat1[][2] = { { 2, 4 }, { 3, 4 } }; 
    int mat2[][2] = { { 1, 2 }, { 1, 3 } }; 
    int row1 = 2, col1 = 2, row2 = 2, col2 = 2; 
    multiply(row1, col1, mat1, row2, col2, mat2); 
    return 0; 
}