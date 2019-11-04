#include<stdio.h>
int main()
{
    int row , column;
    scanf("%d %d" ,&row ,&column);
    int array[row][column];
    int sumMAX[row];
    int sum = 0;


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d" ,&array[i][j]);
            sum += array[i][j];
        }
        sumMAX[i] = sum;
        sum = 0;
    }

    
    int MAX = sumMAX[0];
    int ROW;
    for (int i = 0; i < row; i++)
    {
        if (MAX < sumMAX[i])
        {
            MAX = sumMAX[i];
            ROW = i+1;
        }
        
    }

    printf("the most value is row %d , has value of %d" ,ROW ,MAX);

    return 0;
}