#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s2[c] != '\0')
	{
		s1[c] = s2[c];
		c++;
	}
	s1[c] = '\0';
	return (s1);
}

int	main(void)
{
	char	src[] = "Hoje tem exame";
	char	dest[] = "Recebe aqui a string";
	char	*destino;
	
	printf("Antes src era %s, e dest %s\n", src, dest);
	
	destino = ft_strcpy(dest, src);
	
	printf("Agora sr e %s\n e dest e %s", src, dest);
	return(0);
}
