int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (nb)
	{
		i *= nb;
		--nb;
	}
	return (i);
}
