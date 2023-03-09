#pragma once
#include <string>
using namespace std;

namespace PO1
{
    class Editor
    {
        //Поле для хранения редактируемого числа.
        string number = "";

        //Разделитель целой и дробной частей.
        const string delim = ".";

        //Ноль.
        const string zero = "0";


    public:

        Editor();

        string Number();

        //Добавить цифру.
        string AddDigit(int n);

        //Точность представления результата.
        int Acc();

        //Добавить ноль.
        string AddZero();

        //Добавить разделитель.
        string AddDelim();

        //Удалить символ справа.
        string Bs();

        //Очистить редактируемое число.
        string Clear();

        //Выполнить команду редактирования.
        string DoEdit(int j);

    };
}

