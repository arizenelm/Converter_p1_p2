#include "Conver_p_10.h"

namespace PO1
{
    double Conver_p_10::convert(string P_num, int P, double weight)
    {
        double result = 0;
        for (int i = 0; i < P_num.size(); i++)
        {
            result += char_To_num(P_num[i]) * weight;
            weight /= P;
        }
        return result;
    }

    double Conver_p_10::dval(string P_num, int P)
    {
        int pos = P_num.find('.');
        double weight;
        if (pos == -1)
            weight = pow(P, P_num.size() - 1);
        else
        {
            P_num.erase(pos, 1);
            if (pos == 1)
            {
                if (P_num[0] == '0')
                {
                    P_num.erase(0, 1);
                    weight = 1 / P;
                }
                else
                    weight = 1;
            }
            else
                weight = pow(P, pos - 1);
        }
        return convert(P_num, P, weight);
    }

    int Conver_p_10::char_To_num(char ch)
    {
        if (ch >= '0' && ch <= '9')
            return ch - '0';
        if (ch >= 'A' && ch <= 'F')
            return ch - 'A' + 10;
        return 0;
    }
}