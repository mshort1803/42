#include <stdio.h>

int ft_str_is_printable(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 32 && str[0] <= 126))
			return (0);
		str++;
	}
	return (1);
}

// int main(void) 
// {
//     if(ft_str_is_printable("Hell0"))
//     {
//         printf("True");
//     }
//     else
//     {
//         printf("False");
//     }
// }