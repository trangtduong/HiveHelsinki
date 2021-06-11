#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_par *par);

int main(void)
{
	int ac;
	t_stock_par *par;

	char *av[] = 
	{
		"go lf",
		"hoc.  key",
		"foot.   ball",
		"cric\tket",
		"shoot\ning"
    };
	ac = 5;
	par = ft_param_to_tab(ac, av);
	ft_show_tab(par);
	
	return (0);
}