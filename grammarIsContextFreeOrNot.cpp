#include <stdio.h>

int all_upper(char ch[5])
{
    int i = 0, flag = 1;

    for (; ch[i] != '\0'; i++)
        if (ch[i] > 'Z')
            flag = 0;

    return flag;
}
int all_lower(char ch[5])
{
    int i = 0, flag = 1;

    for (; ch[i] != '\0'; i++)
        if (ch[i] < 'Z')
            flag = 0;

    return flag;
}
int main()
{
    char left[5], right[5];

    printf("Enter the left production: ");
    scanf("%s", left);

    fflush(stdin);

    printf("\nEnter the right production: ");
    scanf("%s", right);

    //if(all_upper(left) && all_lower(right))

    if (all_upper(left))
        printf("CFG");
    else
        printf("Not");
}











/* 18 Program to count the number of white spaces between two consecutive
	  tokens in a program and replace it with a single whitespace

*/

#include <ctype.h>
#include <stdio.h>

void strip_extra_spaces(char *str)
{
    int i, x;

    for (i = x = 0; str[i]; ++i)
        if (!isspace(str[i]) || (i > 0 && !isspace(str[i - 1])))
            str[x++] = str[i];
    str[x] = '\0';
}
int main(int argc, char *argv[])
{
    char str[] = " If you gaze into   the abyss, the abyss   gazes also into   you. ";

    //CHANGE IT ACCORDING TO THE INPUT

    strip_extra_spaces(str);
    printf("%s\n", str);

    return 0;
}






