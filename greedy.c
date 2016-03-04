#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    float change;
    int coins = 0;
    
    printf("O hai!  ");
    do
    {
        printf("How much change is owed?: ");
        change =  GetFloat(); 
    }
    while (change < 0.0);
    
    change = round(change*100);
    
    while (change >= 25)
    {
        change = change - 25;
        coins++;
    }
    while (change >= 10 && change < 25)
    {
        change = change - 10;
        coins++;
    } 
    while (change >= 5 && change < 10)
    {
        change = change - 5;
        coins++;
    }
    while (change > 0 && change < 5)
    {
        change = change - 1;
        coins++;
    }
    printf("%d\n", coins);
    return 0;
}
