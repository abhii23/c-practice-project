#include <stdio.h>
#include<string.h>
int main()
{
    char str[50];
    fgets(str,50,stdin);
    int i=0,flag=0;
    int j=strlen(str)-1;
    while(i<=j)
    {
     if (!(str[i] >= 'a' && str[i] <= 'z'))
            i++;
     else if (!(str[j] >= 'a' && str[j] <= 'z'))
            j--;
     else if (str[i]==str[j])
        i++,j--;
     else {
        flag=1;
        break;
     }
    
    }
    if(flag==1)
    {
        printf("not palindrom");
    }
    else
    {
        printf("palindrom");
    }

    return 0;
}

