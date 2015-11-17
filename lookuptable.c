#include <stdio.h>
#include <string.h>
int linearSearch(const char* key, char array[][10],int sz);

int main(void){
	char daysOfWeek[7][10]={
		"Sunday",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday"
	};
	int day;
	char wordDay[10];
	printf("enter a day of week, 1 for Sunday(1 to 7): ");
	scanf("%d",&day);

	printf("you entered %s\n", daysOfWeek[day-1]);

	printf("Enter day of week: ");
	scanf("%s",wordDay);
	day = linearSearch(wordDay,daysOfWeek,7) +1;
	printf("That is day # %d\n",day);

}

/*this function returns the index of the element in array that
has same value as key.  The array has sz elements in it.  Function
returns -1 if key is not found*/
int linearSearch(const char* key, char array[][10],int sz){
	int i;
	int rc=-1;
	for(i=0;i<sz && rc==-1 ;i++){
		if(strcmp(key,array[i])==0){
			rc=i;
		}
	}
	return rc;
}

