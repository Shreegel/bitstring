//bitstring
#include<stdio.h>
#include<string.h>
#define SIZE 50
char AND (char a,char b)
{
    if (a=='1' && b=='1')
    return '1';
    else
    return '0';

}
char OR (char a,char b)
{
    if (a=='1' || b=='1')
    return '1';
    else
    return '0';

}
int search (int A[], int key, int size )
{
    int i;
    for (i=0;i<size; i++)
    {
        if (A[i]==key)
        return i;
    }
    return -1;

}
void BitwiseAND(char str1[],char str2[],char str3[])
{
    int i;
    for (i=0;i<strlen (str1);i++)

    {
        str3[i]=AND(str1[i],str2[i]);
    }
}
void BitwiseOR(char str1[],char str2[],char str3[])
{
    int i;
    for (i=0;i<strlen (str1);i++)

    {
        str3[i]=OR(str1[i],str2[i]);
    }
}
void Complement (char str[])
{
    int i;
    char temp[13];
    for (i=0;i<12;i++)
    {
        if (str[i]=='1')
        temp[i]='0';
        else
        temp[i]='1';






    }
    strcpy(str,temp);
}
int main()
{
    char str[50];
    int U[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int A[]={1,2,7,8,10};
    int B[]={1,3,5,7,9};
    int i,index;
    char strA[]="000000000000";
    char strB[]="000000000000";
    char strAuB[]="000000000000";
    char strAiB[]="000000000000";
    printf("\n Calculating bitstring for A:\n");
    for (i=0;i<5;i++)
    {
        index=search (U,A[i],12);
        if (index>=0)
        strA[index]='1';
    }
    printf("Bitstring for set A=%s\n",strA);
    printf("\n Calculating bitstring for B:\n");
    for (i=0;i<5;i++)
    {
        index=search (U,B[i],12);
        if (index>=0)
        strB[index]='1';
    }
    printf("Bitstring for set B=%s\n",strB);
    printf("Calculating bitstring for A union B:\n");
    BitwiseOR(strA,strB,strAuB);
    printf("%s\n",strAuB);
    printf("Calculating bitstring for A intersection B:\n");
    BitwiseOR(strA,strB,strAiB);
    printf("%s\n",strAuB);
    printf("Calculating bitstring for A complement:\n");
    Complement(strA);
    printf("%s",strA);
    

return 0;
}


