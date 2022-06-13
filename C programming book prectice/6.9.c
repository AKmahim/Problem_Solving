#include<stdio.h>
#include<string.h>

typedef struct
{
    char f_n[40];
    char l_n[40];

}nametype;


typedef struct
{
    int id;
    char grade[3];
    nametype name;
}studenttype;


//user defined function for print grade
void grade(studenttype* s,int mark)
{
    if(mark>=80){
        strcpy(s->grade,"A+");
    }
    else if(mark>=70){
        strcpy(s->grade,"A");
    }
    else if(mark>=60){
        strcpy(s->grade,"A-");
    }
    else if(mark>=50){
        strcpy(s->grade,"B");
    }
    else if(mark>=40){
        strcpy(s->grade,"C");
    }
    else if(mark>=30){
        strcpy(s->grade,"F");
    }

}



int main()
{
    studenttype student[3];
    int i;
    int mark[]={71,85,65};

    for(i=0;i<3;i++){
        printf("Enter student ID No: ");
        scanf("%d",&student[i].id);
        printf("Enter the student First name: ");
        scanf(" %[^\n]",student[i].name.f_n);
        printf("Enter the student last name: ");
        scanf(" %[^\n]",student[i].name.l_n);
        printf("\n");

    }

    for(i=0;i<3;i++){
        grade(&student[i].grade,mark);
    }


     printf("\n\n\n");

    for(i=0;i<3;i++){
        printf("Student ID: %d\n",student[i].id);
        printf("Student Name : %s %s\n",student[i].name.f_n,student[i].name.l_n);
        printf("Student Grade: %s\n",student[i].grade);
        printf("\n");
    }






    return 0;
}
