#include<iostream> 
#include<sstream> 
#include<vector>
#include<string> 
#include <iterator>

using namespace std; 

vector<string> split(const string &str, char delim){
	vector<string> tokens; 
	stringstream ss(str); 
	string token; 
	while(getline(ss, token, delim)) {
		if(!token.empty()){
			tokens.push_back(token); 
		}
	}
	return tokens; 
}

char find_character(const vector<vector<string>> &text, int s, int w, int c){
	if(s > 0 && s <= text.size()){
		if(w > 0 && w <= text[s-1].size()){
			if(c > 0 && c <= text[s-1][w-1].length()){
				return text[s-1][w-1][c-1];
			}
		}
	}
	return ' '; 
}

int main(){
	string message, temp, code; 
	vector<vector<string>> text; 
	
	getline(cin, message); 
	
	vector<string> sentences = split(message, '.');
	
	for(string &sentence : sentences){
		text.push_back(split(sentence, ' ')); 
	}
	
	while(cin >> code){
		
		vector<string> parts = split(code, '.'); 
		
		if(parts.size() == 3){
			int s = stoi(parts[0]); 
			int w = stoi(parts[1]);
			int c = stoi(parts[2]); 
			
			cout << find_character(text, s, w, c); 
		}
	}
	return 0; 
}
