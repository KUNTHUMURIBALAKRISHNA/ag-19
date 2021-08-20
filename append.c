#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char name[20];
    int age;
    float salary;
    fptr=fopen("write.c","a");
    if(fptr==NULL)
    {
        printf("file can't be created\n");
        return 0;
    }
    else
    {
       printf("enter a name:");
        gets(name);
        fprintf(fptr,"name=%s\n",name);
        printf("enter an age:\n");
        scanf("%d",&age);
        fprintf(fptr,"age=%d\n",age);
        printf("enter salary:\n");
        scanf("%f",&salary);
        fprintf(fptr,"salary=%f\n",salary);
    }
  fclose(fptr);
    return 0;
}

