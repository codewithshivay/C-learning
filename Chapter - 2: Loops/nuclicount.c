/*Nucleotide count  A , C , G , T */

#include <stdio.h>
int test_strand_count(char []);
int test_strand_count(char *s)
{
    char A=0,C=0,T=0,G=0;
    int i;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] == 'A')
          A++;
    }
    printf("\nA : %d",A);

    for(i=0; s[i]!='\0'; i++)
    {
        if('C' == s[i])
          C++;
    }
    printf("\nC : %d",C);

    for(i=0; s[i]!='\0'; i++)
    {
        if('G' == s[i])
          G++;
    }
    printf("\nG : %d",G);

    for(i=0; s[i]!='\0'; i++)
    {
        if('T' == s[i])
          T++;
    }
    printf("\nT : %d",T);

}

int main()
{
    test_strand_count("ACCGTGT");
}
