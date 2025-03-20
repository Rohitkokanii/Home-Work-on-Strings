/*
• Count the number of spaces in the given string. Print the count.
*/

#include"demo.h"

int main() {

	char str[SIZE];

	acceptStr(str);

	int n=countSpace(str);

	printf("\nSpaces Are : %d\n",n);
	return 0;
}