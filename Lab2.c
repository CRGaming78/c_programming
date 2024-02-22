#include<stdio.h>
#include<string.h>

struct student1
{
    char name[35];
    int Roll_no;
    float marks;
};

void q1()
{
    int a,i;
	printf("\nEnter the number of stutents: ");
	scanf("%d",&a);
	struct student1 s1[a];
	for(i=0;i<a;i++) {
	printf("\nEnter details for student %d:\n", i + 1);
	printf("Student name: ");
	scanf("%s", s1[i].name);
	printf("Enter Roll no.: ");
	scanf("%d", &s1[i].Roll_no);
	printf("Enter Marks: ");
	scanf("%f", &s1[i].marks);
    }
	printf("Entered student details:\n");
    for (int i = 0; i < a; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s1[i].name);
        printf("Roll no.: %d\n", s1[i].Roll_no);
        printf("Marks: %f\n", s1[i].marks);
    }
}

struct student2
{
    int Roll_no;
    char fname[35];
    char lname[35];
};

void q2()
{
    int a=5,i;
	struct student2 s2[a];
	for(i=0;i<a;i++) {
	    printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter Roll no.: ");
	    scanf("%d", &s2[i].Roll_no);
	    printf("Student First name: ");
	    scanf("%s", s2[i].fname);
        printf("Student Last name: ");
	    scanf("%s", s2[i].lname);
    }
    for(int i=0;i<a;i++) {
        int min=i;
        for(int j=i+1;j<a;j++){
            if(s2[j].Roll_no<s2[min].Roll_no){
                min=j;
            }
        }
        struct student2 temp=s2[i];
        s2[i]=s2[min];
        s2[min]=temp;
    }
	printf("Entered student details:\n");
    for (int i = 0; i < a; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll no.: %d\n", s2[i].Roll_no);
        printf("Name: %s %s\n", s2[i].fname,s2[i].lname);
    }
}

struct employee1
{
    char name[35];
    char address[100];
    int age;
    float salary;
};

void q3()
{
    int a,i;
    float avg_sal=0;
    printf("\nEnter the number of Employee: ");
	scanf("%d",&a);
    struct employee1 emp1[a];
    for(i=0;i<a;i++) {
	    printf("\nEnter details for Employee %d:\n", i + 1);
	    printf("Employee name: ");
	    scanf("%s",emp1[i].name);
	    printf("Enter address: ");
	    scanf("%s",emp1[i].address);
        printf("Employee Age: ");
        scanf("%d",&emp1[i].age);
        printf("Enter your salary: ");
        scanf("%f",&emp1[i].salary);
    }
    for(int i=0;i<a;i++) {
        avg_sal+=emp1[i].salary;
    }
    printf("Avgrage Salary: %.2f\n", avg_sal);
}

struct employee2
{
    char name[35];
    char address[100];
    float salary;
};

void q4()
{
    int a=5,i;
    struct employee2 emp2[a];
    for(i=0;i<a;i++) {
	    printf("\nEnter details for Employee %d:\n", i + 1);
	    printf("Employee name: ");
	    scanf("%s",emp2[i].name);
	    printf("Enter address: ");
	    scanf("%s",emp2[i].address);
        printf("Enter your salary: ");
        scanf("%f",&emp2[i].salary);
    }
    for(int i=0;i<a;i++) {
        int min=i;
        for(int j=i+1;j<5;j++){
            int test=strcmp(emp2[j].name,emp2[min].name);
            if(test<0){
                min=j;
            }
        }
        struct employee2 temp=emp2[i];
        emp2[i]=emp2[min];
        emp2[min]=temp;
    }
    printf("Entered employee details:\n");
    for (int i=0;i<a;i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", emp2[i].name);
        printf("Address: %s\n", emp2[i].address);
        printf("Salary: %.2f\n", emp2[i].salary);
    }   
}

struct date
{
    int day;
    int month;
    int year;
};

struct employee
{
    char name[35];
    int id;
    struct date birth;
    float salary;
};

void assignment(){
    int a,i;
	printf("\nEnter the number of Employee: ");
	scanf("%d",&a);
    struct employee emp[a];
    for(i=0;i<a;i++) {
	    printf("\nEnter details for Employee %d:\n", i + 1);
	    printf("Employee name: ");
	    scanf("%s", emp[i].name);
	    printf("Enter ID: ");
	    scanf("%d", &emp[i].id);
	    printf("Enter birthday (dd/mm/yyyy):");
	    scanf("%d/%d/%d", &emp[i].birth.day, &emp[i].birth.month, &emp[i].birth.year);
        printf("Enter your salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\n\nEntered Employee details:\n");
    for (int i = 0; i < a; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].id);
        printf("Date of Birth: %d/%d/%d\n", emp[i].birth.day, emp[i].birth.month, emp[i].birth.year);
        printf("Salary: %.3f\n", emp[i].salary);
    }
}

int main(){
    int x;
    printf("---Menu---\n");
    printf("1: Q1\n");
    printf("2: Q2\n");
    printf("3: Q3\n");
    printf("4: Q4\n");
    printf("5: Q5\n");
    printf("Enter the Question number: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        q1();
        break;
    case 2:
        q2();
        break;
    case 3:
        q3();
        break;
    case 4:
        q4();
        break;
    case 5:
        assignment();
        break;
    default:
        break;
    }
    return 0;
}