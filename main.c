#include <stdio.h>
#include <stdlib.h>

int main()
{
//calculator function
    int a;
    int b;
    printf("Value of a: ");
    scanf("%d", &a);
    printf("Value of b: ");
    scanf("%d", &b);

    char x;
    printf("select an operation\n"
           "* for Multiply\n"
           "/ for Divide\n"
           "+ for Add\n"
           "- for Subtract\n");
    scanf(" %c", &x);
 int result;
     if (x == '*'){result = a*b;}
     else if (x == '/' )
        {if(b==0){printf("indivisible\n");}
         else {result = a/b;}
        }
     else if (x == '+'){result = a+b;}
     else if (x == '-'){result = a-b;}
     else{ printf("Invalid\n");}

    printf("Your answer is: %d", result);
    return 0;
}
