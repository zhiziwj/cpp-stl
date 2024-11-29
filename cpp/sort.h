#ifndef SORT_H
#define SORT_H
template<typename T>
void sort(T *st,T *en,bool (*cmp)(T a,T b)){
	for(T *i=st;i<=en;i++){
		for(T *j=i+1;j<=en;j++){
			if(cmp(*i,*j)){
				T temp=*i;
				*i=*j;
				*j=temp;
			}
		}
	}
	return;
}
#endif //SORT_H