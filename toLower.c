/*Write the function toLower which accepts a character and returns a character.  If the character is upper case alphabetic, function returns its lower case counterpart.  If it is not, function returns that character*/

char toLower(char ch){
	char rc = ch;

	if(ch >= 'A' && ch <='Z'){
		int diff = 'a' - 'A';
		rc = ch + diff;
	}
	return rc;
}



