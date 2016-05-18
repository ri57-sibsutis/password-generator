#include <stdio.h>
#include <stdlib.h>
#include "mode.h"
#include <time.h>

int main() {
	srand(time(0));
	int lenght, amount, mode;
	int i,j;
    printf("\nPassword length: ");
    scanf("%d", &lenght);
    char password[200] = {0};
    printf("\nNumber of passwords: ");
    scanf("%d", &amount);
    printf("\nThe used symbols\n1) a-z, A-Z\n2) 0-9\n3) a-z, A-Z, 0-9\n4) a-z, A-Z, 0-9, {%%, *, ?, !, @, #}\nNumber of the chosen set: ");
    scanf("%d", &mode);
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
    return 0;
}
