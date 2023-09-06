#include<bits/stdc++.h>
using namespace std;
int b[]={1,2,5};
int m[1000],sb=0,sc=0;
int n=3;
void inkq(){
	cout<<"\n Cach thu "<<++sc<<" : ";
	for(int i=1;i<=sb;i++)
		cout<<m[i]<<" ";
}
void phantich(int II){
	if(II==0) inkq();
	else
		for(int i=0; i<n; i++)
			if(II>=b[i]){
				sb++;m[sb]=b[i];
				phantich(II-b[i]);
				sb--;
			}
}

int main(){
	int d=5; phantich(d);
}
