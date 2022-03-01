#include <stdio.h>
#include <string.h>

void in(char s[]) {
	printf("Enter the string:");
	scanf("%s", s);
	
}

void out(char s[]) {
	printf("string:%s\n", s);
}

void add(char s[]) {
	int i, j;
	char s2[100];
	printf("Characters added to the string:");
	scanf("%s", s2);
	j = 0;
	i = strlen(s);
	while (j < strlen(s2)) {
         s[i] = s2[j];
         i++;
         j++;
 	}
}

void del(char s[]) {
	int i, j, k=0, a;
	char s2[100], s3[1000];
	printf("Characters you want to remove:");
    scanf("%s", s2);
    for (i = 0; i < strlen(s); i++) {
    	a = 0;
    	for (j = 0; j < strlen(s2); j++) {
           if (s[i] == s2[j]) {
           	a++;
           }
    	}
        if (a == 0) {
        	s3[k] = s[i];
        	k++;
        }
    }
    strcpy(s, s3);
}

int main() {
	int z = 0;
	char s1[1000]="", s2[1000] = "";
	printf("**************Menu*************\n");
	printf("*       1.Enter strings       *\n");
	printf("*       2.Output strings      *\n");
	printf("*       3.Add to strings      *\n");
	printf("*       4.Delete characters   *\n");
	printf("*******************************\n");
    
    while (z == 0) { 
		printf("Enter menu (1, 2, 3, 4):");
		scanf("%d", &z);
		if (z == 1) {
			printf("S1-");
			in(s1);
			printf("S2-");
			in(s2);
		    z = 0;
		}
	    if (z == 2) {
		    printf("S1-");
		    out(s1);
		    printf("S2-");
		    out(s2);
		    z = 0;
			
		}
		if (z == 3) {
		    printf("S1:\n");
		    add(s1);
		    printf("S2:\n");
		    add(s2);
		    z = 0;
		}
		if (z == 4) {
		    printf("S1:\n");
		    del(s1);
		    printf("S2:\n");
		    del(s2);
			z = 0;
		}
		if (z > 4) {
			return 0;
		}
	}
}
