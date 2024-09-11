// #include <unistd.h>

// int ft_atoi(const char *str)
// {
// 	int i;
// 	int result;
// 	int sign;

// 	i = 0;
// 	result = 0;
// 	sign = 1;
// 	while(str[i] == 32 || (str[i] >= 9 && str [i] <= 13))
// 		i++;
// 	if(str[i] == '-' || str[i] == '+')
// 	{
// 		if(str[i] == '-')
// 			sign *= -1;
// 		i++;
// 	}
// 	while(str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	return(result * sign);
// }

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "   -+12345ab67";
// 	printf("%d", ft_atoi(str));
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("%d\n", atoi("   		  -+56546hgf"));
}
