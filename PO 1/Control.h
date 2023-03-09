#pragma once
#include "History.h"
#include <string>
#include "Conver_p_10.h"
#include "Conver_10_p.h"
#include "Editor.h"
using namespace std;

namespace PO1 {


    public class Control_
    {
        

    public:
        // ���������
        enum class State {Editing, Converted};
        State St;

        Control_();
        // ������� ��������� ��������� �����
        int pin;
        // ������� ��������� ���������� �����
        int pout;
        // �������� ������� �����
        int accuracy;
        // �������� ��������� �����
        Editor ed;
        // �������
        History his;
        

        string DoCommand(int j);
    };
}

