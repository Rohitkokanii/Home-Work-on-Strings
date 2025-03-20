/*
• Accept a string from the user. Toggle the case of the letters. If the letter is upper case, change it to lower case
and vice versa.
*/

#include"demo.h"

int main() {
	char str[SIZE];

	printf("\nEnter String : ");
	acceptStr(str);
	convertStr(str);
	printf("\nCoverted String : ");
	display(str);

	return 0;
}