
#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float average;
    
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    
    average = total / 5.0;
    
    if (average >= 50)
        printf("All pass with average marks: %.2f\n", average);
    else
        printf("Fail with average marks: %.2f\n", average);
    
    return 0;
