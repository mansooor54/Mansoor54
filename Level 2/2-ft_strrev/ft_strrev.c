char *ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	len = 0;
	while (str[len])
		len++;
	i = -1;
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}

#include <stdio.h>

// Function prototype
char *ft_strrev(char *str);

int main() {
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    ft_strrev(str);
    printf("Reversed string: %s\n", str);
    
    return 0;
}

// Other solution
// int		ft_strlen(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

// char	*ft_strrev(char *str)
// {
// 	int i;
// 	int len;
// 	char tmp;

// 	i = 0;
// 	len = ft_strlen(str) - 1;
// 	while (len > i)
// 	{
// 		tmp = str[i];
// 		str[i] = str[len];
// 		str[len] = tmp;
// 		i++;
// 		len--;
// 	}
// 	return (str);
// }
