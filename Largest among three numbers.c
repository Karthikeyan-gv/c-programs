#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int least = (a < b && a < c) ? a : (b < c ? b : c);
    
    printf("The least value is: %d\n", least);
    
    return 0;
}
