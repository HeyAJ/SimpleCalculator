# include <stdio.h>

int main() {

    float num1, num2;
    int choice;

    printf("Please Enter First Number: ");
    scanf("%f", &num1);

    printf("Please Enter Second Number: ");
    scanf("%f", &num2);

    printf("Please Enter The Operation\n 1 for Addition\n 2 for Subtraction\n 3 For Division\n 4 for Multiplication: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Addition of the Numbers given by you are: %f", num1 + num2);
    }

    else if (choice == 2)
    {
        printf("Subtraction of the Numbers given by you are: %f", num1 - num2);
    }
    
    else if (choice == 3)
    {
        printf("Division of the Numbers given by you are: %f", num1 / num2);
    }
    
    else if (choice == 4)
    {
        printf("Multiplication of the Numbers given by you are: %f", num1 * num2);
    }

    else
    {
        printf("Please Enter a Valid Operator");
    }
    
    

    return 0;
}
