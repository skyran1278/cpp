#include <iostream>
#include <string>

// This function receives text and shift and
// returns the encrypted text
std::string encrypt(std::string text, int s)
{
  std::string result = "";

  // traverse text
  for (int i = 0; i < text.length(); i++)
  {
    // apply transformation to each character
    // Encrypt Uppercase letters
    if (isupper(text[i]))
      result += char(int(text[i] + s - 65) % 26 + 65);

    // Encrypt Lowercase letters
    else if (islower(text[i]))
      result += char(int(text[i] + s - 97) % 26 + 97);

    else
      result += text[i];
  }

  // Return the resulting string
  return result;
}

int main(int argc, char const *argv[])
{
  std::string text = "";
  int s = 0;

  std::cout << "Please input a message:\n";

  std::getline(std::cin, text);

  std::cout << "The 'n' position further along the alphabet:\n";
  std::cin >> s;

  std::cout << "The encoded message:\n";
  std::cout << encrypt(text, s);

  return 0;
}
