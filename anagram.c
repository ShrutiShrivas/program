#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100];
	char str2[100];
	int len1,len2,len,i,j,found=0;
	
	printf("enter the string");
	scanf("%s",str1);
	printf("enter the string2");
	scanf("%s",str2);
	
	len1=strlen(str1);
	len2=strlen(str2);
	
	if(len1==len2)
	{
		len=len1;
		for(i=0;i<len;i++)
		{
			for(j=0;j<len;j++)
			{
				if(str1[i]==str2[j])

				{
					found++;
					
				}				
			
			}
		
		}
		if(found==len)
		{
			printf("anagram");
		}
	
		else
		{
			printf("not anagram");
		}
			

	}	
	else
	{
		printf("not anagram");
	}
}

