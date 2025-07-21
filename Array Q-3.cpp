// To convert from decimal to binary
#include <stdio.h>

int main() {
    int num, i = 0;
    int bin[32]; 
    printf("Enter any decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0");
        return 0;
    }

    while (num > 0) {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }

    return 0;
}

	
	

