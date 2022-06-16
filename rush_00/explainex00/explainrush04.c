void	ft_putchar(char c); /* data to ft_putchar.c */
void	rush(int x, int y); /* (3) function from main.c */ 
char	ifelsestatement(int l, int w, int y, int x); /* (4) declaration */
char	specialchar(int l, int w, int y, int x); /* (5) declaration */
char	linechar(int l, int w, int y, int x); /* (6) declaration */

void	rush(int x, int y) /* (7) function rush */
{
	int		l; /* (8) declare int l */
	int		w; /* (9) declare int w */
	char	a; /* (10) declare char a */

	l = 1; /* (11) int l starts with 1 */
	w = 1; /* (12) int w starts with 1 */
	while (l <= y) /* (13) execute if l (line) is =< y (3) */
	{
		while (w <= x) /* (14) execute if w (words) is =< x (5) */
		{
			a = ifelsestatement(l, w, y, x); /* (15) data in 'a' changed by ifelsestatement */
			ft_putchar(a); /* (16) data in 'a' to ft_putchar(char c) */
			++w; /* (17) increment int w */ 
			/* (18) this w loop will keep looping until false. Using this example, once w is 6 , it is false and will close */
		}
		/* (19) this l loop will be run when w loop is false */
		w = 1; /* (20) resets w to 1 */
		ft_putchar('\n'); /* (21) prints line break */
		++l; /* (22) increment counter for l (line) */ 
		/* (23) l loop will keep looping until false. Using this example, once l is 4, it is false and will close */
	}
}

char	ifelsestatement(int l, int w, int y, int x) /* (24) defined char ies */
{
	if ((l == 1 && w == 1) || (l == 1 && w == x)) /* (25) if at top left corner || top right corner */
	{
		return (specialchar(l, w, y, x)); /* (25.1) reference special char */
	}
	else if ((l == y && w == 1) || (l == y && w == x)) /* (26) if at bottom left corner || bottom right corner */ 
	{
		return (specialchar(l, w, y, x)); /* (26.1) reference special char */ 
	}
	else if (l == 1 || l == y || w == 1 || w == x) /* (27) if at 1st line || last line || first word || last word */ 
	{
		return (linechar(l, w, y, x)); /* (27.1) reference line char */
	}
	else
	{
		return (' '); /* (28) if all above ifs are false , run this */
	}
}

char	specialchar(int l, int w, int y, int x)
{
	if (l == 1 && w == 1)
	{
		return ('A');
	}
	else if (l == 1 && w == x)
	{
		return ('C');
	}
	else if (l == y && w == 1)
	{
		return ('C');
	}
	else if (l == y && w == x)
	{
		return ('A');
	}

	return (0);
}

char	linechar(int l, int w, int y, int x)
{
	if ((l == 1 || l == (y))) /* if at 1st line || last line */ 
	{
		return ('B');
	}
	else if (w == 1 || w == (x)) /* if at 1st word || last word */
	{
		return ('B');
	}

	return (0);
}
