//Selena Ouyang 
//Hw 4
//11-12-24

#include <iostream>
#include <iomanip>

using namespace std;

//Function prototype
void filterEvens (int myArray[], int index); 
void dna_to_rna (string nucleotides);

int main() { 
    
    cout << "Exercise 1" << endl;
	int myArray[8]; //declaring array with 8 components 
	int index; 
	
	cout << "Enter 8 values: " << endl;
	
	for (index = 0; index < 8; index++) //runs for eight values
	    cin >> myArray[index]; //user input into array 
    
    cout << "\nEven Number(s): " << endl << endl << endl;
    
	filterEvens (myArray, index); //calls void function using myArray and index for the parameters
	
	
	
	
	cout << "\nExercise 2";
	int totalCars, i;
	int maxSeller = 0; //assumes saleperson #1 sold the most cars

	int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}; //declares an array to store the number of cars sold by each salesperson
	
    
	for (i = 0; i < 10; i++){ //runs for the ten components
	
	    totalCars += cars[i]; //update the total # of cars by adding together all the cars sold by the salespeople
	        
	        if (cars[maxSeller] < cars[i]) //if value of car[i] is greater than the current maxSeller
	            maxSeller = i; //updates values of maxSeller to i 
	}
	
	    cout << "\nTotal number of cars sold at the entire dealership: " << totalCars; //outputs total cars sold
	    cout << "\nSalesperson #" << maxSeller << " sold the most cars"; //outputs the best salesperson
	    cout << "\nSalesperson #" << maxSeller << " sold " << cars[maxSeller] << " cars" << endl << endl; //outputs cars sold by best salesperson
   
	
	
	cout <<"\nExercise 4";
	string DNA;
	cin >> DNA;
	dna_to_rna (DNA);
	
	
	
	
	
	
	
	return 0;
}

//Function Declaration
void filterEvens (int myArray[], int index){
    for (index = 0; index < 8; index++)   // runs for eight values 
        if (myArray[index]%2 == 0)       //if the number is even (divisible by 2)
            cout << myArray[index] << " ";
}
void dna_to_rna (string DNA){
    char character;
    if (character = 'A')
	cout << "U";
	if (character = 'C')
	cout << "G";
	if (character = 'G')
	cout << "C";
	if (character = 'T')
	cout << "A";
}
/*
Exercise 1
Enter 8 values: 
34 23 71 23 12 38 19 10

Even Number(s): 
34 12 38 10 


Exercise 2
Total number of cars sold at the entire dealership: 58
Salesperson #4 sold the most cars
Salesperson #4 sold 14 cars

*/
