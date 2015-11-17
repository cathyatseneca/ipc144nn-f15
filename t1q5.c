#include <stdio.h>
double tripCost(int age, int numTrips, int numTickets){
	double cost;

	if(age < 6){
		cost=0;
	}
	else if(age <=17 && age <= 64){
		cost = numTickets*2.25 + (numTrips-numTickets)*2.60;
	}
	else{
		cost = numTickets*1.60 + (numTrips-numTickets)*2.10;

	}

	return cost;
}


int main(void){
	int lower;
	int upper;
	int choice;
	int i;
	int sum=0;
	printf("Please enter a number: ");
	scanf("%d",&lower);

	printf("Please enter another number: ");
	scanf("%d",&upper);
	printf("Do you wish to sum:\n");
	printf("1) all numbers\n");
	printf("2) only odd\n");
	printf("3) only even\n");
	scanf("%d",&choice);

	if(choice == 1){
		for(i=lower; i<upper ;i++){
			sum = sum + i;
			//sum+=i;
			printf("%d + ",i);
		}
		sum+=upper;
		printf("%d = ", upper);
		printf("%d\n",sum);
	}
	else if (choice == 2){
		for(i=lower; i<upper ;i++){
			if(i%2 == 1){
				sum = sum + i;
				//sum+=i;
				printf("%d + ",i);
			}
		}
		if(upper%2 == 1){
			sum+=upper;
			printf("%d = ", upper);
		}
		else{
			printf(" = ");
		}
		printf("%d\n",sum);

	}
	else{
		if(lower%2 == 1){
			lower = lower+1;
		}
		if (upper%2 == 1){
			upper = upper -1;
		}
		for(i=lower; i<upper ;i+=2){
			sum = sum + i;
			//sum+=i;
			printf("%d + ",i);
		}
		sum+=upper;
		printf("%d = ", upper);
		printf("%d\n",sum);		
	}

}



