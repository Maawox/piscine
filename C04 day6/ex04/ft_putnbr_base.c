
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *base)
{
    int i;

    i = 0;
    while (base[i])
        i++;
    return(i);
}

void    ft_putnbr_base(int nb, char *base)
{
    unsigned int nombre;
    unsigned int nbase;

    nbase = strlen(base);
    if (nbase < 2)
    	return(0);
    if (nb < 0)
    {
        nombre = -nb;
        ft_putchar('-');
    }
    else
        nombre = nb;
    if (nombre >= nbase)
        ft_putnbr_base(nombre / nbase, base);
    ft_putchar(base[nombre % nbase]);
}
    