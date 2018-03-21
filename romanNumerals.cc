#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

string intToRoman(int);

int main(int argc, char const *argv[])
{
	cout << intToRoman(stoi(argv[1])) << "\n";
	return 0;
}

vector<int> romanNums = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
vector<string> romanSyms = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

string intToRoman(int in){
	string roman = "";
	int i = 0;
	while(in > 0){
		if(in >= romanNums[i]){
			in -= romanNums[i];
			roman += romanSyms[i];
		}else{
			i++;
		}
	}
	return roman;
}