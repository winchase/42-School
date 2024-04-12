#include <unistd.h>

void ft_print_numbers(void)
{
	int  digit = 0;
	while(digit < 10)
	{
	char dig = '0' + digit;
	write(1, &dig, 1);
	digit++;
	}
}


int main(void)
{
ft_print_numbers();
return 0;
}
