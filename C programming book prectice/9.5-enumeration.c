#include<stdio.h>

 enum COLOR {RED,GREEN,BLUE};

 int main()
 {
     enum COLOR selected_color;

     int n;
     printf("Enter 1 for RED ,2 for GREEN,3 for BLUE : ");
     scanf("%d",&n);
     if(n==1){
        selected_color = RED;

     }
     else if(n==2){
        selected_color = GREEN;

     }
     else if(n==3){
        selected_color = BLUE;
     }
     printf("selected color : %d\n",selected_color);

 }

