
#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	printf("Enter left side of production : ");
	gets(str);

	char str2[20];
	printf("Enter right side of production : ");
	gets(str2);

	int l1=strlen(str);
	int l2=strlen(str2);

	if((str[0]==str2[0])&&(str[l1-1]==str2[l2-1]))
		printf("The grammar is context-sensitive");
	else
		printf("The grammar is not context-sensitive");

	return 0;
}











/* 21 Program in C which can recognize a web address
Input: https://www.google.com
Output: Valid
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter string : ");
    gets(str);

    int flag = 0;
    int l = strlen(str);
    if ((str[0] == 'h'))

        flag++;

    if ((str[1] == 't'))
        flag++;
    if ((str[2] == 't'))
        flag++;
    if ((str[3] == 'p'))
        flag++;
    if ((str[4] == 's'))
        flag++;
    if ((str[5] == ':'))
        flag++;
    if ((str[6] == '/') && (str[7] == '/'))
        flag++;
    if ((str[8] == 'w') && (str[9] == 'w') && (str[10] == 'w') && (str[11] == '.'))
        flag++;
    if ((str[l - 1] == 'm') || (str[l - 1] == 'n') || (str[l - 1] == 'g'))
        flag++;
    if (flag >= 9)
        printf("\nValid web address.");
    if (flag <= 8)
        printf("\nNot a valid web address.");

    return 0;
}
