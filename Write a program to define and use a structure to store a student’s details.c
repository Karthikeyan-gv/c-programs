
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student student1;
    
    printf("Enter student name: ");
    scanf("%s", student1.name);
    printf("Enter student age: ");
    scanf("%d", &student1.age);
    printf("Enter student grade: ");
    scanf("%f", &student1.grade);
    
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Grade: %.2f\n", student1.grade);
    
    return 0;
}
