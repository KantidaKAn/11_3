#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int lens(char* str) {
	int count = 0;
	while (str[++count] != '\0');
	return count;
}
void comma(char* str) {
	for (int i = 0; i < lens(str); i++) {
		if (str[i] == str[i + 1] || str[i] == str[i + 1] - 32 || str[i] == str[i + 1] + 32||i+1==lens(str)) {
			printf("%c", str[i]);
		}
		else {
			printf("%c,", str[i]);
		}
	}
}
int main() {
	char str[1000];
	scanf("%[^\n]", str);
	comma(str);
	return 0;
}