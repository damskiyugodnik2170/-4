#include <string>
#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int num;
    int answer;
    cout << "Введите число: ";
    cin >> num;
    cout << "Решите пример: " << endl;
    cout << num << " * 1 = ?" << endl;
    cout << "Ответ: ";
    cin >> answer;

    if (answer != num * 1) {
        cout << "\x1b[31mОтвет неправильный!\x1b[0m";
        return 0;
    }

    cout << "\x1b[92mВы ответили правильно!\x1b[0m" << endl << endl;

    cout << num << " * 2 = ?" << endl;
    cout << "Ответ: ";
    cin >> answer;

    if (answer != num * 2) {
        cout << "\x1b[31mОтвет неправильный!\x1b[0m";
        return 0;
    }

    cout << "\x1b[92mВы ответили правильно!\x1b[0m" << endl << endl;


    cout << num << " * 3 = ?" << endl;
    cout << "ответ: ";
    cin >> answer;

    if (answer != num * 3) {
        cout << "\x1b[31mОтвет неправильный!\x1b[0m";
        return 0;
    }

    cout << "\x1b[92mВы ответили правильно!\x1b[0m" << endl << endl;


    cout << num << " * 4 = ?" << endl;
    cout << "ответ: ";
    cin >> answer;

    if (answer != num * 4) {
        cout << "\x1b[31mОтвет неправильный!\x1b[0m";
        return 0;
    }

    cout << "\x1b[92mВы ответили правильно!\x1b[0m" << endl << endl;


    cout << num << " * 5 = ?" << endl;
    cout << "ответ: ";
    cin >> answer;

    if (answer != num * 5) {
        cout << "\x1b[31mОтвет неправильный!\x1b[0m";
        return 0;
    }

    cout << "\x1b[92mВы ответили правильно!\x1b[0m" << endl << endl;


    cout << num << " * 6 = ?" << endl;
    cout << "ответ: ";
    cin >> answer;

    if (answer != num * 6) {
        cout << "\x1b[31mОтвет неправильный!\x1b[0m";
        return 0;
    }

    cout << "\x1b[92mВы ответили правильно!\x1b[0m" << endl << endl;


    cout << num << " * 7 = ?" << endl;
    cout << "ответ: ";
    cin >> answer;

    if (answer != num * 7) {
        cout << "\x1b[31mОтвет неправильный!\x1b[0m";
        return 0;
    }

    cout << "\x1b[92mВы ответили правильно!\x1b[0m" << endl << endl;


    cout << num << " * 8 = ?" << endl;
    cout << "ответ: ";
    cin >> answer;

    if (answer != num * 8) {
        cout << "\x1b[31mОтвет неправильный!\x1b[0m";
        return 0;
    }

    cout << "\x1b[92mВы ответили правильно!\x1b[0m" << endl << endl;


    cout << num << " * 9 = ?" << endl;
    cout << "ответ: ";
    cin >> answer;

    if (answer != num * 9) {
        cout << "\x1b[31mОтвет неправильный!\x1b[0m";
        return 0;

    }

    cout << "\x1b[92mВы ответили правильно!\x1b[0m" << endl << endl;
    cout << "Примеры решены, поздравляем!";
    return 0;
}
