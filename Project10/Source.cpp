#include <fstream>
#include <vector>
#include "ForeignPassport.h"

int main() {
	vector<ForeignPassport> ps;
	ifstream in_file("ForeignPassport.txt");
	if (!in_file) {
		cerr << "file open error" << endl;
	}
	else
	{
		while (!in_file.eof()) {
			ForeignPassport tmp;
			in_file >> tmp;
			ps.push_back(tmp);
		}


		in_file.close();
		in_file.open("Visas.txt");
		int index, count;
		while (!in_file.eof()) {
			in_file >> index >> count;
			for (int i = 0; i < count;i++) {
				Visa v;
				in_file >> v;
				ps[index - 1].addVisa(v);
			}
		}
		for (int i = 0; i < ps.size();i++) {
			cout << ps[i] << endl;
		}

		
	}
system("pause");
}
