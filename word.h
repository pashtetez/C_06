#pragma once

#include <stdio.h>
#include <readline/readline.h>
#include <stdbool.h>

void getword(char *word,int step)
{
  FILE *ptr;
	ptr = fopen("/usr/share/dict/words", "r");
	int i=0;
	
do{
	for ( i=0;i<=step;i++)  
		fgets(word,80,ptr);
}while ((length_strings(word)>4));
}
