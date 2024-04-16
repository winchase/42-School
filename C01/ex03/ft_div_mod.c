void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod= a % b;
}


int main(void)
{

    int a = 15;
    int b = 2;
    int res = 0;
    int mod = 0;
    //printf("Before: %d,%d\n",a,b);
    ft_div_mod(a, b,&res,&mod);
    printf("After: %d,%d,%d,%d\n",a,b,res,mod);

    return 0;
}
