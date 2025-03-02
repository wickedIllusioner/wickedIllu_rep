#include <iostream>
#include <string>
using namespace std;

string palindromeCheck(string str) {
    string lower_str;   // Исходная строка в нижнем регистре
    string reverse;     // Перевернутая строка

    // Замена регистра исходной строки
    for (char ch : str) {
        lower_str += tolower(ch);
    }

    // Запись строки в обратном порядке
    for (int i = lower_str.size() - 1; i >= 0; --i) {
        reverse += lower_str[i];
    }

    // Сравнение обратной и исходной строки в нижнем регистре
    if (reverse == lower_str) return "Строка является палиндромом";
    else return "Строка не является палиндромом";
}

int main() {
    string str;
    cout << "Введите строку: ";
    getline(cin, str);  // Ввод строки
    cout << palindromeCheck(str) << endl;   // Печать результата работы функции
    return 0;
}
