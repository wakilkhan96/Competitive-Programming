#include <cstdio>
#include <cctype>
#include <sstream>
#include <string>
#include <set>
using namespace std;

int main() {
  set<string> dic;
  string all;
  char temp[9999];
  while (gets(temp))
    {
    all += temp;
    if (all[all.length() - 1] == '-') {
      all.erase(all.begin() + all.length() - 1);
    } else {
      all += " ";
    }
  }
  for (int i = 0; all[i]; i++) {
    if (isalpha(all[i])) {
      all[i] = tolower(all[i]);
    } else if (all[i] != '-') {
      all[i] = ' ';
    }
  }
  istringstream ss(all);
  string s;
  while (ss >> s) {
    dic.insert(s);
  }
  for (set<string>::iterator it = dic.begin(); it != dic.end(); it++) {
    puts((*it).c_str());
  }
  return 0;
}






//
//string remove_back_hyphen( string str )
//{
//    string temp_str = str;
//    str = "";
//
//    int len = temp_str.length();
//    for(int x=0; x<len-1; x++) str = str + temp_str[x];
//
//    return str;
//}

