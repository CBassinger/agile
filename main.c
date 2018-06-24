// Program Name: Ammortization
// Purpose: Demonstrate Agile programming while calculating ammortizations
// Programmers: Charles Bassinger and Cody Baur
// Date of Origin: 6.24.18

#define _CRT_SECURE_NO_WARNINGS
#define MAX_CHOICE_LENGTH 100

#include <stdio.h>

int menu();

int main() {

	int choice = 9;

	printf("AMMORTIZATION CALCULATOR");
	printf("\nMake a Selection Below...\n\n");

	while(choice != 0){
		choice = menu();

		switch (choice){
		case 1:
			printf("this is case 1\n\n");
			break;
		case 2:
			printf("this is case 2\n\n");
			break;
		case 3:
			printf("this is case 3\n\n");
			break;
		case 0:
			printf("this is case 0\n\n");
			break;
		default:
			printf("this is default\n\n");
			break;
		};
	};

	return 0;
}

int menu() {
	int c;
	printf("Make a choice: 3,2,1,0(Quit) : ");
	scanf("%d", &c);
	return c;
}