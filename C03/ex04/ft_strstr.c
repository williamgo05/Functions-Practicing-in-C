char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] != '\0' && to_find[j] == str[i + j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	char	str[] = "mentalmente";
	char	to_find[] = "mento";
	char	*result;

	result = (ft_strstr(str, to_find));
	if (result != NULL)
		printf("%s\n", result);
	else
		printf("NULL\n");
}
