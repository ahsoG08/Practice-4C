#include <stdio.h>

int main() 
{
  int blue_balls[5] = {1,2,3,4,5};
  int size = sizeof(blue_balls)/ sizeof(blue_balls[0]);
  printf("Размер коробки blue_balls равен %d.\n", size);
  return 0;
}
