#include "Editor.h"
#include "Conver_10_p.h"


namespace PO1
{
	string Editor::DoEdit(int j)
	{
		if (j == 0)
			return AddZero();
		else if (1 <= j && j <= 15)
			return AddDigit(j);
		else if (j == 16)
			return AddDelim();
		else if (j == 17)
			return Bs();
		else if (j == 18)
			return Clear();
	}

	Editor::Editor() = default;

	string Editor::AddDigit(int n)
	{
		number.push_back(Conver_10_p::int_to_Char(n));
		return number;
	}

	string Editor::AddZero()
	{
		number.append(zero);
		return number;
	}

	string Editor::AddDelim()
	{
		number.append(delim);
		return number;
	}

	string Editor::Bs()
	{
		number.pop_back();
		return number;
	}

	string Editor::Clear()
	{
		number.clear();
		return number;
	}

	string Editor::Number()
	{
		return number;
	}

	int Editor::Acc()
	{
		return 0;
	}
}