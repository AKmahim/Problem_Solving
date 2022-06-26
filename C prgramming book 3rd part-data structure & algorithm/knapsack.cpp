#include<stdio.h>
#include<algorithm>
using namespace std;

typedef struct
{
    double profit;
    double weight;
}info;

double knapsack(int n,info ara[],double w)
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if( (ara[i].profit/ara[i].weight) < (ara[j].profit/ara[j].weight)){
                swap(ara[i],ara[j]);
            }
        }
    }

    double total_profit = 0;
    double total_weight = 0 ;
    for(int i=0;i<n;i++){
        if(total_weight + ara[i].weight <= w){
            total_weight = total_weight + ara[i].weight;
            total_profit = total_profit + ara[i].profit;
        }
        else{
            double remain = w - total_weight;
            total_profit = total_profit + (remain * (ara[i].profit/ara[i].weight));
            break;
        }
    }

    return total_profit;
}


int main()
{

    int n;
    info ara[100];
    double w;

     printf("How many elements in array: ");
     scanf("%d",&n);

     printf("Enter bag capacity: ");
     scanf("%lf",&w);

     printf("Enter the object profit & weight: \n");
     for ( int i=0;i<n-1;i++){
        scanf("%lf %lf ",&ara[i].profit,&ara[i].weight);
     }

     double result = knapsack(n,ara,w);

     printf("Result = %lf\n",result);

     return 0;
}
















/*#include <bits/stdc++.h>

using namespace std;

// Structure for an item which stores
// weight & corresponding value of Item
struct Item {
    int value, weight;

    // Constructor
    Item(int value, int weight)
        : value(value), weight(weight)
    {
    }
};

// Comparison function to sort Item
// according to val/weight ratio
bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

// Main greedy function to solve problem
double fractionalKnapsack(struct Item arr[],
                          int N, int size)
{
    // Sort Item on basis of ratio
    sort(arr, arr + size, cmp);

    // Current weight in knapsack
    int curWeight = 0;

    // Result (value in Knapsack)
    double finalvalue = 0.0;

    // Looping through all Items
    for (int i = 0; i < size; i++) {

        // If adding Item won't overflow,
        // add it completely
        if (curWeight + arr[i].weight <= N) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }

        // If we can't add current Item,
        // add fractional part of it
        else {
            int remain = N - curWeight;
            finalvalue += arr[i].value
                          * ((double)remain
                             / arr[i].weight);

            break;
        }
    }

    // Returning final value
    return finalvalue;
}

// Driver Code
int main()
{
    // Weight of knapsack
    int N = 60;

    // Given weights and values as a pairs
    Item arr[] = { { 100, 20 },
                   { 50, 2 },
                   { 205, 10 },
                   { 40, 20 } };

    int size = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    cout << "Maximum profit earned = "
         << fractionalKnapsack(arr, N, size);
    return 0;
}
*/
