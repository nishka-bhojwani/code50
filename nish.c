#include <stdio.h>

int main(void)
{
    int matrix[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = i * 3 + j + 1;
            printf("%i",matrix[i][j]);
        }
        printf("\n");
    }
}

