#include <stdio.h>
#include <string.h>
struct employee
{

    char name[20];
    char Id[20];
    float salary[7];
};

int main()
{
    int i=0;
    struct employee e1;
    printf("Enter your name:\n");
    gets(e1.name);
    printf("Enter your Id:\n");
    gets(e1.Id);
    for(i=0;i<5;i++)
    {

        printf("\nEnter salary of employee %d:",i+1);
        scanf("%f",&e1.salary[i]);
        }
        printf("\nName:%s",e1.name);
        printf("\nId:%s",e1.Id);
        for(i=0;i<5;i++)
            {

                printf("\nSalary of employee %d:%f",i+1,e1.salary[i]);
            }
            return 0;
            }
