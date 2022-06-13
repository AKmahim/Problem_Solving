#include<stdio.h>
#include<string.h>
typedef struct
{
    char first_name[40];
    char last_name[40];
}nametype;

typedef struct
{
    int id;
    nametype name;
    char grade[3];
}student_type;

void calculate_grade(student_type s,int mark)
{
    if(mark >=80){
        strcpy(s.grade,"A+");
    }
    else if(mark >=70){
        strcpy(s.grade,"A");
    }
    else if(mark >=60){
        strcpy(s.grade,"A-");
    }
    else if(mark >=50){
        strcpy(s.grade,"B");
    }
    else if(mark >=40){
        strcpy(s.grade,"C");
    }
    else{
        strcpy(s.grade,"F");
    }

}

int main()
{

    student_type student[3];
    int i,n=3;
    int mark[]={72,82,60};

    for(i=0;i<n;i++){
        printf("Enter The ID NO for student %d: ",i+1);
        scanf("%d",&student[i].id);
        printf("Enter the first name for student no.%d: ",i+1);
        scanf(" %[^\n]",student[i].name.first_name);
         printf("Enter the last name for student no.%d: ",i+1);
        scanf(" %[^\n]",student[i].name.last_name);
        strcpy(student[i].grade,"");
        printf("\n");
    }

    for(i=0;i<n;i++){
        calculate_grade(student[i],mark[i]);
    }
    printf("OUTPUT: \n\n");

    for(i=0;i<5;i++){
        printf("ID: %d\n",student[i].id);
        printf("Name: %s %s\n",student[i].name.first_name,student[i].name.last_name);
        printf("Grade: %s\n",student[i].grade);
    }

}










