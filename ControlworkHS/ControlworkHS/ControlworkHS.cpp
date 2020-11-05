#include <iostream>
#include "windows.h"
#include <locale.h>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	int consolsize = 0, filesize = 0;
	string text;
	HANDLE streamkey;
	DWORD mac;
	char consolebuffer[1026] = { 0 };
	fstream file1("Proverka.txt");
	streamkey = CreateFile(L"CONIN$", GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, 0, 0);
	ReadFile(streamkey, consolebuffer, sizeof(consolebuffer), &mac, 0);
	text = consolebuffer;
	consolsize = text.length() - 2;
	cout << "Объем введённого текста: ";
	if (consolsize < 1024)
		cout << consolsize << " байт" << endl;
	else
		cout << 1024 << " байт" << endl;
	file1.seekg(0, ios::end);
	filesize = file1.tellg();
	cout << "Объем файла: " << filesize << " байт" << endl;
	file1.close();

	system("pause");
}