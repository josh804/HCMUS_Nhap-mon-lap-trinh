#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void solve(char *text) {
	struct word {
		int start;
		int end;
	};
	int length = strlen(text);
	int i = 0;
	int max = 0;
	word maxData{ 0, 0 };
	int count, demtu = 0;

	while (i < length) {
		while (text[i] == ' ' && i < length) i++;
		count = 0;
		bool ok = false;
		int old = i;
		while (i < length && text[i] != ' ') {
			if (ok == false) {
				demtu++;
				ok = true;
			}
			count++;
			i++;
		}
		if (count > max) {
			max = count;
			maxData = {old, old + count};
		}
	}
	
	char substring[20] = "";
	for (int i = maxData.start; i <= maxData.end; i++) {
		substring[i - maxData.start] = text[i];
	}

	printf("Co %d tu.\nTu co do dai lon nhat la: %s\n", demtu, substring);
}
int main() {
	char text[150];
	printf("Nhap chuoi: ");
	gets_s(text);
	
	solve(text);
	
	system("pause");
	return 0;
}