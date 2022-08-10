#include <stdio.h>
#include <string.h>

void main(){
  char s[100];
  gets(s);
  char *sptr = s;
  int len = strlen(s);
  for (int i = 0; i<len/2; i++){
    char t = *(s+i);
    *(s+i) = *(s+len-1-i);
    *(s+len-1-i) = t;
  }
  puts(s);
}