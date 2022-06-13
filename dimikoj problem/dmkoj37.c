#include<stdio.h>
#include<string.h>
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    int T,i,n,j;
        char temp[100];
        scanf("%d\n",&n);
        char name[n][100];
        for(i=0;i<n;i++){
            scanf(" %[^\n]",name[i]);
        }
        for (int j=0; j<n-1; j++)
	{
		for (int i=j+1; i<n; i++)
		{
			if (strcmp(name[j], name[i]) > 0)
			{
				strcpy(temp, name[j]);
				strcpy(name[j], name[i]);
				strcpy(name[i], temp);
			}
		}
	}
        printf("\n");
        for(i=0;i<n;i++){
            printf("%s\n",name[i]);
        }
        printf("\n");
return 0;
}
