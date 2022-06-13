#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k,l;
    int a[30][30],b[30][30],C[30][30];

    //INPUT segment
    printf("Enter first matrix row & collum: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter second matrix row & collum: ");
    scanf("%d %d",&r2,&c2);
    printf("Enter the first Matrix element: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second Matrix element: \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(r1 != c2){
        printf("matrix multiply is not possible\n");
    }
    else{
        //Calculation segment
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            int sum=0;
            for(l=0;l<c2;l++){
                sum=sum+a[i][l]*b[l][j];
            }
            C[r1][c2]=sum;
        }
    }

    }

    printf("The multiply of first matrix and second matrix: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }


}
