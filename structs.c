
#include <stdio.h>
#include <string.h>

//NOTE: Dog is not a variable.  It
//specifies what a variable of type
//"Dog" would look like
struct Dog{
	//note that the _ is not needed.  I like it
	//but it has no syntactic relevance
	char name_[20];
	int age_;
};
void printDog(const struct Dog* theDog);
void printAllDogs(const struct Dog array[],int size);
void assignToDog(int idx, const char* newname, 
					int newage,struct Dog array[],int sz);
void sortDog(struct Dog array[],int size);

int main(void){

	struct Dog frodo;

	strcpy(frodo.name_ , "Frodo");

	frodo.age_ = 6;

	printDog(&frodo);
	
	//allDogs is an array of 5 Dog
	//structs
	struct Dog allDogs[5];
	strcpy(allDogs[0].name_,"mowgli");
	allDogs[0].age_= 10;
	strcpy(allDogs[1].name_,"Lassie");
	allDogs[1].age_= 1;

	//printDog(&allDogs[0]);
	//printDog(&allDogs[1]);

	struct Dog altDogs[5]={
		{"Mowgli",10},
		{"Lassie",1},
		{"Beethoven",3},
		{"Air Bud",4},
		{"Snoopy",7}
	};
	printAllDogs(altDogs,5);
	assignToDog(0,"Scooby Doo",5,altDogs,5);
	printf("****************\n");
	printAllDogs(altDogs,5);
	printf("sorting......\n");
	sortDog(altDogs,5);
	printAllDogs(altDogs,5);

}
void printAllDogs(const struct Dog array[],int size){
	int i;
	for(i=0;i<size;i++){
//		printf("%s - %d\n", array[i].name_, array[i].age_);
		printDog(&array[i]);
	}
}
//given an index, a name and an age, replace the dog at
//index with the new name and new age for that dog
void assignToDog(int idx, const char* newname, 
					int newage,struct Dog array[],int sz){
	if(idx >=0 && idx <sz){
		strcpy(array[idx].name_,newname);
		array[idx].age_=newage;
	}

}
/*this function sorts dogs by name*/
void sortDog(struct Dog array[],int size){
	int i,j;
	struct Dog temp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
			if(strcmp(array[j].name_,array[j+1].name_) > 0){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
void printDog(const struct Dog* theDog){
	//print out name of Frodo and age
	//in format: name - age
	printf("%s - %d\n", theDog->name_, theDog->age_);
	//theDog->name_ is equivalent to 
	//(*theDog).name_ DO NOT USE the (*theDog).name_ syntax
	//it is not good.
}



