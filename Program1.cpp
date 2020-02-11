//Fiza Naveed
//Program 1
//Feb 6, 2020

#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int player1 = 0;
	bool computer1 = true;
	int dice1 = 0;
	bool YesNo = true;
	bool again = true;
	bool play1 = true;
	int pot1 = 0;
	char choice1 = ' ';

	while (again == true) {
		while (play1) {

			while (YesNo == true) {
				cout << "Score      You : " << player1 << "   AI : 0 " << endl;
				cout << endl;
				cout << "Players Turn" << endl;
				dice1 = int(1 + rand() % 6);

				
				if (dice1 == 1) {
					pot1 = 0;
				cout << "AI turn" << endl;
					cout << endl;
				
					dice1 = int(1 + rand() % 6);

					cout << "Die Roll : " << dice1;
					pot1 += dice1;
					cout << "    Pot : " << pot1 << endl;

					if (player1 >= 50) {
						play1 = false;
						cout << "Winner: User";
					}
					else if (computer1 >= 50) {
						play1 = false;
						cout << "Winner: AI";
					}
					if (dice1 == 1) {
						cout << "Die Roll : " << dice1;
						pot1 = 0;
						cout << "    Pot : " << pot1 << endl;
						cout << "BUST!" << endl;
						YesNo = true;
					}
					else {
						pot1 += dice1;
					}
				}
				else {
					pot1 += dice1;
					cout << "Die Roll : " << dice1 << "    Pot : " << pot1 << "     (R)oll again or (H)old? ";
					cin >> choice1;

					if (choice1 == 'H' || choice1 == 'h') {
						YesNo == false;
						player1 += pot1;

						cout << "Score      You : " << player1 << "   AI : 0 " << endl;
						cout << endl;

						pot1 = 0;

						cout << "AI turn" << endl;
						while (dice1 != 1 && computer1 == true) {
				
							dice1 = int(1 + rand() % 6);

							cout << "Die Roll : " << dice1;
							pot1 += dice1;
							cout << " Pot : " << pot1 << endl;

							if (dice1 == 1) {
								pot1 = 0;
								cout << "BUST!" << endl;
								YesNo = true;
							}
							else {
								pot1 += dice1;
								if (pot1 >= 50) {
									play1 = false;
								}
							}
						}
					}
					else if (choice1 == 'R' || choice1 == 'r') {
						//YesNo == true;
						//cout << "Die Roll : " << dice1 << "    Pot : " << pot1 << "     (R)oll again or (H)old? ";
						//cin >> choice1;
						if (player1 >= 50) {
							play1 = false;
							cout << "Winner: User";
						}
						else if (computer1 >= 50) {
							play1 = false;
							cout << "Winner: AI";
						}
					}
					else
					{
						cout << "You must enter R or H";
						cout << "    (R)oll again or (H)old? ";
						cin >> choice1;
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}