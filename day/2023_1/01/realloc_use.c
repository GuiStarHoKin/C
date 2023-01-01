// void* realloc(void* memblock, size_t size);
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int main()
{
  int i = 0;
  int *p = (int*)malloc(10*sizeof(int));
  if (p == NULL)
  {
    printf("%s\n", strerror(errno));
  }
  else
  {
    for (i=0; i<10; i++)
    {
      *(p + i) = i;
    }
    for (i=0; i<10; i++)
    {
      printf("%d ",*(p + i));
    }
    printf("\n");
  }
  /*
  现在这里就是在使用malloc开辟的40个字节的空间
  假设这里，40个字节已经不能满足我们的使用了
  希望能够拥有50个字节
  这里就可以使用realloc来调整动态开辟的内存
  */
 /*
 realloc函数注意事项
 1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
 2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域，
 开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，并释放旧的内存空间，最后返回新开辟的内存空间地址
 3.得用一个新的变量来接收realloc函数的返回值
 */
  int *ptr = realloc(p, 50);
  if (ptr == NULL)
  {
    printf("%s\n", strerror(errno));
  }
  else
  {
    p = ptr;
  }
  free(p);
  p = NULL;
  return 0;
}