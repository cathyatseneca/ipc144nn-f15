#include <stdio.h>
#include <string.h>
int main(void){
	char ch;
	ch = 'a';
	printf("%c\n",ch);
	ch = ch + 1;
	printf("%c\n",ch);

	char s[5] = "a";
	printf("%s\n",s);
	char s1[6] = "1234";

	char ch1 = '1';
	char ch2 = '3';

	char ch3 = (ch1-'0') + (ch2 -'0') +'0';
	/* ch3 = 1 + 3 + '0'
	   ch3 = ch1 + (ch2-'0');
	       = '1' + 3*/
	printf("%c + %c = %c\n", ch1, ch2, ch3);

	/*s1 = "45";*/
	strcpy(s1,"45");
	return 0;

	
}

/*this function is passed a null terminated character string
containing a numeric characters only "1234". Function returns
the integer the string represents.  "1234" would return 1234*/
int getNumber(const char* s){
	int endIdx = strlen(s)-1;
	int rc=0;
	int multiplier=1;
	while(endIdx >= 0){
		int digit = s[endIdx]-'0';
		rc = rc + digit*multiplier;
		multiplier = multiplier *10;
		endIdx--;
	}
	return rc;
}
/*
int getNumber(const char* s){
	int rc=0;
	int i;
	for(i=0;s[i]!='\0';i++){
		rc=rc*10+(s[i]-'0');
	}

	return rc;
}
*/
/*given two strings like "apple" and "banana" return a negative number
if the first string comes before the second alphabetically.  a positive number
if the first string comes after the second and 0 if they are the same.
However, do this in a case insensitive manner*/
char toLower(char ch);
int strCaseCmp(const char* s1, const char* s2){
	int rc=0;
	int i;
	for(i=0;rc==0 && s1[i]!='\0' && s2[i]!='\0';i++){
		rc=toLower(s1[i])-toLower(s2[i]);
	}
	if(rc==0){
		rc=s1[i]-s2[i];
	}
	return rc;
}











