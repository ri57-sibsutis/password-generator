#include <stdio.h>
#include <stdlib.h>
#include "mode.h"
#include <time.h>

int main() {
	srand(time(0));
	int lenght, amount, mode, statusEND = 0, statusL = 1, statusM = 1, statusA = 1;
	int i,j;
    printf("\nPassword length: ");
    scanf("%d", &lenght);
    char password[200] = {0};
    printf("\nNumber of passwords: ");
    scanf("%d", &amount);
    printf("\nThe used symbols\n1) a-z, A-Z\n2) 0-9\n3) a-z, A-Z, 0-9\n4) a-z, A-Z, 0-9, {%%, *, ?, !, @, #}\nNumber of the chosen set: ");
    scanf("%d", &mode);
    check (lenght, amount, mode, &statusL, &statusA, &statusM);
	if (statusEND == 0) {
		if (statusL == 0)
			printf("Invalid input lenght (4 <= lenght <= 20)!");
		if (statusA == 0)
			printf("Invalid input number (1 <= number <= 20)!");
		if (statusM == 0)
			printf("Invalid input mode (1 <= mode <= 4)!");
	}
	if (statusEND == 1) {
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
