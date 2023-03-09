#pragma once
#include <list>
#include <string>
using namespace std;


namespace PO1
{

    public class History
    {
    public:
        // ���������, ����������� ������ � �������
        struct Record
        {
            int p1;
            int p2;
            string number1;
            string number2;
            Record(int p1, int p2, string n1, string n2);
            // ������������� ������ � �������������� ���
            string ToString();
        };
        // �������� ������ � �������
        void AddRecord(int p1, int p2, string n1, string n2);
        // �������� �������
        void Clear();
        // ��������� ���������� ������� � �������
        int Count();
        // ������� ������ �������
        string GetHistory();
        History();
    private:
        list<Record> L;
    };
}


