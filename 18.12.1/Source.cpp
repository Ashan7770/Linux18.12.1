
//Как это должно выглядеть в Linux: drwxr--r-x 5 dima dima 4096 jun 26 22:07 dz.18.12.1 (сборка > g++ -o privet main.cpp)


#include <iostream>

using namespace std;


class User {
public:
    string _name;
    string _login;
    string _pass;
};
class Message {
public:
    string _text = " Здравствуйте! Какая это была не простая работа.";
 
};


int main() {
    system("chcp 1251");
    User a;
    Message b;
    a._name = "Дима";
    a._login = "*******";
    a._pass = "Верно";

    cout << "От вашего ученика," << a._name << " сообщение... \n" <<b._text << endl;


    return 0;
}