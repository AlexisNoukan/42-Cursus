int ft_isacii(int c) 
{
  if (c >= 0 && c <= 0177)
    return(0);
  return(1);
}
