// Fibonacci sequence 
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter how many terms of Fibonacci sequence you want: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Please enter a positive number.\n");
        scanf("%d",&n);
        return 0;
    }

    int fib[n];  
   
    fib[0] = 0;
    if(n > 1)
        fib[1] = 1;

  
    for(i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }


    printf("Fibonacci sequence: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }

    printf("\n");
    return 0;
}

