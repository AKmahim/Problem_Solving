#include<stdio.h>
#include<string.h>
struct nametype {
   char  first_name[40];
   char  last_name[40];
};
struct student{
    int id;
    struct nametype name;

};
int main()
{
    struct student one;
    scanf("%d",&one.id);
    scanf(" %[^\n]",one.name.first_name);
    scanf(" %[^\n]",one.name.last_name);
    printf("Student ID: %d\n",one.id);
    printf("Name :%s %s \n",one.name.first_name,one.name.last_name);
    return 0;

}
