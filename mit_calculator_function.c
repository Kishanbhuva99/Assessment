#include <stdio.h>

void calculator();

int main()

{

int a;
int b;
int op;
int ans;


  printf("Enter Your sign plus = 1, min=2, multi=3, division=4\n");
    
   printf("enter Your First Number\n");
   scanf("%d",&a);
   printf("enter Your seconed Number\n");
   scanf("%d",&b);
   printf("enter Your Oprator \n");
   scanf("%d",&op);

    if(op == 1)
    {
      ans = a+b;
      printf("Your Answer is : %d",ans);
    }

    else if (op == 2)
    {
      ans = a-b;
      printf("Your answere is : %d",ans);
    }

    else if (op == 3)
    {
      ans = a*b;
      printf("Your answere is : %d",ans);
    }

    else if (op == 4)
    {
      ans = a/b;
      printf("Your answere is : %d",ans);
    }

    else 
    {
      printf("recalculate Your math ): ");
    }

}

void calculator()
{
  printf("calculator");
}