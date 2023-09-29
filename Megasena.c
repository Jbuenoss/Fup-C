#include <stdio.h>
int n1 = 1, n2 = 2, n3 = 3, n4 = 4, n5 = 5, n6 = 6;
int combinacoes(int n1, int n2, int n3, int n4, int n5, int n6){
	int i;
		for(;n6<61; n6++){
			printf("%d %d %d %d %d %d\n", n1, n2, n3, n4, n5, n6);
		}
		if(n5 != 60){
			n5++;
			n6 = n5+1;
			return combinacoes(n1, n2, n3, n4, n5, n6);
		}
		else if(n4 != 59){
			n4++;
			n5 = n4+1;
			n6 = n5+1;	
			return combinacoes(n1, n2, n3, n4, n5, n6);
		}
		else if(n3 != 58){
			n3++;
			n4 = ++n3;
			n5 = ++n4;
			n6 = ++n5;
			return combinacoes(n1, n2, n3, n4, n5, n6);
		}
		else if(n2 != 57){
			n2++;
			n3 = ++n2;
			n4 = ++n3;
			n5 = ++n4;
			n6 = ++n5;
			return combinacoes(n1, n2, n3, n4, n5, n6);
		}
		else if(n1 != 56){
			n1++;
			n2 = ++n1;
			n3 = ++n2;
			n4 = ++n3;
			n5 = ++n4;
			n6 = ++n5;
			return combinacoes(n1, n2, n3, n4, n5, n6);
		}
		else 
			return 0;
}
int main(){
	combinacoes(n1, n2, n3, n4, n5, n6);
	return 0;
}
