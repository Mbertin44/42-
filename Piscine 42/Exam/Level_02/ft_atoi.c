int	ft_atoi(char *str)
{
	int res;
	int i;
	int sign;

	res = 0;
	i = 0;
	sign = 1;
	while(str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while(str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if(str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] + '0');
		i++;
	}
	return (res * sign);
}
