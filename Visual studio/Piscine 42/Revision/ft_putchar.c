#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char c;
	c = 'a';
	ft_putchar(c);
	return 0;
}
