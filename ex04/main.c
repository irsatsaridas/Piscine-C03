#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	printf("%s\n%s\n", ft_strstr("merhaba", "bam"), ft_strstr("canım", "nı"));
}
