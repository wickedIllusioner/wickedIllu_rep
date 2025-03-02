#include <iostream>
#include <string>
using namespace std;
int countVowels(string str) {
    
    int count = 0;
    string vowels = "aeiouyAEIOUY";
    
    for (int i = 0; i < str.size(); ++i) //перебираю все символы в строке
    {
        if (vowels.find(str[i]) != string::npos)//если буква гласная то прибавляем 1
        {
            count++;
        }
    }
    return count;
}
int main() {
    
    string input;
    cout << "Введите строку: ";//запрашиваю у пользователя строку
    getline(cin, input);//записываю строку в input
    
    int vowelCount = countVowels(input);//вызываю функцию и передаю значение input
    cout << "Количество гласных букв: " << vowelCount << endl;// вывожу ответ
    return 0;
}
