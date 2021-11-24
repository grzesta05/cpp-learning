#include <iostream>
#include <string>
#include <tuple>

std::tuple<std::string, int>CreatePerson()
{
  return {"Bruh", 16};
}

int main()
{
  auto person = CreatePerson();
  std::string& name = std::get<0>(person); //calling a tuple

  std::string name1; //Tying tuple to variables
  int age;
  std::tie(name1, age) = CreatePerson();

  auto[aname, aage] = CreatePerson();
}
