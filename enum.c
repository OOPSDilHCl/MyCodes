#include <stdio.h>
enum week {Mon,Tue=4,Wed,Thur,Fri=2,Sat,Sun};
int main()
{
  enum week day=Thur;
  printf("%d%d%d%d%d%d%d%d",day,Mon,Tue,Wed,Thur,Fri,Sat,Sun);
  return 0;
}