#include<stdio.h>
void getmatrix(int mat[3][3]);
void matrixmul(int mat1[3][3],int mat2[3][3]);
int main(void)
{   
    int mat1[3][3];
    int mat2[3][3];
    printf("Enter The elements of matrix 1:\n");
    getmatrix(mat1);
    printf("Enter The elements of matrix 2:\n");
    getmatrix(mat2);
    printf("Multiplication of Matrix is: \n");
    matrixmul(mat1,mat2);
    return 0;
}

void getmatrix(int mat[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}
 void matrixmul(int mat1[3][3],int mat2[3][3])
 {
    int mul[3][3];
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             for(int k=0;k<3;k++)
             {
                sum+=mat1[i][k]*mat2[k][j];
             }
             mul[i][j]=sum;
             sum=0;
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");

    }
   
 }