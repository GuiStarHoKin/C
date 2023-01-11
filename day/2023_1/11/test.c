#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <float.h>

// int main()
// {
//   unsigned int i;
//   for (i=0; i>=0; i++)
//   {
//     printf("%u\n", i);
//   }
//   return 0;
// }

// int main()
// {
//   unsigned int a = 10u;
//   printf("%u\n", a);
//   return 0;
// }

/* int main()
{
  printf("\121");
  return 0;
} */

/* int main()
{
  int input = 0;
  do
  {
    scanf("%d", &input);
    switch (input)
    {
      default:
        printf("default\n");
        break;
      case 1:
        printf("case 1\n");
        break;
    }
  } while (input);
  return 0;
} */

/* int main()
{
  printf("1") && printf("2");
  printf("\n");
  printf("0") && printf("1");
  printf("\n");
  printf("1") || printf("2");
  printf("\n");
  bool x = true;
  printf("%d\n", x);
  return 0;
} */

/* int main()
{
  double x = 1.0;
  double y = 0.1;
  double z = 0.9;
  printf("%.100f\n", x);
  printf("%.100f\n", y);
  printf("%.100f\n", z);
  if (fabs((x-0.1)-z) < DBL_EPSILON)
  {
    printf("you can see me!\n");
  }
  else
  {
    printf("oops!\n");
  }
  return 0;
} */

int main()
{
  printf("%.50f\n",fabs(0.9));
  return 0;
}