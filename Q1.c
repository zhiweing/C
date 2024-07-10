#include <stdio.h>
int main()
{

    int studentID, marks;
    
    char grade;
    while (1)
    {   
        printf("Enter Student ID:");
        scanf("%d",&studentID);
        if (studentID == -1)
        { // if input is -1 indicate end of the user input
            break;
        }
        printf("Enter Mark:");
        scanf("%d",&marks);
        //add commands
        switch (marks / 10)
        {
        case 10:
        case 9:
        case 8:
            grade = 'A';
            break;
        case 7:
            grade = (marks >= 75) ? 'A' : 'B';
            break;
        case 6:
            grade = (marks >= 65) ? 'B' : 'C';
            break;
        case 5:
            grade = (marks >= 55) ? 'C' : 'D';
            break;
        case 4:
            grade=(marks>=45)? 'D':'F';
            break;
        case 3:
        case 2:
        case 1:
        case 0:
            grade='F';
            break;
        default:
            printf("Invalid input");
        }
        printf("Grade:%c\n\n",grade);

    }

    return 0;
}