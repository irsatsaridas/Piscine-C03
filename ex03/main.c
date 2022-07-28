#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, unsigned int n);

int main()
{
	char dest[] = {'a', 'h', 'm', 'e', 't', '\0', ' ', ' ', ' ', ' ', ' ', ' '};
	char src[] = "selim";
	printf("%s\n", ft_strncat(dest, src, 3));
}
