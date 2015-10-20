/* 
Write the function:

int factorial (int n);

This function returns n factorial (n!)  n! = n * (n-1) * (n-2) *...1
ex.   5! = 5 * 4 * 3* 2 * 1 = 120
4! = 4*3*2*1 = 24
*/

int factorial (int n){

	int result=1;
	int i;
	for(i=1;i<=n;i++){
		result = result * i;
	}

	return result;
}

int factorial (int n){
	int result =1;
	if(result > 0){
		result = n * factorial (n-1);
	}
	return result;
}


