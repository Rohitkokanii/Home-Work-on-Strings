/*
• Accept a string from the user. 
Check if the character 'a' occurs in the string. Replace 'a' with 'A'.
*/


#include"demo.h"

int main() {
	char str[SIZE];
	printf("\nEnter String : ");
	acceptStr(str);
	find_a(str);
	printf("\nEntered String : ");
	display(str);
	return 0;
}