#include <stdio.h>
#include <math.h>

double division (double num1, double num2){
    if(num2 < 1){
        fprintf(stderr, "Invalid argument for division");
        return NAN;
    }else{
        return num1/num2;
    }
}
double modulus (int num1, int num2){
    if(num2 < 1){
        fprintf(stderr, "Invalid argument for modulus");
        return NAN;
    }else{
        return num1%num2;
    }
}
void print_menu(){
    printf("\n---------------------------------------\nWelcome to the Calculator!\n");
    printf("Choose an option: ");
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}

int main(){
    int choice;
    double num1, num2, result;
    while(1){
    print_menu();
    scanf("%d", &choice);
    if(choice == 7){
        printf("Bye Bye!\nDeveloped by: wthxrsh\n");
        break;
    }
    if(choice>7 || choice<1) {
        fprintf(stderr, "Invalid Menu Choice");
        continue;
    }
    printf("\nEnter first number: ");
    scanf("%lf", &num1);
    printf("\nEnter Second number: ");
    scanf("%lf", &num2);

    switch(choice){
        case 1: //Add
            result = num1 + num2;
            break;
        case 2: //Subtract
            result = num1 - num2;
            break;
        case 3: //Multiply
            result = num1 * num2;
            break;
        case 4: //Divide
            result = division(num1, num2);
            break;
        case 5: //Modulus
            result = modulus(num1, num2);
            break;
        case 6: //Power
            result = pow(num1, num2);
            break;
    }
    if(result != NAN) printf("\nThe answer : %.2f", result);
    }

    
}                           