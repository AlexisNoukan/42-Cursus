# Pseudo code pour radix 

radixSortAlgo(arr as an array)<br />
  Find the largest element in arr<br />
  maximum=the element in arr that is the largest<br />
  Find the number of digits in maximum<br />
  k=the number of digits in maximum <br />
  Create buckets of size 0-9 k times<br />
for j -> 0 to k<br />
  Acquire the jth place of each element in arr. Here j=0 represents the least significant digit.<br />
  Use a stable sorting algorithm like counting sort to sort the elements in arr according to the digits of the elements in the jthplace<br />
   arr = sorted elements<br /


# c42 -L./LibFt/compiled ./src/functions/*.c ./src/utils/*.c ./src/push_swap.c -lft -lprintf -lgnl