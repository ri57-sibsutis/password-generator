#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "mode.h"

int slen(char str[]){//кол-во символов в строке
	int i;
	int len;
	for (i=0;str[i]!='\0';i++);
		len=i;
	return len;
}

int mode1(int lenght, char &password[]) {
	char AZaz[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";	
	srand(time(0));
	for (int i = 0; i < lenght; i++){
		password[i] = AZaz[rand()%slen(AZaz)+1];
	}
	return 0;	
}

void mode2(int lenght, char password[]) {
	char num[] = "0123456789";	
	srand(time(0));
	for (int i = 0; i < lenght; i++){
		password[i] = num[rand() % slen(num) + 1];
	}
}

int mode4(int lenght, char &password[]) {
	char ch[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM01234567890%*?!@#";	
	srand(time(0));
	for (int i = 0; i < lenght; i++){
		password[i] = ch[rand()%slen(ch)+1];
	}
	return 0;	
}
