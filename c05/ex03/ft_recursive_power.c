int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (!nb && !power)
		return 1;
	else
	{
		if (!power)
			return 1;
		else
			return nb * ft_recursive_power(nb, --power);
	}
}
