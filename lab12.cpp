#include<iostream>

using namespace std;

int main()

{

    int n,element;

    n=10;

    int arr[n];

    cout << "Enter sales numbers:" << endl;

    for(int i = 0;i < n;i++)

    {

        cin >> arr[i];

 

    }

    int max = arr[0];

    int max_store = 0;

    for(int i = 0;i < n;i++)

    {

 

        if(arr[i] > max)

        {

            max_store = i;

            max = arr[i];

        }

 

    }

     cout << "Highest sales: " << max << endl;

 

     int min = arr[0];

     int min_store = 0;

    for(int i = 0;i < n;i++)

    {

           if(arr[i] < min)

        {

            min_store = i;

             min = arr[i];

        }

    }

     cout << "Lowest sales: " << min << endl;

     float sum = 0;

    for(int i = 0;i < n;i++)

    {

          sum += arr[i];

   }

    cout << "Average sales: " << sum/10;

}

