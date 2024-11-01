#include<stdio.h>

void inputMat();
void multiMat();
void outputMat();

    int mat3[2][2];
    int mat1[2][2];
    int mat2[2][2];

int main()
{
    printf("\t\t\tMATRIX MULTIPICATION\n");
    inputMat();
    printf("\n");

    multiMat();

    outputMat();
    
    return 0;
}

void inputMat()
{

    printf("\n-------------MATRIX: 1-------------\n\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element : ");
            scanf("%d",&mat1[i][j]);
        }
        
        
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",mat1[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }  

    printf("\n-------------MATRIX: 2-------------\n\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element : ");
            scanf("%d",&mat2[i][j]);
        }
        
        
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",mat2[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }
    
}

void multiMat()
{
    
    mat3[0][0]=(mat1[0][0]*mat2[0][0])+(mat1[0][1]*mat2[1][0]);
    mat3[0][1]=(mat1[0][0]*mat2[0][1])+(mat1[0][1]*mat2[1][1]);
    mat3[1][0]=(mat1[1][0]*mat2[0][0])+(mat1[1][1]*mat2[1][0]);
    mat3[1][1]=(mat1[1][0]*mat2[0][1])+(mat1[1][1]*mat2[1][1]);

    
}

void outputMat()
{
     printf("\n");
     printf("\n----------Result : Multiplication Matrix----------\n\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",mat3[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }
    printf("\n--------------------");
}