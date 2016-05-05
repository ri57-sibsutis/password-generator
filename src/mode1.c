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

