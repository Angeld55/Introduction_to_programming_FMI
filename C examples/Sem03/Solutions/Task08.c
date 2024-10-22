#include <stdio.h>

int main() 
{
    printf("Enter rows of pyramid: ");
    int rows;
    scanf("%d", &rows);

    int cols = 2 * rows - 1;
    int middle = cols / 2;

    for (size_t i = 0; i < rows; i++)
    {
        int fill = 1;

        for (size_t j = 0; j < cols; j++) 
        {
            if (j < middle - i || j > middle + i) 
            {
                printf("  ");
                continue;
            }

            if (fill <= middle && j < middle) 
            {
                printf("%d ", fill);
                ++fill;
            } 
            else 
            {
                printf("%d ", fill);
                --fill;
            }		
        }			
        printf("\n");
    }
    return 0;
}
