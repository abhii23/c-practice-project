#include <stdio.h>
void main(){
    FILE *f, *f2;
    f = fopen("doc2a.txt", "w+");
    char str[100];
    gets(str);
    fputs(str,f);
    f2 = fopen("doc2b.txt", "w+");
    rewind(f);
    //copy into new file without space
    char c = getc(f);
    while (c!=EOF){
        if (c!=32)
        putc(c, f2);
        c = getc(f);
    }
    //new file
    rewind(f2);
    c = getc(f2);
    while (c != EOF){
        printf("%c", c);
        c = getc(f2);
    }
    fclose(f2);
    fclose(f);
}
