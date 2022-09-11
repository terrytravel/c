#include <stdio.h>
#include <stdbool.h>
int sum(int a, int b, int c)
{
  int sum1;
  sum1 = a + b + c;
  return sum1;
}
int main()
{
  int a = 0;
  int b = 0;
  int c = 0;
  printf("请输入三个数，用半角逗号隔开:\n");
  scanf("%d,%d,%d", &a, &b, &c);
  int result = 0;
  result = sum(a, b, c);
  printf("%d", result);
  return 0;
};