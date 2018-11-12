#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}
void ReadString( char s[] ){
	int i;
	for(i=0;i<MAXS;i++)
		s[i]=getchar();
		if(s[i]=='\n')
		{
			i++;
			s[i]='\0';
			break;
		}
}
void StringCount( char s[] )
{	
	int letter,blank,digit,other;
	letter=blank=digit=other=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
			letter++;
		else if(s[i]>='0'&&s[i]<='9')
			digit++;
		else if((s[i]==' ')||(s[i]=='\n'))
				blank++;
		else other++;
						
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
}
