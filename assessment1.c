//WAP multiply TWO 2D matrix

//  In C you can't return a 2D array directly because arrays decay to pointers when passed to a function.
//  to solve above problem we used global variables.
#include<stdio.h>


//  these are the function Declaration.
void inputMat();//  this function is for taking input for both matrices.
void multiMat();//  this is for multiplication of matrices.
void outputMat();// this is for show result matrix.


//  these are the global variable for 2D matrix.
//  here we used  2 x 2 array for show 2 rows and 2 columns and store value in it like matrix formation. 
    int mat1[2][2];    //  this is for matrix 1.
    int mat2[2][2];    //  this is for matrix 2.
    int mat3[2][2];    //  this is for result of multiplication of matrix 1 and matrix 2.


int main()
{
    //  this is our main()
    printf("\t\t\tMATRIX MULTIPICATION\n");
    inputMat();    //  this is function call for input matrix.

    multiMat();    //  this is function call for multiplication matrix.

    outputMat();    //  this is function call for result matrix.
    
    return 0;
}

//  these are the function definetion.
void inputMat()
{
    //  this is our input matrix function.
    //  in this function we take input from user for both matrices,
    //  and show as matrix format.
     //    __0___1__
    //    0|___|___|
    //    1|___|___|

    printf("\n-------------MATRIX: 1-------------\n\n");
    for (int i = 0; i < 2; i++)  // this for loop runs for 2 rows.
    {
        for (int j = 0; j < 2; j++)  // this for loop runs for 2 columns.
        {
            printf("Enter Element : ");
            scanf("%d",&mat1[i][j]);  //  here we taking input and store value on matrix 1 according to i & j variable.
        }
        
        
    }

    // this is for showing matrix 1 in matrix format.
     //    __0___1__
    //    0|___|___|
    //    1|___|___|

    printf("\n");
    for (int i = 0; i < 2; i++)  // this for loop runs for 2 rows.
    {
        for (int j = 0; j < 2; j++)  // this for loop runs for 2 columns.
        {
            
            printf("%d\t",mat1[i][j]); // here we are showing value of matrix 1 according to i & j variable.
            //  this if condtion is used to show matrix format.
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }  

    printf("\n-------------MATRIX: 2-------------\n\n");
    for (int i = 0; i < 2; i++)// this for loop runs for 2 rows.
    {
        for (int j = 0; j < 2; j++)  // this for loop runs for 2 columns.
        {
            printf("Enter Element : ");
            scanf("%d",&mat2[i][j]); //  here we taking input and store value on matrix 2 according to i & j variable.
        }
        
        
    }
    // this is for showing matrix 2 in matrix format.
     //    __0___1__
    //    0|___|___|
    //    1|___|___|
    printf("\n");
    for (int i = 0; i < 2; i++)// this for loop runs for 2 rows.
    {
        for (int j = 0; j < 2; j++)  // this for loop runs for 2 columns.
        {
            
            printf("%d\t",mat2[i][j]); // here we are showing value of matrix 2 according to i & j variable.
            //  this if condtion is used to show matrix format.
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }
    
}

void multiMat()
{
     //  this is our multiplication matrix function.
    //  in this function we does multiplication both matrices,
    //  and store result in matrix 3.
    //     __0___1__
    //    0|___|___|
    //    1|___|___|

    mat3[0][0]=(mat1[0][0]*mat2[0][0])+(mat1[0][1]*mat2[1][0]); // we are multiplying first row of mat 1 to first column of mat 2 and storing in first place on first row of mat 3.
    mat3[0][1]=(mat1[0][0]*mat2[0][1])+(mat1[0][1]*mat2[1][1]); // we are multiplying first row of mat 1 to second column of mat 2 and storing in second place on first row of mat 3.

    mat3[1][0]=(mat1[1][0]*mat2[0][0])+(mat1[1][1]*mat2[1][0]); // we are multiplying second row of mat 1 to first column of mat 2 and storing in first place on second row of mat 3.
    mat3[1][1]=(mat1[1][0]*mat2[0][1])+(mat1[1][1]*mat2[1][1]); // we are multiplying second row of mat 1 to second column of mat 2 and storing in second place on second row of mat 3.

    
}

void outputMat()
{
     //  this is our output matrix function.
    //  in this function we show output of result of multipication of matrices in matrix format.
     //    __0___1__
    //    0|___|___|
    //    1|___|___|

     printf("\n");
     printf("\n----------Result : Multiplication Matrix----------\n\n");
    for (int i = 0; i < 2; i++)// this for loop runs for 2 rows.
    {
        for (int j = 0; j < 2; j++)  // this for loop runs for 2 columns.
        {
            
            printf("%d\t",mat3[i][j]); // here we are showing value of result matrix 3 according to i & j variable.
            //  this if condtion is used to show matrix format.
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }
    printf("\n--------------------");
}