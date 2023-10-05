#include<stdio.h>
/**
 * main -a program taht does 
 * return 0
 * */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu byte($)\n",(unsigned long)sizeof(a));
printf("size of an int: %lu byte($)\n",(unsigned long)sizeof(b));
printf("size of a long int: %lu byte($)\n",(unsigned long)sizeof(c));
printf("size of a long long int: %lu byte($)\n",(unsigned long)sizeof(d));
printf("size of a float: %lu bytes($)\n",(unsigned long)sizeof(f));
return (0);

