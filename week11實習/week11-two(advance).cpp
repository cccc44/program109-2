#include <iostream>
using namespace std;
int max( int a,int b,int c,int d ){
	int s[4]={a,b,c,d};
	int M=a;
	for(int i=0;i<4;i++){
		if( s[i]>M ) M=s[i];
	}
	return M;
}
int min( int a,int b,int c,int d ){
	int s[4]={a,b,c,d};
	int m=a;
	for(int i=0;i<4;i++){
		if( s[i]<m ) m=s[i];
	}
	return m;
}


int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
