#include"demo.h"

//Q1
void acceptStr(char str[]) {
	gets(str);
}

int countChar(char str[]) {

	int i = 0;

	int count = 0;

	while (str[i]) {
		if (str[i] == 'A' || str[i] == 'a' ||
			str[i] == 'E' || str[i] == 'e' ||
			str[i] == 'I' || str[i] == 'i' ||
			str[i] == 'O' || str[i] == 'o' ||
			str[i] == 'U' || str[i] == 'u') {
			count++;
		}
		i++;
	}
	return count;
}

//Q2

void convertStr(char str[]) {

	int i = 0;

	while (str[i]) {
		if (str[i] >= 65 && str[i] <= 90) {
			//upper to lower
			str[i] = str[i] + 32;
		
		}
		else if (str[i]>= 97 && str[i]<=122) {
			//lower to upper
			str[i] = str[i] - 32;
		}
		i++;
	}
}

void display(char str[]) {
	puts(str);
}

//Q3

int countSpace(char str[]) {

	int i = 0;
	int count = 0;
	while (str[i]) {
		if (str[i] == ' ') {
			count++;
		}
		i++;
	}

	return count;
}

//Q4

void find_a(char str[]) {

	int i = 0;

	while (str[i]) {
		if (str[i] == 'a') {
			str[i] = 'A';
		}
		i++;
	}
}