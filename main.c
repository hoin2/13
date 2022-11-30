#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME	20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[MAX_NAME];
	double grade; 
};

int main(void) {
	struct student student1 = {2211785, "SeongHojin", 3.9};
	
	student1.ID = 2211753;
	strcpy(student1.name, "HojinSeong");
	student1.grade = 4.1;
	
	printf("ID : %i\n",student1.ID);
	printf("name : %s\n",student1.name);
	printf("grade : %.1f\n",student1.grade);
	
	return 0;
}
