# include <stdio.h>

int main()
{
    // ALGORITHM:

    // prepare 2 matrices and insert values into it
    int matrix[2][2] = {{1,2},{3,4}};
    int matrix2[2][2] = {{1,2},{3,4}};

    // prepare an empty values to store the answer
    int solution[2][2] = {{0,0},{0,0}};

    // multiply by rows and coloumns
    

    // printing matrix on screen
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d   ",solution[i][j]);
        }
        printf("\n");
    }
    return 0;

}