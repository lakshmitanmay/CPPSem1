// Lab - 01

// 1. Check whether the given number is prime or not
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (true) {
        if (num == 1) {
            printf("The given number is not a prime number.\n");
            break;
        }
        if (num == 0) {
            printf("The given number is neither a prime number nor a composite number.\n");
            break;
        }
        if (num == 2) {
            printf("The given number is a prime number.\n");
            break;
        }
        if (num % 2 == 0) {
            printf("The given number is not a prime number.\n");
            break;
        }
        if (num % 2 != 0) {
            int skip = 3, prim = 1;
            while (skip < num) {
                if (num % skip == 0) {
                    printf("The given number is not a prime number.\n");
                    prim = 0;
                    break;
                }
                skip = skip + 2;
            }
            if (prim == 1) {
                printf("The given number is a prime number\n");
                break;
            }
            if (prim == 0) {
                break;
            }
        }
    }
    return 0;
}


// 2. Check whether the given number is an armstrong number or not.
#include <stdio.h>

int main() {
    int num, backup_num, digit, arm_num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    backup_num = num;
    while (num != 0) {
        digit = (num % 10);
        num /= 10;
        arm_num += (digit * digit * digit);
    }
    if (backup_num == arm_num) printf("The given number is an armstrong number.\n");
    else printf("The given number is not an armstrong number.\n");
    return 0;
}