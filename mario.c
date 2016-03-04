#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int height, i, k;
    do
    {
        printf("Height: ");
        height =  GetInt(); 
    }
    while (height < 0 || height > 23);
    
    for (i = 1; i < height+1; i++)
    {
        for (k = 1; k <= (height+1)-(i+1); k++)
        {
            printf(" ");
        }
        for (k = height+1-(i+1); k <= height; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

