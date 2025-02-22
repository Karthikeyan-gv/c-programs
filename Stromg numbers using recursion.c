#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int is_strong(int num) {
    int sum = 0, temp = num;
    while(temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int start, end;
    printf("Enter the interval (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Strong numbers between %d and %d are:\n", start, end);
    for(int i = start; i <= end; i++) {
        if(is_strong(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
