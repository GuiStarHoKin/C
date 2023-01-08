#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>

int main()
{
  struct dirent *direntp;
  char buf[200] = {0};
  char target[500] = {0};
  getcwd(buf, sizeof(buf));
  printf("%s\n", buf);
  DIR *dirp = opendir(buf);
  direntp = readdir(dirp);
  sprintf(target, "%s/%s", buf, direntp->d_name);
  printf("%s\n", target);
  
  closedir(dirp);
  return 0;
}