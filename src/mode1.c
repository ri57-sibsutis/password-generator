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
