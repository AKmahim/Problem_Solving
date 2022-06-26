#include<stdio.h>
#include<algorithm>

using namespace std;

#define INF 1000000

void print_table(int n,int ara[105][105])
{
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            if(ara[i][j] == INF){
                printf("I\t");
            }
            else{
                printf("%d\t",ara[i][j]);
            }

            printf("\n");
        }
        printf("\n");
    }

}

int main()
{
    int cost[105][105];
    int node,edge;

    for(int i=0;i<105;i++){
        for(int j=0;j<=105;j++){
            cost[i][j] = INF;
        }
    }
    printf("Enter the amount of node and edges: ");
    scanf("%d %d",&node,&edge);
    printf("Enter edges value: ");
    for(int i=0;i<=edge;i++){
        int u,v,c;
        scanf("%d %d %d",&u,&v,&c);
        cost[u][v] = c;
        cost[v][u] = c;
    }

    printf("Initial Data:\n");
    print_table(node,cost);

    for(int k=0;k<node;k++){
        for(int i = 0; i<node;i++){
            for(int j=1;j < node ; j++){
                cost[i][j] = min(cost[i][j],cost[i][k] + cost[k][j]);

            }
        }
    }
    printf("Final data: \n");
    print_table(node,cost);
}
