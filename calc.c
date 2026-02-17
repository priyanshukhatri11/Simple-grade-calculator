#include <stdio.h>
int main()
{
    int score;
    char grade;

    printf("Enter the score: ");
    scanf("%d", &score);
    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
            grade = 'A';
        else if (score >= 80)
            grade = 'B';
        else if (score >= 70)
            grade = 'C';
        else if (score >= 60)
            grade = 'D';
        else
            grade = 'F';
    }
    else
    {
        printf("your score should be ge");
    }

    switch (grade)
    {
    case 'A':
        printf("The grade is: %c\n", grade);
        printf("Excellent work\n");
        printf("you are eligible for next level");
        break;
    case 'B':

        printf("The grade is: %c\n", grade);
        printf("well done\n");
        printf("you are eligible for next level");

        break;
    case 'C':

        printf("The grade is: %c\n", grade);
        printf("Good Job\n");
        printf("you are eligible for next level");

        break;
    case 'D':

        printf("The grade is: %c\n", grade);
        printf("You Passed,But you could do better\n");
        printf("you are eligible for next level");

        break;
    case 'F':

        printf("The grade is: %c\n", grade);
        printf("Sorry ,You failed\n");
        printf(" You are not eligible");
        break;
    default:
        printf("Unknown grade: %c\n", grade);
    }

    return 0;
}