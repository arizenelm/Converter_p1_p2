#pragma once
using namespace std;
#include <string>
#include <stdint.h>
#include <msclr\marshal_cppstd.h>

namespace PO1 
{

    class Conver_p_10
	{
        
    public:

        static double dval(string P_num, int P);   

        //���������� ���������� �������� ����� � �����-���� ������ ������� ���������.
        static int char_To_num(char ch);

    private:
        static double convert(string P_num, int P, double weight);
	};
}

