// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int i;
//     for(i = 1;i <= 100000;i++)
//     {
//         int count = 1;
//         int sum = 0;
//         int temp = i;
//         while(temp /= 10)
//         {
//             count++;
//         }
//         temp = i;
//         while(temp)
//         {
//             sum += (int)pow(temp % 10,count);
//             temp /= 10;
//         }
//         if(i == sum)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main()
// {
//     int i;
//     for(i = 0;i <= 1000000;i++)
//     {
//         int count = 1;
//         int temp = i;
//         int sum = 0;
//         while(temp /= 10)
//         {
//             count++;
//         }
//         temp = i;
//         while(temp)
//         {
//             sum += (int)pow(temp % 10,count);
//             temp /= 10;
//         }
//         if(i == sum)
//         {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int i;
//     int line = 0;
//     printf("上半行数:>");
//     scanf("%d",&line);
//     for(i = 0;i < line;i++)
//     {
//         int j;
//         for(j = 0;j < line-1-i;j++)
//         {
//             printf(" ");
//         }
//         for(j = 0;j < i*2+1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i = 0;i < line-1;i++)
//     {
//         int j;
//         for(j = 0;j <= i;j++)
//         {
//             printf(" ");
//         }
//         for(j = 0;j < 2*(line-1-i)-1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

