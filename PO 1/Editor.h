#pragma once
#include <string>
using namespace std;

namespace PO1
{
    class Editor
    {
        //���� ��� �������� �������������� �����.
        string number = "";

        //����������� ����� � ������� ������.
        const string delim = ".";

        //����.
        const string zero = "0";


    public:

        Editor();

        string Number();

        //�������� �����.
        string AddDigit(int n);

        //�������� ������������� ����������.
        int Acc();

        //�������� ����.
        string AddZero();

        //�������� �����������.
        string AddDelim();

        //������� ������ ������.
        string Bs();

        //�������� ������������� �����.
        string Clear();

        //��������� ������� ��������������.
        string DoEdit(int j);

    };
}

