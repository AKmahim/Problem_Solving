#include<stdio.h>
int main()
{
    int n;

    printf("Enter a positive integer : ");
    scanf("%d",&n);

    switch (n){
    case 1:
        printf("One item\n");
        break;
    case 2:
        printf("Two item\n");
        break;
    default:
        printf("Many item\n");
    }
}
