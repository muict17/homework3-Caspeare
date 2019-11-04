#include <stdio.h>

int main()
{
    int n;
    scanf("%d" ,&n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d" ,&array[i]) ;
    }

    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        
        temp = array[i];
        
        while (array[i+1]-temp > 1 && i+1 < n)
        {
            temp += 1;
            printf("%d " ,temp);
        }
        
        
        
        
    }
    
    
    

    return 0;
}