#include <stdio.h>
#include <ctype.h>
/**
 *main - program that prints the alphabet in lowercase, followed by a new line
 *You can only use the putchar
 *Return: 0
 */
int main(void)
{
int l = 'A';
while (l <= 'Z')
int l = 'a';
while (l <= 'z')
{
putchar(tolower(l));
putchar(l);
l += l;
}
putchar('\n');
return (0);
}
