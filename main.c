#include <stdio.h>

#define MAX_DATA (5 * 5)
int main()
{
    int matrix_A[5][5] = {
        {  5,  10,  15,  20,  25 },
        {  4,   8,  12,  16,  20 },
        {  3,   6,   9,  12,  15 },
        {  2,   4,   6,   8,  10 },
        {  1,   2,   3,   4,   5 }
    };

    int matrix_B[5][5] = {
        { 15,  19,  22,  24,  25 },
        { 10,  14,  18,  21,  23 },
        {  6,   9,  13,  17,  20 },
        {  3,   5,   8,  12,  16 },
        {  1,   2,   4,   7,  11 }
    };

    int matrix_C[MAX_DATA] = {0};
    int summe[5];

    printf("Multiplikation von 2 Matrixen 5x5:\n");
    char text[20];

    int row = 0;
    int col = 0;
    int pos = 0;

    for (row = 0; row <  5; row++) {
    for (col = 0; col <  5; col++) {
        matrix_C[(5 * row) + col] +=
        matrix_B[row][col] *
        matrix_A[col][row] ;

        summe[pos++] += matrix_C[(5 * row) + col];

        if (col == 4)
        strcpy(text,"[%3d *%3d]"); else
        strcpy(text,"[%3d *%3d] + ");

        printf(text,
        matrix_A[row][col] ,
        matrix_B[col][row]);
        }
        printf("\n");
    }

    col = 0;
    for (row = 0; row < 5; row++) {
        printf("\n-> %3d, %3d, %3d, %3d, %3d  =  ",
        matrix_C[(5 * row) + 0],
        matrix_C[(5 * row) + 1],
        matrix_C[(5 * row) + 2],
        matrix_C[(5 * row) + 3],
        matrix_C[(5 * row) + 4]);

        int summe = 0;
        for (int r = 0; r < 5; r++)
        summe += matrix_C[(5 * row) + r];
        printf("%d",summe);
    }

    printf("\n\n");
    return 0;
}
