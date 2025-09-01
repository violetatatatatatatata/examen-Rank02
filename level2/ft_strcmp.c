/*
   Assignment name  : ft_strcmp
   Expected files   : ft_strcmp.c
   Allowed functions:
   --------------------------------------------------------------------------------

   Reproduce the behavior of the function strcmp (man strcmp).

   Your function must be declared as follows:

   int    ft_strcmp(char *s1, char *s2);
 */

#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2);

int    ft_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while(s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = ft_strcmp(argv[1], argv[2]);
		printf("%d\n%d", res, strcmp(argv[1], argv[2]));
	}	
	return 0;
}
