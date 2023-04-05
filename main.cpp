#include <iostream>
#include <string>
int main()
{
    std::cout<<"Hello World";
    std::string name; //создаю комментарии в исходном коде
    std::cout << "Enter your name: ";//запрос на ввод имени 
    std::cin >> name; //ввод имени
    std::cout << "Hello world from " << name << "!";
    //случайно убрал using namespace std; в part 1 
    //"вношу другие изменения"
}
