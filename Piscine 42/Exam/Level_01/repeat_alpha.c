#include <unistd.h>
void    repeat_alpha(char *str)
{
    int i;
    int c;
    i = 0;
    c = 1;
    while (str[i] != '\0')
    {
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            c = 1;
        if (str[i] >= 'a' && str[i] <= 'z')
            c = str[i] - 96;
        if (str[i] >= 'A' && str[i] <= 'Z')
            c = str[i] - 64;
        while (c > 0)
        {
            write(1, &str[i], 1);
            c--;
        }
        i++;
    }
}
int     main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    write(1, "\n", 1);
    return (0);
}

