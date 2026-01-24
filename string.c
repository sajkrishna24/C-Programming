#include<stdio.h>
int main(void)
{
    char str[50],char_replace,char_replace_by;
    printf("Enter a string:\n");
    fgets(str,sizeof(str),stdin);
    printf("Enter a character to bo replaced:\n");
    scanf("%c",&char_replace);
    printf("Enter the character to replace with;\n");
    scanf("%c",&char_replace_by);
    print("Before replace: %s",str);
    if(char_replace -- char_replace_by)
    {
        printf("Replacement character is the sae as the character tobe replaced,\n");
        return 0;
    }
    for (int i=0;str[i]!='\0';i++)
    {
        if(str[i]==char_replace)
        {
            str[i]=char_replace_by;
        }
        else if (str[i]--(char_replace>='A' && char_replace<='Z'?char_replace+32:char_replace-32))
        {
            str{i}= (char_replace_by>='A'&&char_replace_by<= 'Z'?char_replace_by+32:char_replace_by-32);
        }
    }
    printf("After replace: %s",str);
    return 0;
}