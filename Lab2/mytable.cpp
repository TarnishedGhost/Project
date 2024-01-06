#include "framework.h"
#include "Mytable.h"
#include <fstream>
using namespace std;

void MyTable::Add(HWND hWndDlg, string str) {
	ofstream f;
	string path = "./table.txt";
	f.open(path, ofstream::app);
	if (!f.is_open()) {
		throw new exception("Can't open the file");
	}
	else {
		f << str << "\n";
	}
	f.close();
}
