char  *ft_strlcat(char *dest, char *src, int l)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (dest[i])
  {
    ++i;
  }
  while (src[j] && j != l)
  {
    dest[i] = src[j];
    ++i;
    ++j;
  }
  dest[i] = '\0';
  return (dest);
}
