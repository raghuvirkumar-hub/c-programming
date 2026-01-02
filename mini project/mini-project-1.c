#include <stdio.h>
void detectDanger(int arr[10][10], int rows, int cols)
{
    int i, j;

    printf("\nDanger Zones Found At:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (arr[i][j] == 1)
            {
                printf("Danger at position: Row %d, Column %d\n", i, j);
            }
        }
    }
}

int main()
{
    int rows, cols;
    int grid[10][10];
    int i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter the grid values (0 = Safe, 1 = Danger):\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }

    detectDanger(grid, rows, cols);

    return 0;
}
