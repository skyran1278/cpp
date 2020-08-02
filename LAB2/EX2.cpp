// EX2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int spaces(string str)
{
	int count = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isspace(str[i]))
			count++;
	}
	return count;
}

int punctuation(string str)
{
	int count = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (ispunct(str[i]))
			count++;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	string filename;
	string line;
	ifstream file;
	vector<vector<int>> data;

	int totalPunctuation = 0;
	int totalSpaces = 0;

	cout << "Please input the file name.\n";
	cout << "input here: ";
	cin >> filename;

	file.open(filename, ios::in);

	if (file.is_open())
	{
		cout << "\nFile was opened correctly.\n";

		while (getline(file, line))
		{
			vector<int> lineResult;

			int linePunctuation = punctuation(line);
			int lineSpaces = spaces(line);

			lineResult.push_back(linePunctuation);
			lineResult.push_back(lineSpaces);

			totalPunctuation += linePunctuation;
			totalSpaces += lineSpaces;

			data.push_back(lineResult);
		}
		file.close();
	}

	else
		cout << "\nThe file does not exist!\n";

	cout << "\nTotal punctuation: " << totalPunctuation << "\n";
	cout << "Total spaces: " << totalSpaces << "\n";

	for (size_t i = 0; i < data.size(); i++)
	{
		cout << "\nLine " << i + 1 << "\n";
		cout << "\t"
				 << "Punctuation: " << data[i][0] << "\n";
		cout << "\t"
				 << "Spaces: " << data[i][1] << "\n";
	}

	return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示:
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
