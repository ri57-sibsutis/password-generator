#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mode.h"

int slen(char str[]) {
	int i;
	int len;
	for (i=0;str[i]!='\0';i++);
		len=i;
	return len;
}

int schr(char str[],char ch){
	int i;
	int idx=-1;
	for(i=0;(str[i]!='\0')&&(str[i]!=ch);i++);
		if(str[i]==ch)
		idx=i;
	return idx;
}

int dopsym(char str[], char nsym[]) {
	int i;
	for( i = 0; str[i] != '\0' ; i++) {
		if( schr(nsym, str[i] ) >= 0 ){
		break;
		}
	}
	return i;
}

int mode1(int lenght, char password[]) {
	char AZ[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	char az[] = "qwertyuiopasdfghjklzxcvbnm";
	char nsym[] = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";
	int kol = (rand() % (lenght-1) + 1) + 1;
	for (int i = 0; i < lenght; i++){
		password[i] = AZ[rand() % slen(AZ) + 0];
	}
	for (int j = 1; j <= kol; j++){
		int dop = rand() % lenght + 1;
		password[dop] = az[rand() % slen(az) + 0];
	}
	password[lenght] = '\0';
	return dopsym(password,nsym);	
}

int mode2(int lenght, char password[]) {
	char num[] = "0123456789";	
	char nsym[] = "0123456789";
	for (int i = 0; i < lenght; i++){
		password[i] = num[rand() % slen(num) + 0];
	}
	password[lenght] = '\0';
	return dopsym(password,nsym);
}

int mode4(int lenght, char password[]) {
	char ch[] = "%*?!@#";
	char AZ[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	char az[] = "qwertyuiopasdfghjklzxcvbnm";
	char num[] = "0123456789";
	char nsym[] = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm%*?!@#0123456789";
	for (int i = 0; i < lenght; i++){
		password[i] = '*';
	}
	int kol = lenght - 3;
	int k=0;
	int kolAZ = (rand() % kol + 1);
	while (k < kolAZ){
		int dop = rand() % lenght + 0;
		if (password[dop] == '*'){
			password[dop] = AZ[rand() % slen(AZ) + 0];
			k = k+1;
		}
	}
	kol = lenght - 2 - kolAZ;
	k=0;
	int kolaz = (rand() % kol + 1);
	while (k < kolaz){
		int dop = rand() % lenght + 0;
		if (password[dop] == '*'){
			password[dop] = az[rand() % slen(az) + 0];
			k = k+1;
		}
	}
	kol = lenght - 1 - kolAZ - kolaz;
	k=0;
	int kolch = (rand() % kol + 1);
	while (k < kolch){
		int dop = rand() % lenght + 0;
		if (password[dop] == '*'){
			password[dop] = ch[rand() % slen(ch) + 0];
			k = k+1;
		}
	}		
	for (int i = 0; i < lenght; i++){
		if (password[i] == '*')
			password[i] = num[rand() % slen(num) + 0];
	}
	password[lenght] = '\0';	
	return dopsym(password,nsym);	
}

int mode3(int lenght, char password[]) {
	char AZ[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	char az[] = "qwertyuiopasdfghjklzxcvbnm";
	char num[] = "0123456789";
	char nsym[] = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm0123456789";
	for (int i = 0; i < lenght; i++){
		password[i] = '*';
	}
	int kol = lenght - 2;
	int k=0;
	int kolAZ = (rand() % kol + 1);
	while (k < kolAZ){
		int dop = rand() % lenght + 0;
		if (password[dop] == '*'){
			password[dop] = AZ[rand() % slen(AZ) + 0];
			k = k+1;
		}
	}
	kol = lenght - 1 - kolAZ;
	k=0;
	int kolaz = (rand() % kol + 1);
	while (k < kolaz){
		int dop = rand() % lenght + 0;
		if (password[dop] == '*'){
			password[dop] = az[rand() % slen(az) + 0];
			k = k+1;
		}
	}	
	for (int i = 0; i < lenght; i++){
		if (password[i] == '*')
			password[i] = num[rand() % slen(num) + 0];
	}
	password[lenght] = '\0';	
	return dopsym(password,nsym);	
}

int check (int lenght, int amount, int mode, int *statusL, int *statusA, int *statusM){
	int statusEND = 0;
	if ((lenght<4) || (lenght>20))
		*statusL = 0;
	if ((amount<1) || (amount>20))
		*statusA = 0;
	if ((mode<1) || (mode>20))
		*statusM = 0;
	if ((*statusL == 1) & (*statusM == 1) & (*statusA == 1))
		statusEND = 1;
	return statusEND;
}

