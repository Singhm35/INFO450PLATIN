
#include <iostream>
#include <string>

using namespace std;

int pigLatin(string word)
{
	string translation;
	int length = 0;
	int i = 0;
	char firstletter = word[i];
	if ((word.length() <= 50))
	{
		if ((word == "the" || word == "and" || word.length() == 2))
		{
			cout << word << endl;
			return 0;
		}
		else
		{

			//letters that have to be changed because are consants 
			switch (firstletter) {
			case 'q':
			case 'w':
			case 'r':
			case 't':
			case 'y':
			case 'p':
			case 's':
			case 'd':
			case 'f':
			case 'g':
			case 'h':
			case 'j':
			case 'k':
			case 'l':
			case 'z':
			case 'x':
			case 'c':
			case 'v':
			case 'b':
			case 'n':
			case 'm':


				//***BASIC RULES FOR THE ASSIGHNMENT 
				//satsfies rule #1 of the project , makes i have an ay
				length = translation.length();
				//identifys translation as entered word
				translation = word.substr(i);
				// the length of the words.
				translation.insert(length, "ay");
				//takes out the first letters of the word hat is entered
				translation.erase(0, 1);
				//makes the first lst letters go to the end. 
				translation.insert(length, 1, word[i]);


				cout << translation << endl; 
				return 0;

			//include the vowels 

			case 'e': 
			case 'u':
			case 'i':
			case 'o':
			case 'a':

			translation = word.substr(i); 
			length = translation.length();
			translation.insert(length, "ay");
			cout << translation << endl;
			return 0;
			break;

			//numbers for rule numer 3 for if 

			case '0': 
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case '\0':

				//if it is not working 
				cout << "please try again" << endl;
				return -1; 
				break;
			}
		}
	}
	else
	{
		cout << "please try again" << endl;
		return -1; 
	}
}

//at the end so defintion not needed
int main() 
{
	string word; 
	char answer; 

	//for multiple tries so the user can do it again 
	do { 
		cout << "Please enter a word that you want to be translated into Pig Latin : " << endl;

		cin >> word; 

		pigLatin(word);

		cout << endl;

		//what the output wil be
		cout << "Press 'y' if you want to try this again! ";
		cin >> answer;
		cout << endl;
	} while ((answer == 'y') || (answer == 'Y')); 

	return 0;
}