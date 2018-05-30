#include <stdio.h>
#include <string.h>
struct Students {
	char  firstname[50];
	char  lastname[50];
	int age;
	int studentid;
};
void printStudent(struct Students* student);
int main()
{
  char input[256] ;
  char  firstname[256];
  char  firstname2[256];
  char  lastname[256];
  char lastname2[256];
  int age;
  int  age2;
  int studentid;
  int studentid2; 
  struct Students student1;
  struct Students student2;
  printf("What is your first student's name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", firstname);
  printf("What is your first student's last name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", lastname);
  printf("What is your first student's age?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", age);
  printf("What is your first student's student id?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", studentid);
  strcpy(student1.firstname, firstname);
  strcpy(student1.lastname, lastname);
  student1.age = age;
  student1.studentid = studentid;
  printf("What is your second student's name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", firstname2);
  printf("What is your second student's last name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", lastname2);
  printf("What is your second student's age?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", age2);
  printf("What is your second student's student id?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", studentid2);
  printf("2");
  strcpy(student2.firstname, firstname2);
  printf("3");
  strcpy(student2.lastname, lastname2);
  printf("4");
  student2.age = age2;
  printf("5");
  student2.studentid = studentid2; 
  printStudent(&student1);
  printStudent(&student2);
}
void printStudent(struct Students* student)
{
  printf(" First name:%s\n", student->firstname);
  printf(" Last name:%s\n", student->lastname);
  printf(" Age:%d\n", student->age);
  printf(" Student id:%d\n", student->studentid);
}
