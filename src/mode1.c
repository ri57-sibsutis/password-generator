#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "mode.h"

int slen(char str[]){//���-�� �������� � ������
	int i;
	int len;
	for (i=0;str[i]!='\0';i++);
		len=i;
	return len;
}

