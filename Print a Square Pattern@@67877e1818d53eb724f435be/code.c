#include<stdio.h>
int main()
{
    int rows, cols;
    scanf("%d",&rows);
    scanf("%d",&cols);
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++){
            printf("*");
        }
        printf("\n");
    }
}