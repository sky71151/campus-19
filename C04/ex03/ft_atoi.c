#include <unistd.h>

int	checkPosOrNeg(char *str,int *N, int len)
{
        while (str[len] == '-' || str[len] == '+')
        {           
                if (str[len] == '-' && str[len+1] == '-')
                {   
                        str[len + 1] = '+';
                        *N = 0;
                }
                else if (str[len] == '-' && str[len+1] == '+')
                {
                        str[len + 1] = '-';
                        *N = 1;
                }   
                else if (str[len] == '+' && str[len+1] == '-')
                        *N = 1;
                else if (str[len] == '+' && str[len+1] == '+')
                        *N = 0;
                len++;
        }
	return (len);
}

int	ft_atoi(char *str)
{	
	int	result;
	int	neg;
	int	len;
	
	neg = 0;
	len = 0;
	while (str[len] == ' ' )
		len++;
	len = checkPosOrNeg(str,&neg,len);
	while (str[len] >= '1' && str[len] <= '9')
	{
		if (result != 0)
		{
			result *= 10;
			result += (str[len++] - 48);
		}
		else
			result = str[len++] -48;
	}	
	if (neg)
		result *= -1;
	return (result);
}

#include <stdio.h>

int main(void)
{
	char	str[] = "     ---+--+1234ab567";

	printf("%d\n", ft_atoi(str));
	return 0;
}



		
