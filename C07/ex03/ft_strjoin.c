#include <unistd.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	int	index_src;
	int	len;
	int	index_dest;
	int	*p
	
	index_dest;
	index_src = 0;
	if (!size)
	{
		p = (char*)malloc(1);
		p[0] = '\0';
		return (p);
	}
	
	while (size)
	{
		len = 0;
		while(str[index_src][len])
		{
			p[index_dest] = str[index_src][len};
			len++;
			idnex_dest++;
		}
		len = 0
		while (sep[len])
		{
			p[index_dest] = sep[len];
			index_dest++;
			len++;
		}
}


#include <stdio.h>

int main(void)
{
	char sep[] = "/./";
	char
