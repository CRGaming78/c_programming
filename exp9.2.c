#include<stdio.h>

struct date {
	int day;
	int month;
	int year;
};

struct student_record {
	char name[30];
	long int Sap_id;
	long int enroll;
	struct date registration;
	struct date birth;
};

void main() {
	int a,i;
	printf("\nEnter the number of students: ");
	scanf("%d",&a);
	for(i=0;i<=a;i++) {
	struct student_record s1;
	printf("Student name: ");
	scanf("%s", s1.name);
	printf("\nEnter SAP ID: ");
	scanf("%d", &s1.Sap_id);
	printf("\nEnter enroll: ");
	scanf("%d", &s1.enroll);
	printf("\nEnter registration day: ");
	scanf("%d", &s1.registration.day);
	printf("\nEnter registration month: ");
	scanf("%d", &s1.registration.month);
	printf("\nEnter registration year: ");
	scanf("%d", &s1.registration.year);
	printf("\nEnter birth date: ");
	scanf("%d", &s1.birth.day);
	printf("\nEnter birth month: ");
	scanf("%d", &s1.birth.month);
	printf("\nEnter birth year: ");
	scanf("%d", &s1.birth.year);
	printf("\nStudent's Details");
	printf("\nStudent's name: %s",s1.name);
	printf("\nStudent's Sap ID: %d",s1.Sap_id);
	printf("\nStudent's enroll no.: R%d",s1.enroll);
	printf("\nStudent's registration(dd/mm/yyyy): %d/%d/%d",s1.registration.day,s1.registration.month,s1.registration.year);
	printf("\nStudent's Birthday(dd/mm/yyyy): %d/%d/%d",s1.birth.day,s1.birth.month,s1.birth.year);
	}
}