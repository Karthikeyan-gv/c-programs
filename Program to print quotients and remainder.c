#include <stdio.h>

int main() {
    int dividend, divisor;
    
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    
    printf("Quotient: %d\n", dividend / divisor);
    printf("Remainder: %d\n", dividend % divisor);
    
    return 0;
}
