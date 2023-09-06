#include<iostream>
using namespace std;
int sb=0,dem =0, m[1000];
void in() {
	cout<<"\n Cach di thu "<<++dem<<":";
	for(int i=1; i<=sb; i++)
		cout<<m[i]<<" ";
}
void phantich(int II) {
	if(II==0) {
		int d=0;
		for	(int i=0; i<=sb; i++) // co hai buoc co do dai la 1 va 2
			if(m[i]==1)
				d++;
		if(d<=2)
			in();
	} else
		for(int i=1; i<=2; i++)
			if(i<=II) {
				sb++;
				m[sb]=i;//them 1 buoc di co do dai i
				phantich(II-i);// di doan duong con lai
				sb--;//lui lai 1 buoc de di buoc co do dai khac
			}
}
void phantich_2(int II, int tt) {// bien tt luu so buoc di 1 met da di
	if(II==0) in();
	else {
		if(tt<2) {
			//neu chua di qua 2 buoc 1 m thi co the co the chon buoc 1 m hoac 2 m
			for(int i=1; i<=2; i++) // co hai buoc co do dai la 1 va 2
				if(i<=II) {
					sb++;
					m[sb]=i;//them buoc di co do dai i
					if(i==1) phantich_2(II-i,tt+1);// new di buoc 1 m thi tang bien len tt len 1
					else phantich_2(II-i, tt);
					sb--; //lui lai 1 buoc de di buoc co do dai khac
				}
		} else // da di xong 2 buoc 1 m thi chi co the di buoc 2m
			for(int i=2; i<=2; i++)
				if(i<=II) {
					sb++;
					m[sb]=i;
					phantich_2(II-i,tt);
					sb--;
				}
	}
}
int main() {
	int d=54;
//	phantich(d);
	phantich_2(d,0);
}
