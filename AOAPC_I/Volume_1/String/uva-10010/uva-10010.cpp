#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std; 

string str_upper(string)
void Print(string[],string[],int,int);
int main (){
	int testcase,temp;
	cin>>testcase;
	cin>>temp;
	while(testcase--){
		int str_count;
		
		cin>>str_count;
		string str[str_count];
		for(int i=0;i<str_count;++i){cin>>str[i];str[i]=str_upper(str[i]);}
		int find_count;
		cin>>find_count;
		string find[find_count];
		for(int i=0;i<find_count;++i){cin>>find[i];find[i]=str_upper(find[i]);}
		Print(str,find,str_count,find_count);

	}
	return 0;
}

string str_upper(string str){
	for(int i=0;i<str.length();++i){
		str[i]=toupper(str[i]);
	}
	return str;
}
void Print(string str[],string find[],int str_count,int find_count){
	
	for(int i=0;i<find_count;++i){
		for(int j=0;j<str_count;++j){
			
		}
	}
}