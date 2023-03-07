#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	Print_Hilt(char arr[], int l)	
{
	int	i;

	i = 0;
	while (l > 0)
		{
		l -= 1;
		ft_putchar(arr[i]);
		i++;
		}
}

void	Hilt(int t)
{
	char	basic[] = {"C=|"};
	char	fancy[] = {"C=\\\\"};

	if (t == 1)
	{
	Print_Hilt(basic, 3);
	}
	if (t == 2)
	{
	Print_Hilt(fancy, 4);
	}
	
}

void	Blade(int s)
{
	if (s != 0)
		{
		s -= 1;
		ft_putchar('=');
		Blade(s);
		}
	else
		{
		ft_putchar('>');
		}
}

