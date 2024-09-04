int    ft_atoi(const char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
        {
            sign *= -1;
        }
        str++;
    }
    
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (sign * result);
}
#include <stdio.h>

int main (void)
{
    char *str;
    str = "   ---+--+12345ab67";
    printf ("%d", ft_atoi (str));
}