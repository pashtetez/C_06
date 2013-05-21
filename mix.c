#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int length_strings(char *word)
{
    int length = 0;
    int i = 0; 
    for (i= 0; word[i] != '\n'; i++)
        length++;
 
    return length;
}


void mixword(char *wor)
{
  char word[100];
	strcpy(word,wor);
	int i=0;
	int j=0;
	int k=length_strings(word);
	//printf("%d",k);
printf("guess the following word: ");
	for ( i=0;i<k;i++){	
		int r=random()%length_strings(word);
		printf("%c",word[r]);
		if (length_strings(word)!=1)
		for ( j=r;j<length_strings(word);j++)
			word[j]=word[j+1];
		//else
		//	printf("%c",word[0]);
	}
printf("\n");
}
