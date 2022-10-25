#include <unistd.h>

int	main(void)
{
	char	z;
	char	y;
	
	z = 'z';
	y = 'Y';
	while ( y >= 'A')
	{
		write(1, &z, 1);
		write (1, &y, 1);
		
		y -= 2;
		z -= 2;
	}
	write (1, "\n", 1);
	return (0);
}
