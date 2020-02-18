#include<iostream>
using namespace std;

int main(){
	int m[10][10], **ptr, *pt;
	
	pt=&m[0][0];
	*ptr=&pt;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Introduce datos ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(ptr+i)+j); cout<<"\n";
			cout<<((ptr+i)+j)<<endl;
		}
		
	}
	
	return 0;
}
