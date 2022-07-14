#include<stdio.h>
int main()
{
    int HH,MM;
    printf("Enter time in HH:MM format: ");
    scanf("%d:%d",&HH,&MM);
    printf("%d hour and %d minit",HH,MM);
    return 0;
}