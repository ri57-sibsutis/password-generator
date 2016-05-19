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
    printf("\nВведите длину пароля: ");
    scanf("%d", &lenght);
    printf("\nВведите количество паролей: ");
    scanf("%d", &amount);
    printf("\nДоступные режимы работы:\n1) a-z, A-Z\n2) 0-9\n3) a-z, A-Z, 0-9\n4) a-z, A-Z, 0-9, {%%, *, ?, !, @, #}\nВыберите режим работы: ");
    scanf("%d", &mode);
    statusEND = check (lenght, amount, mode, &statusL, &statusA, &statusM);
	if (statusEND == 0) {
		if (statusL == 0)
			printf("\nНекорректная длина пароля!\nМинимальное количество символов - 4, максимальное - 20\n");
		if (statusA == 0)
			printf("\nНекорректное количество паролей!\nМинимальное количество паролей - 1, максимальное - 20\n");
		if (statusM == 0)
			printf("\nНекорректно выбран режим работы!\n");
	}
	if (statusEND == 1) {
		printf("Пароли успешно сгенерированы:\n");
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
