void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar('0' + n1 / 10);
			ft_putchar('0' + n1 % 10);
			ft_putchar(' ');
			ft_putchar('0' + n2 / 10);
			ft_putchar('0' + n2 % 10);
			if (n1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}
