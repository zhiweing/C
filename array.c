#include <stdio.h>
int main()
{
    /*  int age[5] = {3, 4, 2, 1, 5};
     printf("%d\n", age[0]);
     printf("%d\n", age[1]);
     int i;

     int size = sizeof(age) / sizeof(age[0]);

     // sizeOf (age) give total size of the array in bytes
     // sizeOf (age[0]) give size of one element in bytes

     for (i = 0; i < size; i++)
     {
         printf("%d ", age[i]);
     }

     int number[5];
     printf("\nEnter 5 elements of the array:");
     scanf("%d", &number[0]);
     scanf("%d", &number[1]);
     scanf("%d", &number[2]);
     scanf("%d", &number[3]);
     scanf("%d", &number[4]);

     int sizes=sizeof(number)/sizeof(number[0]);
     for(int j=0;j<size;j++){
         printf("Number %d= %d\n",j+1,number[j]);
     } */
    //-------------------------------------------------------------------------------------------------

    // Loop and Array
/* 
    int age[5];
    printf("Enter 5 input value:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &age[i]);
    }

    for (int j = 0; j < 6; j++)
    {
        printf("%d ", age[j]);
    } */

 //-------------------------------------------------------------------------------------------------

 
/* Create a program that computes the average marks of a student.

Create an array that stores the marks of 5 subjects
Compute the total marks by adding all the marks
Divide the total marks by total number to subjects
Print the average marks

double marks[5]; //marks of 5 subjects
printf("Enter the marks of 5 subjects: \n");
double sum=0;
for(int i=0;i<5;i++){
    scanf("%lf",&marks[i]);
    sum+=marks[i];
}

printf("Total marks: %.2lf\n",sum);

double averageMarks=sum/5;
printf("Average marks: %.2lf",averageMarks);
  */

//-------------------------------------------------------------------------------------------------
 /* 

Q. Which value will we get when we print num[4] from the following array?

int num[5] = {2, 3, 5};

Options:

2
5
0
Random Value
Answer: 3

 } */
//-------------------------------------------------------------------------------------------------
//Multi-dimensional Array

/* Initialization of multidimensional array
int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };
[We have two array and each array we have three elements]
 */
//-------------------------------------------------------------------------------------------------

/* int arr[2][3]={{3,4,6},{1,3,4}};
printf("%d\n",arr[0][1]);
printf("%d\n",arr[1][2]);

arr[0][1]=3;
arr[1][2]=5;

int array[2][4]={{2,4,1,4},{3,1,4,1}};
for(int k=0;k<2;k++){
    for(int r=0;r<4;r++){
        printf("%d ",array[k][r]);
    }
    printf("\n");
}

printf("\n");

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
 */

//-------------------------------------------------------------------------------------------------
   
/* 
Q. Which value will we get when we print arr[1][2] from the following array?

int arr[2][4] = { {3, 6, 9, 12}, {2, 4, 6, 8} };

Options:
1) 6
2) 4
3) 9
4) 12 */
    return 0;
}