#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char reversAlpha = 'z';

	while(reversAlpha >= 'a')
	{
	write(1 ,&reversAlpha, 1);
	reversAlpha--;
	}
}

int main(void)
{
ft_print_reverse_alphabet();
return 0;
}
