#include <unistd.h>

int scan(char *or, char s, int num)
{
    while (num >= 0)
    {
        if (or[num] == s)
            return (0);
        num--;
    }
    return (1);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    
    i = 0;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            j = 0;
            while(argv[2][j])
            {
                if (argv[1][i] == argv[2][j])
                {
                    if (scan(argv[1], argv[1][i], i - 1))
                        write(1, &(argv[1][i]), 1);
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
