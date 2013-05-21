#include "word.h"
#include <stdio.h>
#include <readline/readline.h>
#include <stdbool.h>
#include <math.h>

char * answer() {
  switch(random()%5) {
	case 0:
		return "r u stupid? try again!   :";

	case 1:
		return "no... i don't think so.. but close enougth! try one more time!   :";

	case 2:
		return "u have 2 read more books boy... but after u guess the word!   :";
 
	case 3:
	
		return "no.. it's useless...   :";
	}
	return "not bad try!   :";
}

int main() {
printf("welcome 2 the crazy word's game!/n");
int res=random()%100;
//int ress=round(res)%100;
 char lines[100];
 char *input;
int numb=random()%100003;
getword(lines,numb);
printf("%s",lines);
mixword(lines);
//printf("%s",lines);
input = readline("enter word plz : ");
while (strncasecmp(lines, input, length_strings(lines)-1))
input = readline(answer());
printf("conglatulations! u won!/n");


	return 0;
}
