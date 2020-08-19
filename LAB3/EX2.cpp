#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string removePunct(string str)
{
  string searchString = "";
  for (size_t i = 0; i < str.length(); i++)
  {
    if (!ispunct(str[i]))
      searchString += str[i];
  }
  return searchString;
}

string lowerCase(string str)
{
  string lowerString = "";
  for (size_t i = 0; i < str.length(); i++)
  {
    lowerString += tolower(str[i]);
  }
  return lowerString;
}

int main(int argc, char const *argv[])
{
  string query = "";
  string word = "";
  ifstream file;

  while (true)
  {
    int times = 0;
    cout << "Enter the word to be found in Alice_story1.txt(! to quit): ";
    cin >> query;

    if (query == "!")
    {
      break;
    }

    cout << "The word " << query << " ";

    query = lowerCase(removePunct(query));

    file.open("LAB3/Alice_story1.txt");

    if (file.is_open())
    {
      while (getline(file, word, ' '))
      {
        if (lowerCase(removePunct(word)) == query)
        {
          times++;
        }
      }
      file.close();
    }
    else
      cout << "\nThe file does not exist!\n";

    cout << "has appeared " << times << " times in Alice_story1.txt\n\n";
  }

  return 0;
}
