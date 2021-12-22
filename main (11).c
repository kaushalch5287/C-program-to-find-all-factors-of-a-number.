/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int i, num;
 printf("Enter any number to find its factor: ");
 scanf("%d", &num);
printf("All factors of %d are: \n", num);
 for(i=1; i<=num; i++)
 {
 if(num % i == 0)
 {
 printf("%d, ",i);
 }
 }
return 0;
}
