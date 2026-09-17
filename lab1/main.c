#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define Name "Kiril"
#define LastName "Zinoviev"
#define GroupName "RI-61"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"
int main()
{
     unsigned int semestr;
     float admissionScore;
     int grade1;
     int grade2;
     int grade3;
     int grade4;
     int grade5;
     double averageGrade;
     unsigned int age;
     printf("%s %s\n", Name, LastName);
     printf("%s", University);
     printf("\n%s", Faculty);
     printf("\n%s", GroupName);
     Sleep(5000);
     system("cls");
     printf("\n***************\n");
     printf("Enter your admission score: ");
     scanf("%f", &admissionScore);
     printf("Вступний бал: %.1f\n", admissionScore);
     printf("Enter grade for Higher Mathematics: ");
     scanf("%d", &grade1);
     printf("Enter grade Physics :");
     scanf("%d", &grade2);
     printf("Enter grade Programming and Computer Science:");
     scanf("%d", &grade3);
     printf("Enter grade Circuit Theory:");
     scanf("%d", &grade4);
     printf("Enter grade Engineering and Computer Graphics:");
     scanf("%d", &grade5);
     printf("Enter your age: ");
     averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5) / 5;
     printf("\naverage grade = %.2f", averageGrade);
     printf("\n===============");
     return 0;
}
