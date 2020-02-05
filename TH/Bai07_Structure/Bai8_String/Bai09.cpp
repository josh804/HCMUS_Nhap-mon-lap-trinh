#include <iostream>
#include <string>
using namespace std;

string getWord(string str, int fpos) {
	int l = str.length();
	int i = fpos;
	int start;

	while (i < l && str[i] == ' ') i++;
	start = i;
	while (i < l && str[i] != ' ') i++;
	
	return start == l ? "" : str.substr(start, i - start);
}
void solve(string str) {
	int i = 0;
	int length = str.length();
	int count;
	string word;
	string maxWord;
	string newWord;
	int max = 0;
	int j;

	while (i < length) {
		word = getWord(str, i);
		//cout << word;

		count = 1;
		i += word.length() + 1;
		
		j = i;
		while (j < length) {
			newWord = getWord(str, j);
			if (newWord.compare(word) == 0) {
				count++;
			}
			j += newWord.length() + 1;
		}
		if (count > max) {
			max = count;
			maxWord = word;
		}
	}
	cout << "\nTu xuat hien nhieu nhat la: " << maxWord << endl;
}
int main() {
	//string str = "xin chao moi xin nguoi";
	string str;
	cout << "Nhap chuoi:";
	getline(cin, str);

	solve(str);
	system("pause");
	return 0;
}