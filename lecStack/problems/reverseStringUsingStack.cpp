#include <iostream>
#include <stack>
using namespace std;
int main()
{
   string word = "Word";

   stack <char> s;

   for (int  i = 0; i < word.length(); i++)
   {
      char ch = word[i];
      s.push(ch);
   }

   string ans = "";
   while(!s.empty()){
      char ch = s.top();
      ans.push_back(ch);
      s.pop();
   }
   cout << ans << endl;
   
}