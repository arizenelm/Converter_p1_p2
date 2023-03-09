#pragma once
#include <list>
#include <string>
using namespace std;


namespace PO1
{

    public class History
    {
    public:
        // Структура, описывающая запись в истории
        struct Record
        {
            int p1;
            int p2;
            string number1;
            string number2;
            Record(int p1, int p2, string n1, string n2);
            // Преобразовать запись в удобночитаемый вид
            string ToString();
        };
        // Добавить запись в историю
        void AddRecord(int p1, int p2, string n1, string n2);
        // Очистить историю
        void Clear();
        // Посчитать количество записей в истории
        int Count();
        // Вывести список записей
        string GetHistory();
        History();
    private:
        list<Record> L;
    };
}


