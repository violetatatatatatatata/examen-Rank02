/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	len;
	int	i;
	int	found;

	len = 0;
	while (s[len])
	{
		i = 0;
		found = 0;
		while (reject[i])
		{
			if (s[len] == reject[i])
			{
				found = 1;
				break ;
			}
			i++;
		}
		if (found)
			break ;
		len++;
	}
	return (len);
}	// MODIFICAR SIN BREAK
