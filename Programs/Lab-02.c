// Lab - 02

// 1. Calculate the mean of a given set of numbers using arrays
#include <stdio.h>
#include <stdbool.h>

int main() {
    float arr[100], avg = 0;
    int count = 0;
    char cont;
    while (true) {
        printf("Enter a number: ");
        scanf("%f", &arr[count]);
        printf("Do you want to enter more numbers: ");
        getchar();
        scanf("%c", &cont);
        if (cont=='N' || cont=='n') {
            break;
        }
        count++;
    }

    for (int i = 0; i <= count; i++) {
        avg += arr[i];
    }

    avg = avg / (count + 1);
    printf("Average of the numbers in the array = %f", avg);
    return 0;
}

// 2. Generate multiplication table (for example: 9th table, 10 times)
#include <stdio.h>

int main() {
    int num, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter till which table: ");
    scanf("%d", &count);
    for (int i = 0; i <=count; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
