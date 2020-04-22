#include<iostream>

using namespace std;
string findSub(string s, int point, int size);
int findProtein(string dna, string protein, int size);


int main()
{
  string protein = "AATG";
  string dna = "ATGCAGAAAGCTACGATCAATGATCGATC AATGGAT";
  int point = 3;
  int size = 5;
  cout<<findProtein(dna,protein,size);

}


string findSub(string s, int point, int size)
{
  string output = "";
  for(int i = point; i < (point+size); ++i){
    output = output + s[i];
  }
    return output;
}
int findProtein(string dna, string protein, int size)
{

  string test = "";
  for(int i = 0; i < dna.length() - protein.length(); ++i)
  {
    test = findSub(dna,i,protein.length());
    if(test == protein)
    {
      return i;
    }
  }
  return -1;
}
