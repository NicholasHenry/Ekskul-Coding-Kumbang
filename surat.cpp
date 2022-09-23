#include <iostream>
using namespace std;

int main ()
{
	int a,b;
	
	cout << "ready?\n\n- if you are 1\n- if you are not 2\n\n your response:";
	cin >> a;
	while (a!=1){
		cout << "ready?\n";
		cout << " your response:";
		a = 0 ;
		cin >> a;
	} 
	cout << "-------------------------------------------------------------------------------------------------\n";
	cout << "|					-Love Letter-                                           |\n";
	cout << "|                                                                                               |\n";
	cout << "|16 September 2022                                                                              |\n";
	cout << "|to: Someone                                                                                    |\n";
	cout << "|Dear Someone                                                                                   |\n";
	cout << "|                                                                                               |\n";
	cout << "|Well hello, just to tell you... I Like You                                                     |\n";
	cout << "|I just want to let you know I like you                                                         |\n";
	cout << "|I don't want to date you or be your boyfriend                                                  |\n";
	cout << "|I just wanna let you know                                                                      |\n";
	cout << "|This must be awkward for you                                                                   |\n";
	cout << "|sorry                                                                                          |\n";
	cout << "|                                                                                               |\n";
	cout <<	"|                                                                    from: your admirer         |\n";
	cout << "-------------------------------------------------------------------------------------------------\n\n";
	
	cout<< "reveal the truth?" << endl;
	cin >> b;
	
	if (b<2){
			cout << "-------------------------------------------------------------------------------------------------\n";
			cout << "|					-Love Letter-                                           |\n";
			cout << "|                                                                                               |\n";
			cout << "|16 September 2022                                                                              |\n";
			cout << "|to: Someone                                                                                    |\n";
			cout << "|Dear Someone                                                                                   |\n";
			cout << "|                                                                                               |\n";
			cout << "|Well hello, just to tell you... I Like You                                                     |\n";
			cout << "|I just want to let you know I like you                                                         |\n";
			cout << "|I don't want to date you or be your boyfriend (obvious lie)-> want to be your boyfriend        |\n";
			cout << "|I just wanna let you know                                                                      |\n";
			cout << "|This must be awkward for you                                                                   |\n";
			cout << "|sorry (i mean it)                                                                              |\n";
			cout << "|                                                                                               |\n";
			cout <<	"|                                                                    from: your admirer         |\n";
			cout << "-------------------------------------------------------------------------------------------------\n\n";
		
	}
	
	
	return 0;
}
