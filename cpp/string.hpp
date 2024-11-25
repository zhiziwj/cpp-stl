#ifndef MSTRING_H
#define MSTRING_H
#include <cstring>
class mstring{
	private:
	char* str;
	long long int len;//the string long
	public:
	mstring(){
		str=nullptr;
		len=0;
	}
	mstring(const char *s){
		len=strlen(str);
		str=new char[len+1];//give data space
	}
	void clear(){
		delete[] str;
		len=0;
	}
	long long int size()const{
		return len;
	}
	const char* c_str()const{
		return str;
	}
	mstring(const mstring& s){//copy
		len=s.size();
		str=new char(len+1);
		strcpy(str,s.str);
	}
	mstring operator =(const mstring& s){
		if(this!=&s){//the s is not me
			delete[] str;//delete the space
			len=s.len;
			str=new char[len+1];
			strcpy(str,s.str);
		}
		return *this;
	}
	mstring operator +(const mstring& s){
		mstring temp;
		temp.clear();
		temp.len=len+s.len;
		strcpy(temp.str,str);
		strcat(temp.str,s.str);
		return temp;
	}
	bool operator==(const mstring& s){
		return (strcmp(str,s.str)==0);
	}
	char at(int in){
		if(in<0||in>=len){
			return '\1';
		}
		return str[in];
	}
};
#endif //MSTRING_H
