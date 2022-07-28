#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
        printf("%d\n%d\n%d\n", ft_strncmp("Bilgisayar", "Bilgisaya",10), ft_strncmp("Bilgisayar", "Bilgisayar", 11), ft_strncmp("Bilgisayar", "Bilgisayaz", 11));
}

