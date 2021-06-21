void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char d[3];

	d[0] = '0';
	while (d[0] <= '7')
	{
		d[1] = d[0] + 1;
		while (d[1] <= '8')
		{
			d[2] = d[1] + 1;
			while (d[2] <= '9')
			{
				ft_putchar(d[0]);
				ft_putchar(d[1]);
				ft_putchar(d[2]);
				if (d[0] != '7' || d[1] != '8' || d[2] != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				d[2]++;
			}
			d[1]++;
		}
		d[0]++;
	}
}
