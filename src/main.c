#include <stdio.h>
#include <stdlib.h>
#include "mode.h"
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int lenght, amount, mode, statusEND = 1, statusL = 1, statusM = 1, statusA = 1;
	int i;
	char password[21] = {0};
    printf("\n������� ����� ������: ");
    scanf("%d", &lenght);
    printf("\n������� ���������� �������: ");
    scanf("%d", &amount);
    printf("\n��������� ������ ������:\n1) a-z, A-Z\n2) 0-9\n3) a-z, A-Z, 0-9\n4) a-z, A-Z, 0-9, {%%, *, ?, !, @, #}\n�������� ����� ������: ");
    scanf("%d", &mode);
    statusEND = check (lenght, amount, mode, &statusL, &statusA, &statusM);
	if (statusEND == 0) {
		if (statusL == 0)
			printf("\n������������ ����� ������!\n����������� ���������� �������� - 4, ������������ - 20\n");
		if (statusA == 0)
			printf("\n������������ ���������� �������!\n����������� ���������� ������� - 1, ������������ - 20\n");
		if (statusM == 0)
			printf("\n����������� ������ ����� ������!\n");
	}
	if (statusEND == 1) {
		printf("������ ������� �������������:\n");
   		if (mode == 1){
    		for(i=0; i < amount; i++){
    			mode1(lenght, password);
				printf("%s\n",password);
			}		
		}
		if (mode == 2){
    		for(i=0; i < amount; i++){
    			mode2(lenght, password);
				printf("%s\n", password);
			}
		}
		if (mode == 4){
    		for(i=0; i < amount; i++){
    			mode4(lenght, password);
    			printf("%s\n", password);
			}
		}
		if (mode == 3){
    		for(i=0; i < amount; i++){
    			mode3(lenght, password);
    			printf("%s\n", password);
			}
		}
	}
    return 0;
}
