#include <stdio.h>
#include <string.h>

char    *ft_strcat(char *dest, char *src);

int main()
{
	char dest[] = {'a', 'h', 'm', 'e', 't', '\0', ' ', ' ', ' ', ' ', ' ', ' '};
	char src[] = "selim";
	printf("%s\n", ft_strcat(dest, src));
}
