#include<iostream>

using namespace std;
string findSub(string s, int point, int size);
int main()
{
  string s = "abracadabra";
  int point = 3;
  int size  = 5;

  cout<<findSub(s,point,size);
}
string findSub(string s, int point, int size)
{
  string output = "";
  for(int i = point; i < (point+size); ++i){
    output = output + s[i];
  }
    return output;
}
