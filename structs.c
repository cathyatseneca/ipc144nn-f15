
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

	printDog(&allDogs[0]);
	printDog(&allDogs[1]);

	struct Dog altDogs[5]={
		{"Mowgli",10},
		{"Lassie",1}
	};
	printDog(&altDogs[0]);
	printDog(&altDogs[1]);

}

void printDog(const struct Dog* theDog){
	//print out name of Frodo and age
	//in format: name - age
	printf("%s - %d\n", theDog->name_, theDog->age_);
	//theDog->name_ is equivalent to 
	//(*theDog).name_
}



