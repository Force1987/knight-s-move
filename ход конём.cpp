#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
	short horse, move[8][8]{ 60,11,56,7,54,3,42,1,57,8,59,62,31,64,53,4,12,61,10,55,6,41,2,43,9,58,13,32,63,30,5,52,34,17,36,23,40,27,44,29,37,14,33,20,47,22,51,26,18,35,16,39,24,49,28,45,15,38,19,48,21,46,25,50 };
	char output[8][8]{},x,y;
	do
	{
		cout << "     " << char(149) << char(142) << char(132) << char(32) << char(138) << char(142) << char(141) << char(133) << char(140) << endl << endl;
		for (short j = 0; j < 8; j++) {
			cout << 8 - j << " ";
			for (short k = 0; k < 8; k++) {
				if (j % 2 == 0 && k % 2 == 0) output[j][k] = char(178);
				else if (j % 2 == 0 && k % 2 != 0) output[j][k] = char(176);
				else if (j % 2 != 0 && k % 2 == 0) output[j][k] = char(176);
				else if (j % 2 != 0 && k % 2 != 0) output[j][k] = char(178);
				cout << output[j][k] << output[j][k];
			}
			cout << endl;
		}
		cout << "   a b c d e f g h\n";
		cout << char(130) << char(162) << char(165) << char(164) << char(168) << char(226) << char(165) << char(32) << char(170) << char(174) << char(174) << char(224) << char(164) << char(168) << char(173) << char(160) << char(226) << char(235) << char(32) << char(170) << char(171) << char(165) << char(226) << char(170) << char(168) << ": ";
		cin >> x >> y;
		if (x == 'a' || x == 'A')x = 0;
		else if (x == 'b' || x == 'B')x = 1;
		else if (x == 'c' || x == 'C' || x == char(225) || x == char(145))x = 2;
		else if (x == 'd' || x == 'D')x = 3;
		else if (x == 'e' || x == 'E')x = 4;
		else if (x == 'f' || x == 'F')x = 5;
		else if (x == 'g' || x == 'G')x = 6;
		else if (x == 'h' || x == 'H')x = 7;
		if (x < 0 || x>7 || y - 48 < 1 || y - 48 > 8)
		{
			cout << char(141) << char(165) << char(170) << char(174) << char(224) << char(224) << char(165) << char(170) << char(226) << char(173) << char(235) << char(169) << char(32) << char(162) << char(162) << char(174) << char(164) << ".";
			Sleep(2000);
			system("cls");
		}
	} while (x < 0 || x>7 || y - 48 < 1 || y - 48 > 8);
	horse = move[8 - (y-48)][x];
	system("cls");
		for (short i = 1; i <= 64; i++) {
			cout <<  "     " << char(149) << char(142) << char(132) << char(32) << char(138) << char(142) << char(141) << char(133) << char(140)<< endl << endl;
			for (short j = 0; j < 8; j++) {
				cout << 8 - j << " ";
				for (short k = 0; k < 8; k++) {
					if (move[j][k] == horse) {
						cout << char(20) << char(20);
						output[j][k] = char(251);
					}
					else cout << output[j][k] << output[j][k];
				}
				cout<<endl;
			}
			cout << "   a b c d e f g h";
			Sleep(300);
			if (i!=64)system("cls");
			if (horse == 64) horse = 1;else horse++;
	}
}