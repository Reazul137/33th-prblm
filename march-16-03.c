#include<stdio.h>
#define MAX 5
int main()
{
    int number[MAX], i, j, max=0, num_position=0 ;

    printf("Input 5 integers : \n");

    for(i=0; i<MAX; i++)
    {
        scanf("%d",&number[i]);
    }

    for(j=0; j<MAX; j++)
    {
        if(number[j]>max)
        {
            max=number[j];
            num_position=j;
        }
    }
    printf("Highest value : %d \n positive : %d \n ",max,num_position);
    return 0;
}
