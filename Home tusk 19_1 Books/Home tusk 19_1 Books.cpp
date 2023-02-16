#include <iostream>
#include<iomanip>
#include<Windows.h>
#include <string>
#include<conio.h>

using namespace std;

/* 
■ Поиск книг по автору;
■ Поиск книги по названию;
■ Сортировка массива по названию книг;
■ Сортировка массива по автору;
■ Сортировка массива по издательству.*/

struct Book {
    string name[30];
    string autor[30];
    string publishing[30];
    string genre[20];
};
const int Size = 10;
Book arrBook[Size];

string poisk;

void inicialBook(Book arrBook[]) {
    arrBook[0] = { {" Возвращение "},{"Ремарк "},{" Издательство Питер"},{" Детектив"} };
    arrBook[1] = { {" Долина ужаса "},{"Дойл "},{" Издательство Питер"},{" Детектив"} };
    arrBook[2] = { {" Яд бессмертия "},{"Робертс "},{" Издательство Питер"},{" Детектив"} };
    arrBook[3] = { {" Триумфальная арка "},{"Ремарк "},{" Издательство Питер"},{" Роман"} };
    arrBook[4] = { {" Иллюзия греха "},{"Маринина "},{" Издательство Питер"},{" Детектив"} };
    arrBook[5] = { {" Три товарища "},{"Ремарк "},{" Издательство Питер"},{" Роман"} };
    arrBook[6] = { {" Знак четыре "},{"Дойл "},{" Издательство Питер"},{" Детектив"} };
    arrBook[7] = { {" Ревизор "},{"Гоголь "},{" Издательство Питер"},{" Комедия"} };
    arrBook[8] = { {" Узник азкабана "},{"Роулинг "},{" Издательство Питер"},{" Фэнтези"} };
    arrBook[9] = { {" Пиковая дама "},{"Пушкин "},{" Издательство Питер"},{" Повесть"} };
}

void PrintBook(Book arrBook[]) {
    cout << "ID |" << " Название\t\t|" << " Автор\t\t|" << "  Издательство\t\t|" << "  Жанр\t\t|" << endl;
    cout << 1 << "  |" << *arrBook[0].name << "       | " << *arrBook[0].autor << "\t| " << *arrBook[0].publishing << "\t| " << *arrBook[0].genre << "\t| " << endl;
    cout << 2 << "  |" << *arrBook[1].name << "      | " << *arrBook[1].autor << "\t\t| " << *arrBook[1].publishing << "\t| " << *arrBook[1].genre << "\t| " << endl;
    cout << 3 << "  |" << *arrBook[2].name << "     | " << *arrBook[2].autor << "\t| " << *arrBook[2].publishing << "\t| " << *arrBook[2].genre << "\t| " << endl;
    cout << 4 << "  |" << *arrBook[3].name << " | " << *arrBook[3].autor << "\t| " << *arrBook[3].publishing << "\t| " << *arrBook[3].genre << "\t| " << endl;
    cout << 5 << "  |" << *arrBook[4].name << "     | " << *arrBook[4].autor << "\t| " << *arrBook[4].publishing << "\t| " << *arrBook[4].genre << "\t| " << endl;
    cout << 6 << "  |" << *arrBook[5].name << "      | " << *arrBook[5].autor << "\t| " << *arrBook[5].publishing << "\t| " << *arrBook[5].genre << "\t| " << endl;
    cout << 7 << "  |" << *arrBook[6].name << "       | " << *arrBook[6].autor << "\t\t| " << *arrBook[6].publishing << "\t| " << *arrBook[6].genre << "\t| " << endl;
    cout << 8 << "  |" << *arrBook[7].name << "           | " << *arrBook[7].autor << "\t| " << *arrBook[7].publishing << "\t| " << *arrBook[7].genre << "\t| " << endl;
    cout << 9 << "  |" << *arrBook[8].name << "    | " << *arrBook[8].autor << "\t| " << *arrBook[8].publishing << "\t| " << *arrBook[8].genre << "\t| " << endl;
    cout << 10 << " |" << *arrBook[9].name << "      | " << *arrBook[9].autor << "\t| " << *arrBook[9].publishing << "\t| " << *arrBook[9].genre << "\t| " << endl<<endl;
}

void Search(Book arrBook[]) {
    cout << "Введите фамилию автора\n";
    cin>>poisk;
}
void editBook(){
    int o;
    cout << "Введите номер книги который хотите редактировать\n";
    cin >> o;
    cout << "Введите название книги: "; cin >> *arrBook[o].name; 
    cout << "Введите атора книги: "; cin >> *arrBook[o].autor;
    cout << "Введите издательство книги: "; cin >> *arrBook[o].publishing;
    cout << "Введите жанр книги: "; cin >>*arrBook[o].genre;
   
}
void MenuBook() {
    int choise;
    do
    {
        cout << "Выберите что хотите сделать\n"
            << "1 - Редактировать книгу\n"
            << "2 - Печать всех книг\n"
            << "3 - Поиск книг по автору\n"
            << "4 - Поиск книг по названию\n"
            << "5 - Сортировать  по названию книги\n"
            << "6 - Сортировать  по названию автора\n"
            << "7 - Сортировать  по издательству\n"
            << "0 - Выход\n";
        cin >> choise;
        system("cls");
        if (choise == 1) {
            editBook();
        }
        if (choise == 2) {
            PrintBook(arrBook);
        }
        if (choise == 3) {
            Search(arrBook);

            
        }
        
    } while (choise!=0);
    
       
}
void sortBook(Book* arrBook) {
    
}

int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << setw(30) << char(' ') << "+++++Библиотека+++++\n";
    inicialBook(arrBook);
    MenuBook();
}
    
//строки не получается совсем  ад мерзкий !!!!!!!!!!!!!!

