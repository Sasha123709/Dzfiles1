
// task 1

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    cout << "Робота з файлами" << endl;
//    ifstream file1("text.txt");
//    ifstream file2("text2.txt");
//    if (!file1 || !file2) {
//        cout << "Помилка відкриття файлів" << endl;
//        return 1;
//    }
//
//    string line1, line2;
//    short count = 1;
//    while (getline(file1, line1) && getline(file2, line2)) {
//        if (line1 != line2) {
//            cout << "Різниця у рядку " << count << ":\n";
//            cout << "Файл 1: " << line1 << "\n";
//            cout << "Файл 2: " << line2 << "\n";
//     
//        }
//        
//        count++;
//    }
//    
//}

//task 2

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    cout << "Робота з файлами" << endl;
//    ifstream file1("text.txt");
//    ofstream file2("text2.txt");
//    if (!file1 || !file2) {
//        cout << "Помилка відкриття файлів" << endl;
//        return 1;
//    }
//    int charCount = 0, lineCount = 0, vowelCount = 0, consonantCount = 0, digitCount = 0;
//    string line;
//    while (getline(file1, line)) {
//        lineCount++;  
//        for (char c : line) {
//            if (isalnum(c)) {  
//                charCount++;  
//                if (isdigit(c)) {
//                    digitCount++;  
//                }
//                else {
//                    char lower = tolower(c);
//                    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
//                        vowelCount++; 
//                    }
//                    else {
//                        consonantCount++;
//                    }
//                }
//            }
//        }
//    }
//    file2 << "Number of characters " << charCount << endl;
//    file2 << "Number of lines : " << lineCount << endl;
//    file2 << "Number of vowel letters : " << vowelCount << endl;
//    file2 << "Number of consonant letters : " << consonantCount << endl;
//    file2 << "Number of digits : " << digitCount << endl;
//
//    cout << "Готово" << endl;
//
//    return 0;
//}

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Робота з файлами" << endl;
    ifstream file1("text.txt");
    ofstream file2("text2.txt");
    if (!file1 || !file2) {
        cout << "Помилка відкриття файлів" << endl;
        return 1;
    }
}