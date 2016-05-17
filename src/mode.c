#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mode.h"

int slen(char str[]){
	int i;
	int len;
	for (i=0;str[i]!='\0';i++);
		len=i;
	return len;
}

int mode1(int lenght, char password[]) {
	char AZ[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	char az[] = "qwertyuiopasdfghjklzxcvbnm";	
	srand(time(0));
	for (int i = 0; i < lenght-1; i=i+2){
		password[i] = AZ[rand()%slen(AZ)+1];
		password[i+1] = az[rand()%slen(az)+1];
	}
	return 0;	
}

int mode2(int lenght, char password[]) {
	char num[] = "0123456789";	
	srand(time(0));
	for (int i = 0; i < lenght; i++){
		password[i] = num[rand() % slen(num) + 1];
	}
	return 0;
}

int mode4(int lenght, char password[]) {
	char ch[] = "%*?!@#";
	char AZ[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	char az[] = "qwertyuiopasdfghjklzxcvbnm";
	char num[] = "0123456789";	
	srand(time(0));
	for (int i = 0; i < lenght-3; i=i+4){
		password[i] = AZ[rand()%slen(AZ)+1];
		password[i+2] = az[rand()%slen(az)+1];
		password[i+1] = ch[rand()%slen(ch)+1];
		password[i+4] = num[rand()%slen(num)+1];
	}
	return 0;	
}
