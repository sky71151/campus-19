#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		mult;
	long long	nb;

	mult = 1;
	nb = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= mult;

	if (nb > INT_MAX) 
        return INT_MAX; // Return maximum value for overflow
    else if (nb < INT_MIN)
        return INT_MIN; // Return minimum value for overflow
    
	return ((int)nb);
}


int main() {
    const char *test_strings[] = {
        "12345",          // Normal number
        "-6789",          // Negative number
        "  5678",         // Leading whitespace
        "    +42",        // Leading '+' sign with whitespace
        "2147483647",     // INT_MAX
        "-2147483649",    // INT_MIN
        "  99999999999999999999999999", // Larger number than INT_MAX
        "invalid123",     // Invalid input
        "",               // Empty string
        NULL              // NULL string pointer
    };

    for (int i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); ++i) {
        int result = ft_atoi(test_strings[i]);
        printf("String: %-30s Result: %d\n", test_strings[i], result);

		int result2 = atoi(test_strings[i]);
        printf("String real: %-30s Result: %d\n", test_strings[i], result2);
		
    }

    return 0;
}