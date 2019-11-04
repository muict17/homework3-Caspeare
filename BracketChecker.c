#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char array[n+1];
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        scanf("%c" ,&array[i]);
    }

    for (int i = 0; i <= n; i++)
    {
        if (array[i] == '(')
        {
            count++;
        }
        else if (array[i] == ')')
        {
            count--;
        }

        if (count < 0)
        {
            printf("incomplete");
            break;
        }
        
    }

    if (count == 0)
    {
        printf("cpmplete");
    }
    

 
    
    

    return 0;
}