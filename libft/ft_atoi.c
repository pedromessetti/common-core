#include "libft.h"

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	unsigned long int result;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}

	return (result * sign);
}
