// Lab_8_1-2.cpp
// Обухов Віктор
// Лабораторна робота № 8.1
// Пошук та заміна символів у літерному рядку
// Варіант 7

#include <iostream>
#include <string>

using namespace std;


string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('w', pos)) != -1)
	{
		if ((s[pos] == 'w' && s[pos + 1] == 'h' && s[pos + 2] == 'i' && s[pos + 3] == 'l' && s[pos + 4] == 'e'))
			s.replace(pos, 5, "***");
			pos++;

	}

	return s;
}

int main()
{
	string s;
	cout << "Enter string:" << endl;
	getline(cin, s);

	Change(s);



	cout << "Modified string:" << s << endl;

	return 0;
}