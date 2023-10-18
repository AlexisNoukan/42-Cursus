int ft_isalnum(int i)
{
  if (i == '\0')
    return(1);
  if (i >= 0 && i <= 9)
    return(0);
  return(1);
}
