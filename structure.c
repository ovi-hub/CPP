#include <stdio.h>

struct covid {
    int FirstDoseDate, SecondDoseDate, BoosterDoseDate;
};

int main() {
    struct covid moderna, AstraZeneca;
    moderna.FirstDoseDate = 10;
    moderna.SecondDoseDate = 19;
    moderna.BoosterDoseDate = 31;
    AstraZeneca = moderna;

    printf("I have taken the first dose on %d March 2022.\n", AstraZeneca.FirstDoseDate);
    printf("Then the second dose on %d March 2022.\n", AstraZeneca.SecondDoseDate);
    printf("And the booster dose on %d March 2022.\n", AstraZeneca.BoosterDoseDate);

    return 0;
}
