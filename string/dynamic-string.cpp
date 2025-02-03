#include <iostream>
using namespace std;
int main()
{
  cout << "enter your name : " << endl;
  char *str = (char *)calloc(1, sizeof(char));
  char c;
  int len=0;
  while (c=getchar()!='\n')
  {

    *(str+len) = c;
    len++;
    realloc(str,  (len+1)* sizeof(char));
  }
  
  cout << *str;
}