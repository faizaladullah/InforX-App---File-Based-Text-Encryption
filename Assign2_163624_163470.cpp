#include <iostream>
#include <fstream>
#include <cassert> 
# include "linkedStack.h"
using namespace std;

class InforXApp {
private:
    string inputText;

   
	 

public:
	InforXApp(){}
	~InforXApp(){}
	 // Function to reverse characters in every word
    string reverseCharactersInWords(const string& input) {
        string result = "";
        linkedStackType<char> charStack;

        for (char c : input) {                  //reads as "for each character c in the string input
                charStack.push(c);
				}

        // output reverse
        while (!charStack.isEmptyStack()) {
            result += charStack.top();
            charStack.pop();
        }

        return result;
    }

    // Function to replace vowels based on the encryption protocol
    string replaceVowels(const string& input) {
        string result = "";


        for (char c : input){
        	if(c == 'a' || c == 'A')
        	{
        		result += '*';
			}
			else if(c == 'e' || c == 'E')
        	{
        		result += '@';
			}
			else if(c == 'i' || c == 'I')
        	{
        		result += '#';
			}
			else if(c == 'o' || c == 'O')
        	{
        		result += '$';
			}
			else if(c == 'u' || c == 'U')
        	{
        		result += '&';
			}
			else
			    result += c;
		}
        return result;

        }
    string replacedecrypted(const string& input){
     	string result = "";
     	for (char c : input){
        	if(c == '*')
        	{
        		result += 'a';
			}
			else if(c == '@')
        	{
        		result += 'e';
			}
			else if(c == '#')
        	{
        		result += 'i';
			}
			else if(c == '$')
        	{
        		result += 'o';
			}
			else if(c == '&')
        	{
        		result += 'u';
			}
			else
			    result += c;
		}
        return result;
	 }
	
	
	
    // Function to read input text from a file and encrypt it
    void encryptFromFile(const string& filename) {
        ifstream inputFile(filename);
        cout << "_______________________________________Encryption Process_______________________________________"<< endl;
        if (!inputFile) {
            cout << "Error opening file: " << filename << endl;
            return;
        }
        char ch;
        while (inputFile.get(ch)) {
        inputText += ch; 
        }
        inputFile.close();
        

        if (inputText.empty()) {
            cout << "Error: Input file is empty." << endl;
            return;
        }

        cout << "\nOriginal Text: " << inputText << endl;

        string reversedText = reverseCharactersInWords(inputText);

        string encryptedText = replaceVowels(reversedText);

        cout << "\nEncrypted Text: " << encryptedText << endl;
        inputText = "";
        cout << "________________________________________________________________________________________________"<< endl;
    }
    
    
    
     // Function to read encrypted text from a file and decrypt it
    void decryptFromFile(const string& filename) {
    	 cout << "_______________________________________Decryption Process_______________________________________"<< endl;
        ifstream inputFile(filename);
        if (!inputFile.is_open()) {
            cout << "Error opening file: " << filename << endl;
            return;
        }

        char ch;
        while (inputFile.get(ch)) {
        inputText += ch; 
        }
        inputFile.close();

        if (inputText.empty()) {
            cout << "Error: Input file is empty." << endl;
            return;
        }
        
        cout << "\nOriginal Text: " << inputText << endl;
        string decryptedText = replacedecrypted(inputText);
        
        string normalText = reverseCharactersInWords(decryptedText);
        
        cout << "\nDecrypted Text: " << normalText << endl;
        inputText = "";
        cout << "________________________________________________________________________________________________"<< endl;
    }
};


//////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main() {
    InforXApp inforX;

    int choice;
    string filename;

    do {
    	cout << "___________________________________________InforX App___________________________________________"<< endl;
        cout << "InforX App Menu:" << endl;
        cout << "1. Encrypt text from file" << endl;
        cout << "\n2. Decrypt text from file" << endl;
        cout << "\n3. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter input file name: ";
                cin >> filename;
                inforX.encryptFromFile(filename);
                break;
            case 2:
                cout << "\nEnter input file name: ";
                cin >> filename;
                inforX.decryptFromFile(filename);
                break;
            case 3:
            
                cout << "\nExiting InforX App. Goodbye!" << endl;
                cout << "\n________________________________________________________________________________________________"<< endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }

    } while (choice != 3);

    return 0;
}


