#include<bits/stdc++.h>
using namespace std;


// for print all of vector data
void print(vector <int> data)
{
    cout << "Total elements : " << data.size() << "\n";
    for(int item:data){
        cout << item << " ";

    }
    cout << "\n\n";

}

 int main()
 {
     // create a vector
     // syntax --->
     // vector <data_type> variable_name (elements size);

     // vector <int> data ;

     // vector <int> data(5); like int vect[5];

     //vector <int> vect ({1,2,3,4,5}); // int data[] = {1,2,3,4,5}

     //vector <int> data = {1,2,3,4,5,6};

     //vector <int> data2 = data;
     //add elements in vector
     vector <int> data;
     data.push_back(5);
     data.push_back(2);
     print(data);













     return 0;

 }
