#ifndef MIOSTREAM_H
#define MIOSTREAM_H
#include <stdio.h>
const char endl='\n';
struct mcout{//cout
	public:
    mcout& operator << (int num){
        printf("%d",num);
        return *this;//continue to out
    };
    mcout& operator << (double num){
    	printf("%lf",num);
    	return *this;
	};
	mcout& operator << (const char* str){
		printf("%s",str);
		return *this;
	};
	mcout& operator << (bool flag){
		if(flag){
			printf("1");
		}
		else{
			printf("0");
		}
		return *this;
	};
	mcout& operator << (char ch){
		printf("%c",ch);
		return *this;
	};
};
class mcin{
	public:
	mcin& operator >> (int &num){
		scanf("%d",&num);
		return *this;//continue to in
	}
	mcin& operator >> (double &num){
		scanf("%lf",&num);
		return *this;
	}
	mcin& operator >> (bool &flag){
		int num;
		scanf("%d",&num);
		flag=num;
		return *this;
	}
	mcin& operator >> (char &ch){
		scanf(" %c",&ch);
		return *this;
	}
};
#endif // MIOSTREAM_H
