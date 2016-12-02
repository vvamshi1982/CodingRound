
#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	string InputStr,OutputStr;
	stack<char> s;
	int InputLen=0;
		
	cin >> InputStr;
	InputLen = InputStr.size();
    for (int i=0;i < InputLen;)
    {
       if (s.empty()) 
           {
  	   s.push(InputStr.at(i));
           i++;
       }
  	 else if (InputStr.at(i) == s.top())
  	 {
  	    s.pop();
  	    i++;
  	 }
  	 else
  	  {
  	   s.push(InputStr.at(i));
  	   i++;
  	   }
       
    }
 
    if (s.empty())
     cout << "Empty String";
    else
    { //Below can still be optimized
     string reverse;
	 while(!s.empty())
	 {
	 	reverse.push_back(s.top());
	 	s.pop();
	 }
	 for (int i=reverse.size()-1 ;i >=0;i--)
     {
	    cout << reverse.at(i);
	 }
	 
    }
  
    return 0;
}
