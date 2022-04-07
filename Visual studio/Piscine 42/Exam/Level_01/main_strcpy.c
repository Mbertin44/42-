#include<stdio.h>

char	*ft_strcpy(char *s1, char *s2);

int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "wor";

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s", ft_strcpy(s1, s2));
	return (0);
}
