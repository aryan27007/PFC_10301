#include <stdio.h>
int main() {
     // Aryan Shrivastava
    // 10301
    // output :
    // Enter the number : 8
    // Sum of even numbers = 20
    int n, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
    if(i % 2 != 0) continue;   
    sum += i;                  
    }
    printf("Sum of even numbers = %d\n", sum);
    return 0;
}