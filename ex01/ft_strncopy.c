#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// int main(void)
// {
// 	char str[] = "Hello World";
// 	char dest[30];

// 	ft_strcpy(dest, str, 5);
	
// 	printf("%s", dest);
// }
