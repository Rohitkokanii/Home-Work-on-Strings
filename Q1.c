/*
• Accept a string from the user. Count the number of vowels and print the count.
*/
#include"demo.h"

int main() {
	
	char str[SIZE];

	printf("\nEnter Your String to chech Vowels : ");

	acceptStr(str);

	int n=countChar(str);

	printf("\nVowels : %d\n",n);


	return 0;
}