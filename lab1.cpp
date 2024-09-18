    #include <iostream>
    #include <Windows.h>
    using namespace std;

    int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        int age;

    
        cout << "Введіть ваш возраст: ";
        cin >> age;

    
        if (age >= 0  && age <= 24) {
            cout << "Молодьож" << endl;
        }
        else if (age >= 25 && age <= 64) {
            cout << "Дорослі" << endl;
        }
        else if (age >= 65 && age <= 1200) {
            cout << "Люди похилого віку" << endl;
        }
        else (age >= -1 && age <= -100) {
            cout << "неправильн вказано" << endl;
        }
        return 0;
    }
