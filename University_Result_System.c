#include<stdio.h>

void print()
{
    int i;
    printf("\n");
    for(i=0;i<=100;i++)
    printf("*");
    printf("\n");
}
struct college
{
    char clg_name[10];
    int clg_code;
    struct course
    {
        char name[10];
        struct student
        {
            int roll;
            char name[10];
            int marks[5];
            int sum;
        }stu[2];
    }crs[3];
};

int main(void)
{
    struct college clg[3];
    int i,j,k,l;

    printf("Enter 3 College Details : \n");
    for(i=0;i<3;i++)
    {
        printf("\nFor College %d\n",i+1);
        printf("\tCollege Name : ");
        scanf("%s",clg[i].clg_name);
        printf("\tCollege Code : ");
        scanf("%d",&clg[i].clg_code);
        printf("\n\tEnter Course Details :");
        for(j=0;j<3;j++)
        {
            printf("\n\t\tCourse Name : ");
            scanf("%s",clg[i].crs[j].name);
            printf("\n\t\tEnter Student Details for Course %s\n",clg[i].crs[j].name);
            for(k=0;k<2;k++)
            {
                printf("\n\t\t\tFor Student %d",k+1);
                printf("\n\t\t\tStudent Roll : ");
                scanf("%d",&clg[i].crs[j].stu[i].roll);
                printf("\t\t\tStudent Name : ");
                scanf("%s",clg[i].crs[j].stu[k].name);
                printf("\t\t\tEnter Marks for Student %s \n",clg[i].crs[j].stu[k].name);
                for(l=0;l<5;l++)
                {
                    printf("\t\t\t\tMark %d : ",l+1);
                    scanf("%d",&clg[i].crs[j].stu[k].marks[l]);
                }
            }
        }
    }

    print();
    printf("\t\t\tCollege Details");
    print();

    for(i=0;i<3;i++)
    {
        printf("\nFor College %d\n",i+1);
        printf("\n\tCollege Name is %s",clg[i].clg_name);
        printf("\n\tCollege Code is %d\n",clg[i].clg_code);
        printf("\n\tCourse Details :");
        for(j=0;j<3;j++)
        {
            printf("\n\t\tCourse Name : %s",clg[i].crs[j].name);
            printf("\n\t\tStudent Details for Course %s\n",clg[i].crs[j].name);
            for(k=0;k<2;k++)
            {
                clg[i].crs[j].stu[k].sum=0;
                printf("\n\t\t\tFor Student %d",k+1);
                printf("\n\t\t\tStudent Roll : %d",clg[i].crs[j].stu[i].roll);
                printf("\n\t\t\tStudent Name : %s",clg[i].crs[j].stu[k].name);
                printf("\n\t\t\tEnter Marks for Student %d \n",k+1);
                for(l=0;l<5;l++)
                {
                    printf("\n\t\t\t\tMark %d is %d",l+1,clg[i].crs[j].stu[k].marks[l]);
                    clg[i].crs[j].stu[k].sum += clg[i].crs[j].stu[k].marks[l];
                }
                printf("\n\t\t\t\tTotal Marks is %d\n",clg[i].crs[j].stu[k].sum)
            }
        }
    }
    return 0;
}
