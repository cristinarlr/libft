#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

int	main()
{
	int letter = 'A';	

	printf("before %d\n", letter);
	printf("after %d\n", ft_tolower(letter));
	return (0);
}
