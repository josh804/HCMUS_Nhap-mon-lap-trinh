#include <iostream>
#include <string>
using namespace std;

char maxOccurence(string str) {
	int occurence[256];
	
	int max = 0;
	int index = 0;
	int charid;

	memset(occurence, 0, sizeof(occurence));

	for (int i = 0, j = str.length(); i < j; i++) {
		charid = str[i];
		occurence[charid] += 1;
		
		if (occurence[charid] > max) {
			max = occurence[charid];
			index = charid;
		}
	}
	return index;
}
int main() {
	string str;
	cout << "Nhap chuoi: ";
	getline(cin, str);

	cout << "Max occurence: " << maxOccurence(str) << endl;
	system("pause");
	return 0;
}