#include <iostream>
#include <string>

void reverse(std::string &str)
  {
  for(int i = 0; i < (int)str.length()/2; i++)
    {
    char o = str[i];
    str[i] = str[str.length()-1-i];
    str[str.length()-1-i] = o;
  }
}

std::string spinWords(const std::string &str)
{
 std::string sentenceAdditional  = str;
 std::string result = "";
  while(sentenceAdditional.find(" ") != std::string::npos)
    {
    std::string sub = sentenceAdditional.substr(0,sentenceAdditional.find(" "));
    if(sub.length() >= 5)
      {
      reverse(sub);
      result= result + sub;
    }else{
      result+=sub;
    }
    result+=" ";
    sentenceAdditional = sentenceAdditional.substr(sentenceAdditional.find(" ")+1);
  }
  if(sentenceAdditional.length() >=5)
  reverse(sentenceAdditional);
  result+=sentenceAdditional;
  return result;
}// spinWords

int main()
{
  std::string a;
  std::cout<<spinWords("Nie rzucim ziemi skąd nasz ród! Nie damy pogrześć mowy Polski my naród, polski lud Królewski szczep Piastowy Nie damy, by nas zgnębił wróg! Tak nam dopomóż Bóg! Tak nam dopomóż Bóg! Nie będzie Niemiec pluł nam w twarz Ni dzieci nam germanił Orężny wstanie hufiec nasz Duch będzie nam hetmanił Pójdziem, gdy zabrzmi złoty róg! Tak nam dopomóż Bóg! Tak nam dopomóż Bóg! Do krwi ostatniej kropli z żył Bronić będziemy ducha Aż się rozpadnie w proch i w pył Krzyżacka zawierucha Twierdzą nam będzie każdy próg! Tak nam dopomóż Bóg! Tak nam dopomóż Bóg!");
}
