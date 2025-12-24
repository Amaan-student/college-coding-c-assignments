// Demonstrate of Conditional Statements Using Logical AND Operator
/* Q.) Write a C program to accept the marks of a student and determine whether 
the student has passed or failed the examination 
using conditional statements and logical AND (&&) operator.

If the student has passed (marks between 35 and 100),
display the grade according to the following conditions:

Marks between 85 and 100 ? Grade A

Marks between 70 and 84 ? Grade B

Marks between 50 and 69 ? Grade C

Marks between 35 and 49 ? Grade D

Marks less than 35 ? Fail*/ 

//
#include <stdio.h>

int main() {
    int marks;

    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if (marks >= 35 && marks <= 100) {
        printf("Congrats! You Passed\n");

        if (marks >= 85 && marks <= 100) {
            printf("Grade A\n");
        }
        else if (marks >= 70 && marks <= 84) {
            printf("Grade B\n");
        }
        else if (marks >= 50 && marks <= 69) {
            printf("Grade C\n");
        }
        else if (marks >= 35 && marks <= 49) {
            printf("Grade D\n");
        }
    }
    else if (marks >= 0 && marks < 35) {
        printf("You Failed\n");
    }
    else {
        printf("Enter Valid Marks\n");
    }

    return 0;
}


