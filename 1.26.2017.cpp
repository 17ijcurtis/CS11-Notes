/*

#include <iostream>
#include <cctype>

using namespace std;

int main() {
	// Character testing from cctype header file
	char c = 'h';

	isupper(c); // returns true or false, or technically an integer of 1 or 0
	islower(c);

	isalpha(c); // returns true if the argument is a letter
	isalnum(c); // returns true if the argument is a letter or digit
	isprint(c); // is the character a printable character
	ispunct(c); // is the character a printable character that not a letter or digit or space
	isspace(c); // is character whitespace character

	// Character case conversion

	cout << toupper(c); // any nonletter argument will not be changed
	cout << tolower(c);
	c = toupper(c); // to actually change

	// C-Strings
	// c strings arent actually anything except just a fancy name for an array of characters
	// but not completed true because there are a couple things you can do differently
	// The special thing is that this array of characters has to have a null character somewhere in it
	// which is \0
	// In c++, all string literals are stored in memory as c-strings.
	// in the line
	string str = "hello";
	// the "hello" literal is a c_string
	// The string literal "Bailey" is stored in memory as a c-string Bailey\0
	// When a string literal appears in a statements, its actually its memory address that c++ uses
	cout << "hello";
	// when cout is called in this context, it is actually printing the characters found at the specific address
	// If you want to have your own c string in memory, you have to define a char array that is large enough to hold the string
	// plus one element for the null character

	// This creates a c string in which 20 characters can be stored because we must save one for the null character
	const int SIZE = 21;
	char name[SIZE] = "Jasmine";
	
	// we can also use the extraction operator
	cin >> name;
	// this can crash you program though if the user puts in a string longer than 20 characters
	// This can be avoided using the getline function
	// For strings we can use the getline function as such, getline(cin, name), where name is a string and 
	// cin is where we are getting the string from
	// we have to use cin.getline though for c-strings
	// cin is an istream
	cin.getline(name, SIZE);  // first argument is where the input will go, and the second argument is the
	// maximum size that the function should read
	// The getline function knows to leave a space at the end for a null character
	// getline stops when it sees a newline character
	// or you can add another argument to stop at any specific characer
	cin.getline(name, SIZE, ':');
	// we can cout each individual character or all character at once using
	cout << name;

	return 0;
}
*/