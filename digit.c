//add the input number digits
#include <stdio.h>
#include <conio.h>
void main() {
    int n, sum = 0, rem;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    printf("Sum of digits = %d", sum);
    getch();
}
