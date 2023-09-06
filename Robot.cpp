#include<bits/stdc++.h>
using namespace std;
int b[]={1,2,5};
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
