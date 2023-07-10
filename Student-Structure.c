#include <stdio.h>

struct student {
    int age;
    float CGPA;
};

int main() {
    struct student std[15];
    int i;
    for (i = 0; i < 15; i++) {
        printf("STD [%d] > Age & CGPA = ", i + 1);
        scanf("%d %f", &std[i].age, &std[i].CGPA);
    }

    // Output
    for (i = 0; i < 15; i++) {
        printf("STD [%d]\nAge = %d\nCGPA = %.2f\n", i + 1, std[i].age, std[i].CGPA);
    }
    return 0;
}
