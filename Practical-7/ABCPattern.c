#include <stdio.h>
int main() {
// Aryan Shrivastava
// 10301
// output:
// Enter height: 4
// A
// AB
// ABC
// ABCD
int n;
printf("Enter height: ");
scanf("%d", &n);
for(int i = 1; i <= n; i++) {
for(int j = 0; j < i; j++) {
printf("%c", 'A' + j); 
}
printf("\n");
}
return 0;
}