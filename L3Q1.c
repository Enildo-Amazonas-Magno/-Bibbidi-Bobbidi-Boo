#include <stdio.h>
#include <math.h>
#define tam 40
int main() {
    int v1[tam]={0}, i, n, j=0, m=0;
    float v2[tam]={0}, k;
    scanf("%d", &n);
    scanf("%f", &k);
    for(i=0;i<n;i++){scanf("%d", &v1[i]);}  
    for(i=0;i<n;i++){scanf("%f", &v2[i]);}    
	for(i=0;i<n;i++){if(v2[i]==k){ j=i; m=1;}}
	if(m!=1)printf("Nenhuma das jovens e a moca do baile.");
	else printf("Cinderela mora na casa %d!", v1[j]);

	return 0;
}