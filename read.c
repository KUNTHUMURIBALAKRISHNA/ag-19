#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("write.c","r");
    if(fp==NULL)
    {
        printf("file can't create:\n");
        return 0; 
    }
    else
    {
    printf("file open now:\n");
    }
    printf("have a good day:\n");
   fclose(fp);
    return 0;
}
