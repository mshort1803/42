#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
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

// 	ft_strcpy(dest, str);
	
// 	printf("%s", dest);
// }
