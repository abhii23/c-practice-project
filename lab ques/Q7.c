#include <stdio.h>
void main(){
  int alpha[26] = {0};
  int i;
  char s[100];
  gets(s);
  for (i = 0; s[i]!= '\0'; i++){
    if (s[i] >= 'a' && s[i] <= 'z'){
      int ind = s[i] - 'a';
      alpha[ind]++;
    }else if (s[i] >= 'A' && s[i] <= 'Z'){
      int ind = s[i] - 'A';
      alpha[ind]++;
    }
  }
  for ( i = 0; i<26; i++){
    printf("%c - %d\n ", i + 65, alpha[i]);}
}
