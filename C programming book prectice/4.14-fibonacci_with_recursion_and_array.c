#include<stdio.h>
#include<string.h>
int f_call=0;
int fibo[60];
//recursion function
int fib(int n)
{
    f_call=f_call+1;
    if(fibo[n] != 0){
        return fibo[n];
    }
    if(n==1 || n==2){
        return fibo[n];
    }
    fibo[n]=fib(n-1) + fib(n-2);

    return fibo[n];

}
//main function

int main()
{
    int n;
    char s[3];

    fibo[1]=1;
    fibo[2]=1;
    scanf("%d",&n);

    if(n==1){
        strcpy(s,"st");;
    }
    else if(n==2){
        strcpy(s,"nd");
    }
    else if(n==3){
        strcpy(s,"rd");
    }
    else{
        strcpy(s,"th");
    }

    printf("%d%s fibonacci number is %d\n",n,s,fib(n));
    printf("Number of function call: %d\n",f_call);

    for(n=1;n<12;n++){
        printf("%d :%d\n",n,fibo[n]);
    }


    return 0;


}

