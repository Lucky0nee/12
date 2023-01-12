#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    int num, sum;
    cout << "Введіть цiле число бiльше нуля: ";
    cin >> num;
    if (num == 0)
        return 0;

    cout << "Перевернуте число: ";
    while (num > 0) {
        sum = num % 10;
        num /= 10;
        cout << sum;
    }
  
    return 0;
}
