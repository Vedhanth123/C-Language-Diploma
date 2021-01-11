# include <stdio.h>

int main()
{
    // prepare a matrix to be transposed
    int matrix[2][2] = {{1,2},{3,4}};

    // prepare a solution matrix for the solution to be saved 
    int solution[2][2];

    // ALGORITHM:
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            solution[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d   ",solution[i][j]);
        }
        printf("\n");
    }
    return 0;

}