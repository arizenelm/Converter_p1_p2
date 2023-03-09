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
        // Состояние
        enum class State {Editing, Converted};
        State St;

        Control_();
        // Система счисления вводимого числа
        int pin;
        // Система счисления выводимого числа
        int pout;
        // Точность дробной части
        int accuracy;
        // Редактор вводимого числа
        Editor ed;
        // История
        History his;
        

        string DoCommand(int j);
    };
}

