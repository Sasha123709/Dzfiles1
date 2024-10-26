
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
//    file1.close();
//    file2.close();
//}

//task 2

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    cout << "Робота з файлами" << endl;
//    ifstream file1("text.txt");
//    ofstream file2("text2.txt");
//
//    if (!file1 || !file2) {
//        cout << "Помилка відкриття файлів" << endl;
//        return 1;
//    }
//    int ccount = 0, lcount = 0, vcount = 0, concount = 0, dcount = 0;
//    string line;
//    while (getline(file1, line)) {
//        lcount++;
//        for (char c : line) {
//            if (isalnum(c)) {
//                ccount++;
//                c = tolower(c);
//                isdigit(c) ? dcount++ : (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? vcount++ : concount++;
//            }
//        }
//    }
//    file2 << "Number of characters: " << ccount << endl;
//    file2 << "Number of lines: " << lcount << endl;
//    file2 << "Number of vowel letters: " << vcount << endl;
//    file2 << "Number of consonant letters: " << concount << endl;
//    file2 << "Number of digits: " << dcount << endl;
//    cout << "Готово" << endl;
//    file1.close();
//    file2.close();
//    return 0;
//}


//task 3   

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main() {
//    ifstream file1("text.txt");
//    ofstream file2("text2.txt");
//
//    if (!file1 || !file2) {
//        cout << "Помилка відкриття файлів" << endl;
//        return 1;
//    }
//
//    string line, lastline;
//
//    while (getline(file1, line)) {
//        file2 << lastline << endl;
//        lastline = line;
//    }
//
//    file1.close();
//    file2.close();
//}


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("text.txt");
    ofstream file2("text2.txt");
    if (!file) {
        cout << "Помилка відкриття файлу" << endl;
        return 1;
    }

    string line;
    int maxline = 0;

    while (getline(file, line)) {
        if (line.length() > maxline) {
            maxline = line.length();
        }
    }

    file2 << "Max size line: " << maxline << endl;
    
    file.close();
    file2.close();
}