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
	struct student student1;
	
	student1.ID = 2211753;
	strcpy(student1.name, "HojinSeong");
	student1.grade = 4.1;
	return 0;
}
