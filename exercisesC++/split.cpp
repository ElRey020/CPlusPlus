#include <string>
#include <iostream>

int main()
{
  std::string  s = "1 2 3 4 5";
  std::string delimiter = " ";

  size_t pos = 0;
  std::string token;
  while ((pos = s.find(delimiter)) != std::string::npos) {
    token = s.substr(0, pos);
    std::cout << token << std::endl;
    s.erase(0, pos + delimiter.length());
  }
  std::cout << s << std::endl;
}
