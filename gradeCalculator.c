#include <stdio.h>

int main() {

    double weight = 0;
    double grade = 0;
    int needComponents = 1;
    char input;

    while(needComponents == 1) {
        double componentWeight;
        double componentGrade;

        printf("Enter component weight: ");
        scanf("%lf", &componentWeight);
        printf("Enter component grade as a percent:  ");
        scanf("%lf", &componentGrade);

        weight += componentWeight;
        grade += componentWeight * componentGrade / 100.0;

        printf("Do you need to enter another component? [Y/N]  ");
        scanf("%c", &input);
        scanf("%c", &input);
        if(input != 'Y' && input != 'y') needComponents = 0;
    }
    printf("Is your exam weight %.1f? [Y/N]  ", 100.0 - weight);        
    scanf("%c", &input);
    scanf("%c", &input);

    if(input != 'Y' && input != 'y') {
        printf("Terminating program.\n");
    }
    else {
        double desiredGrade;

        printf("What percent do you need for your desired grade?  ");
        scanf("%lf", &desiredGrade);

        double examGradeNeeded = (desiredGrade - grade) / (100.0 - weight) * 100.0;

        printf("You need to get %.2lf%% on the final exam for your desired grade.\n", examGradeNeeded);
    }

    return 0;
}
