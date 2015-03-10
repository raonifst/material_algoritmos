#include <stdio.h>

void copy(char source[], char dest[], int*k)
{
    int i = 0;
    while(source[i]!='\0')
        dest[(*k)++] = source[i++];
}

int anterior(char frase[], int i,  char v)
{
    if(i <= 0) return 0;
    return (frase[i-1] == v);
}

void SMS(char frase[], char res[])
{
    int i, k = 0;
    for(i = 0; frase[i]!= '\0'; i++)    {
        switch(frase[i])    {
            case 'A':
                if(anterior(res, k, '2')) copy("x", res, &k);
                copy("2", res, &k);
            break;
            case 'B':
                if(anterior(res, k, '2')) copy("x", res, &k);
                copy("22", res, &k);
            break;
            case 'C':
                if(anterior(res, k, '2'))
                    copy("x", res, &k);
                copy("222", res, &k);
            break;

            case 'D':
                if(anterior(res, k, '3')) copy("x", res, &k);
                copy("3", res, &k);
            break;
            case 'E':
                if(anterior(res, k, '3')) copy("x", res, &k);
                copy("33", res, &k);
            break;
            case 'F':
                if(anterior(res, k, '3'))
                    copy("x", res, &k);
                copy("333", res, &k);
            break;

            case 'G':
                if(anterior(res, k, '4')) copy("x", res, &k);
                copy("4", res, &k);
            break;
            case 'H':
                if(anterior(res, k, '4')) copy("x", res, &k);
                copy("44", res, &k);
            break;
            case 'I':
                if(anterior(res, k, '4'))
                    copy("x", res, &k);
                copy("444", res, &k);
            break;

        }
    }
    res[k] = '\0';
}

int main()
{
    char frase[100], res[1000];
    SMS("ACB", res);
    printf("%s", res);
    return 0;

}
