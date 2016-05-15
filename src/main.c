#include <stdio.h>

int main()
{
	int lenght, amount, mode;
	int i;
    printf("\nPassword length: ");
    scanf("%d", &lenght);
    printf("\nNumber of passwords: ");
    scanf("%d", &amount);
    printf("\nThe used symbols\n1) a-z, A-Z\n2) 0-9\n3) a-z, A-Z, 0-9\n4) a-z, A-Z, 0-9, {%%, *, ?, !, @, #}\nNumber of the chosen set: ");
    scanf("%d", &mode);
    if (mode == 1){
    	for(i=0; i < amount; i++){
    		mode1(lenght);
		}
	}
	if (mode == 2){
    	for(i=0; i < amount; i++){
    		mode2(lenght);
		}
	}
	if (mode == 3){
    	for(i=0; i < amount; i++){
    		mode3(lenght);
		}
	}
	if (mode == 4){
    	for(i=0; i < amount; i++){
    		mode1(lenght);
		}
	}
    getchar();
    getchar();
    return 0;
}
