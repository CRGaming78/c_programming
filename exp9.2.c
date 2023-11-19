#include<stdio.h>

struct date {
	int day;
	int month;
	int year;
};

struct student_record {
	char name[50];
	long int Sap_id;
	long int enroll;
	struct date registration;
	struct date birth;
};

void main() {
	int a,i;
	printf("\nEnter the number of stutents: ");
	scanf("%d",&a);
	struct student_record s[a];
	for(i=0;i<a;i++) {
	printf("\nEnter details for student %d:\n", i + 1);
	printf("\nStudent name: ");
	scanf("%s", s[i].name);
	printf("\nEnter SAP ID: ");
	scanf("%d", &s[i].Sap_id);
	printf("\nEnter enroll: ");
	scanf("%d", &s[i].enroll);
	printf("\nEnter registration (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &s[i].registration.day,&s[i].registration.month,&s[i].registration.year);
	printf("\nEnter birthday (dd/mm/yyyy):");
	scanf("%d/%d/%d", &s[i].birth.day, &s[i].birth.month, &s[i].birth.year);
	}
	printf("Entered student details:\n");
    for (int i = 0; i < a; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("SAP ID: %d\n", s[i].Sap_id);
        printf("Enrollment Number: %d\n", s[i].enroll);
        printf("Date of Registration: %d/%d/%d\n", s[i].registration.day, s[i].registration.month, s[i].registration.year);
        printf("Date of Birth: %d/%d/%d\n", s[i].birth.day, s[i].birth.month, s[i].birth.year);
    }
}