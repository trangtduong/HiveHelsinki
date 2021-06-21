int	digit(char c)
{
	int	d;

	if (c < '0' || c > '9')
	{
		return (-1);
	}
	d = c;
	d -= '0';
	return (d);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	ret;

	sign = 1;
	while (*str == ' ' || *str <= 13)
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	ret = 0;
	while (*str != '\0')
	{
		if (digit(*str) == -1)
		{
			break ;
		}
		ret = 10 * ret + digit(*str);
		str++;
	}
	return (sign * ret);
}
