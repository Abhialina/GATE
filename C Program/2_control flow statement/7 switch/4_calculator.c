#include <stdio.h>
void main()
{
    printf("Simple Calculator : \n");
    do
    {
        char c;
        printf("Enter Operator : ");
        scanf(" %c", &c);

        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
        {

            float a, b;
            printf("Enter a : ");
            scanf("%f", &a);
            printf("Enter b : ");
            scanf("%f", &b);

            int x = (int)a;
            int y = (int)b;

            switch (c)
            {
            case '+':
                printf("Sum of %.2f and %.2f is : %.2f.\n", a, b, a + b);
                break;
            case '-':
                printf("Difference between %.2f and %.2f is : %.2f.\n", a, b, a - b);
                break;
            case '*':
                printf("Product of %.2f and %.2f is : %.2f.\n", a, b, a * b);
                break;
            case '/':
                if (b != 0)
                {
                    printf("Quotient when dividing %.2f by %.2f is %.2f\n", a, b, a / b);
                }
                else
                {
                    printf("Not Defined!\n");
                }
                break;
            case '%':
                printf("Remainder when %d is divisible by %d is : %d.\n", x, y, x % y);
                break;
            default:
                printf("Invalid Operator!\n");
                break;
            }
        }
        else
        {
            printf("Invalid Operator!");
        }

        if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')
        {
            break;
        }
    } while (1);
}