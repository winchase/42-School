#include <unistd.h>

void ft_is_negative(int n)
{
	char pos = 'P';
	char negativ = 'N';
	if (n >= 0)
	{
	write(1, &pos, 1);
	}
	else
	{
	write(1, &negativ, 1);
	}
}

int main(void)
{
ft_is_negative(60);
return 0;
}
