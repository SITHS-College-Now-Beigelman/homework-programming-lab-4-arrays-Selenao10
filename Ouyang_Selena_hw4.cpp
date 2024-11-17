//Selena Ouyang 
//Hw 4
//11-12-24

#include <iostream>
#include <iomanip>

using namespace std;

//Function prototype
void filterEvens (int myArray[], int index); 


int main() { 
    
    cout << "Exercise 1" << endl;
	int myArray[8]; //declaring array with 8 components 
	int index; 
	
	cout << "Enter 8 values: " << endl;
	
	for (index = 0; index < 8; index++) //runs for eight values
	    cin >> myArray[index];
    
    cout << "\nEven Number(s): " << endl;
    
	filterEvens (myArray, index); //calls void function using myArray and index for the parameters
	
	
	
	
	cout << endl << endl << "\nExercise 2";
	
	int totalCars, i, maxSeller = 1; //assigns salesperson who sold the most cars to saleperson #1

	int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};
	

	for (i = 1; i < 10; i++)
	    totalCars += cars[i]; //update the total # of cars by adding together all the cars sold by the salespeople
	    cout << "\nTotal number of cars sold at the entire dealership: " << totalCars;
	    
	if (cars[maxSeller] < cars[i])
	    maxSeller = i;
	    cout << "\nSalesperson #" << i << " sold the most cars";
	    cout << "\nSalesperson #" << i << " sold " << cars[i] << " cars";
   
	
	
	
	
	
	
	return 0;
}

//Function Declaration
void filterEvens (int myArray[], int index){
    for (index = 0; index < 8; index++)   // runs for eight values 
        if (myArray[index]%2 == 0)       //if the number is even (divisible by 2)
            cout << myArray[index] << " ";
}
/*
Exercise 1
Enter 8 values: 
34 23 71 23 12 38 19 10

Even Number(s): 
34 12 38 10 


Exercise 2
Total number of cars sold at the entire dealership: 51
Salesperson #10 sold the most cars
Salesperson #10 sold -933324800 cars

*/
