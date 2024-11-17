	
//Selena Ouyang 
//Hw 4 Exercise 4
//11-12-24

#include <iostream>
#include <string>
#include <istream>

using namespace std;

//Function prototype
void dna_to_rna(const string& DNA);

int main() { 
	cout << "\nExercise 4"; //formatting
 	string DNA; //setting variable
  	cout << "\nEnter DNA nucleotides: " << endl;
  	getline(cin, DNA);  // Read entire line of DNA sequence
  	dna_to_rna(DNA); //calls function to convert DNA to RNA	
	
	return 0;
}
void dna_to_rna(const string& DNA) { //Constant reference to DNA
    cout << "\nRNA: " << endl;
    for (int list = 0; list < DNA.length(); list++) { //runs for as many components there are in DNA
        if (DNA[list] == 'A') //A outputs as "U"
            cout << "U";
         else if (DNA[list] == 'C') //C outputs as "G"
            cout << "G";
         else if (DNA[list] == 'G') //G outputs as "c"
            cout << "C";
         else if (DNA[list] == 'T') //T outputs as "A"
            cout << "A";
    }
}

/*
Exercise 4
Enter DNA nucleotides: 
ACG TGCA

RNA: 
UGCACGU
*/
