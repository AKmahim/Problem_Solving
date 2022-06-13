#include<stdio.h>
#include<string.h>
struct nametype
{
    char first_name[40];
    char last_name[40];

};
struct student_type
{
    int id;
    struct nametype name;
};
int main()
{
    struct student_type student[5];
    int i,n=5;
    for(i=0;i<5;i++){
        printf("Enter The ID NO of the student %d: ",i+1);
        scanf("%d",&student[i].id);
        printf("Enter the first name of the student no.%d: ",i+1);
        scanf(" %[^\n]",student[i].name.first_name);
         printf("Enter the last name of the student no.%d: ",i+1);
        scanf(" %[^\n]",student[i].name.last_name);

    }

    for(i=0;i<5;i++){
        printf("ID: %d\n",student[i].id);
        printf("Name: %s %s\n",student[i].name.first_name,student[i].name.last_name);
    }

    return 0;
}
