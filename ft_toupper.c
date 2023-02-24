#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c); 
}

// int	main()
// {
// 	int letter;
	
// 	letter = 'b';
// 	printf("before %d\n", letter);
// 	printf("after %d",ft_toupper(letter));
// 	return (0);
// }

int	main()
{
	int c = 'a';
	printf("%d", ft_toupper(c));
	return (0);
}
