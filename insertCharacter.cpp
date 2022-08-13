#include <cctype>
#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

std::string tokenize(const std::string& s) {
   if (!s.size()) {
     return "";
   }
   std::stringstream ss;
   ss << s[0];
    
    for (int i = 1; i < s.size(); i++) {
     if (i%16==0) ss << '|';
     ss << s[i];
   }
   return ss.str();
}

int main()
{
    const string sentence = "DoesThisAnswerYourQuestion?ImGladItDid.IfNotITriedMybest:D";
    std::string new_sentence;

    new_sentence = tokenize(sentence);
    cout<< new_sentence << endl;
    
    return 0;
}