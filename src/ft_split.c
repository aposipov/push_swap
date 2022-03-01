

#include "../inc/push_swap2.h"

static char	**ft_clear(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

static size_t	ft_strlen_c(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static size_t	ft_count_words(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != c && str[i + 1] == c) \
						|| (str[i] != c && !str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < start)
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	char	**array;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	array = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array[ft_count_words(s, c)] = NULL;
	while (i < ft_count_words(s, c))
	{
		while (s[start] == c)
			start++;
		array[i] = ft_substr(s, start, ft_strlen_c(&s[start], c));
		if (!array[i])
			return (ft_clear(array));
		start += ft_strlen_c(&s[start], c);
		i++;
		start++;
	}
	array[i] = NULL;
	return (array);
}