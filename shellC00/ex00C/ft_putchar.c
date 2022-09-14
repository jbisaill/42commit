#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);
int main()
{
  
	char c;
	write(1, &c, 1 );
}
