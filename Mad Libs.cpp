#include <iostream>
using namespace std;

int main() {
	string adjective1, adjective2, typeOfBird, roomInAHouse, pastTenseVerb, verb, relativesName, noun, liquid, ingVerb, pluralBodyPart, pluralNoun, ingVerb2, noun2;
	cout << "Enter an adjective: ";
	getline(cin, adjective1);
	cout << "Enter an adjective: ";
	getline(cin, adjective2);
	cout << "Enter a type of bird: ";
	getline(cin, typeOfBird);
	cout << "Enter a room in a house: ";
	getline(cin, roomInAHouse);
	cout << "Enter a past tense verb: ";
	getline(cin, pastTenseVerb);
	cout << "Enter a verb: ";
	getline(cin, verb);
	cout << "Enter a relative's name: ";
	getline(cin, relativesName);
	cout << "Enter a noun: ";
	getline(cin, noun);
	cout << "Enter a liquid: ";
	getline(cin, liquid);
	cout << "Enter a verb ending in -ing: ";
	getline(cin, ingVerb);
	cout << "Enter a part of the body (plural): ";
	getline(cin, pluralBodyPart);
	cout << "Enter a plural noun: ";
	getline(cin, pluralNoun);
	cout << "Enter a verb ending in -ing: ";
	getline(cin, ingVerb2);
	cout << "Enter a noun: ";
	getline(cin, noun2);
	cout << "\n";
	cout << "It was a " << adjective1 << ", cold November day." << endl;
	cout << "I woke up to the " << adjective2 << " smell of " << typeOfBird << " roasting in the " << roomInAHouse << " downstairs." << endl;
	cout << "I " << pastTenseVerb << " down the stairs to see if I could help " << verb << " the dinner." << endl;
	cout << "My mom said, \"See if " << relativesName << " needs a fresh " << noun << ".\"" << endl;
	cout << "So I carried a tray of glasses full of " << liquid << " into the " << ingVerb << " room." << endl;
	cout << "When I got there, I couldn't believe my " << pluralBodyPart << "!" << endl;
	cout << "There were " << pluralNoun << " " << ingVerb2 << " on the " << noun2 << "!" << endl;
}
