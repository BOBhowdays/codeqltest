#include <stdio.h>
#include <string.h>

int main(){
	char post[0x18]  = {0,};
	char dest[0x41]  = {0,};

	int i;

	for(i = 0; i < sizeof(dest); i++) dest[i] = 0x41;

	dest[i-1] = 0;

	int ret = snprintf(post,-1,"%s",dest);
	printf("result : 0x%x \n",ret);

	return 0;
}
