#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std ;
int isPalindrome(string);
int isMirrored (string);

int main (){

	string str;
	string np_nm=" -- is not a palindrome.";
	string p_nm=" -- is a regular palindrome.";
	string np_m=" -- is a mirrored string.";
	string p_m=" -- is a mirrored palindrome.";
	
	

	while(cin>>str){
		cout<<str;
		if(!isPalindrome(str)&&!isMirrored(str)){
			cout<<np_nm<<endl;
		}else if (isPalindrome(str)&&!isMirrored(str)){
			cout<<p_nm<<endl;
		}else if( !isPalindrome(str)&&isMirrored(str)){
			cout<<np_m<<endl;
		}else if(isPalindrome(str)&&isMirrored(str)){
			cout<<p_m<<endl;
		}
		cout<<""<<endl;
	}

	return 0;
}

int isPalindrome(string str){
	for(int i=0;i<str.length();++i){
		if(str[i]!=str[str.length()-i-1])
			return 0;
	}
	return 1;
}
int isMirrored(string str){
	map<char,char> mir;
	
	string mir_string=str;
	mir['A']='A';
	mir['E']='3';
	mir['H']='H';
	mir['I']='I';
	mir['J']='L';
	mir['L']='J';

	mir['M']='M';
	mir['O']='O';
	mir['S']='2';
	mir['T']='T';
	mir['U']='U';
	mir['V']='V';
	mir['W']='W';
	mir['X']='X';

	mir['Y']='Y';
	mir['Z']='5';
	mir['1']='1';
	mir['2']='S';
	mir['3']='E';
	mir['5']='Z';
	mir['8']='8';

	for(int i=0;i<mir_string.length();++i){
		if(mir.find(mir_string[i])!=mir.end()){
			mir_string[i]=mir[mir_string[i]];
		}else{
			return 0;
		}
	}
	reverse(mir_string.begin(),mir_string.end());
	return mir_string==str;
}