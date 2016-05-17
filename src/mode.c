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
	int kol = (rand() % lenght + 1) + 1;
	for (int i = 0; i < lenght; i++){
		password[i] = AZ[rand() % slen(AZ) + 0];
	}
	for (int j = 1; j <= kol; j++){
		int dop = rand() % lenght + 1;
		password[dop] = az[rand() % slen(az) + 0];
	}
	password[lenght] = '\0';
	return slen(password);	
}

int mode2(int lenght, char password[]) {
	char num[] = "0123456789";	
	for (int i = 0; i < lenght; i++){
		password[i] = num[rand() % slen(num) + 0];
	}
	password[lenght] = '\0';
	return slen(password);
}

int mode4(int lenght, char password[]) {
	char ch[] = "%*?!@#";
	char AZ[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	char az[] = "qwertyuiopasdfghjklzxcvbnm";
	char num[] = "0123456789";
	int kolAZ = (rand() % lenght + 1) + 1;
	int kolch = (rand() % lenght + 1) + 1;
	int kolnum = (rand() % lenght + 1) + 1;
	for (int i = 0; i < lenght; i++){
		password[i] = az[rand() % slen(az) + 0];
	}
	for (int j = 1; j < kolAZ; j++){
		int dop = rand() % lenght + 1;
		password[dop] = AZ[rand() % slen(AZ) + 0];
	}
	for (int j = 1; j < kolnum; j++){
		int dop = rand() % lenght + 1;
		password[dop] = num[rand() % slen(num) + 0];
	}
	for (int j = 1; j < kolch; j++){
		int dop = rand() % lenght + 1;
		password[dop] = ch[rand() % slen(ch) + 0];
	}
	password[lenght] = '\0';	
	return slen(password);	
}
