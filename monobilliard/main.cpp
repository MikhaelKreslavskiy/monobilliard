#include<iostream>

using namespace std;



int main()
{
	long long n;
	cin >> n;
	long long* arr = new long long[n];
	for (long long i = 0; i < n; i++)arr[i] = 0;
	long long f = n;
	long long max;
	long long enter;
	cin >> enter;
	///if (enter > max)
	max = enter;
	for (long long i = 0; i < max-1; i++)
	{
		arr[i] = i + 1;
	}

	
	///arr[max] = 0;
	
	/////for (int i = 0; i < max-1; i++)
	///{
	///	cout << arr[i]<<" ";
	///}
	
	long long lt=max-2;
	
	while (f-1> 0)
	{
		///long long enter;
		cin >> enter;
		
		if (enter > max)
		{
			///lt = max-1;
			for (long long i = max+1; i < enter; i++)
			{
				lt++;
				arr[lt] = i;
				
				
			}
			max = enter;
			///arr[lt] = 0;
			///lt--;
			
		///	cout << "this " << lt << endl;
		///	cout << "maax " << max << endl;
			
		///	for (long long i = 0; i < lt+1; i++)
		///{
			///cout << arr[i] << " ";
			///}
			
			
		}
		
		else
		{
			///long long i = max-1;
			///while (arr[i] == 0)
			///i--;
			/// 
			/*
			if (i == -1)
			{
				cout << "Not a proof" << endl;
				return 0;
			}
			*/
		   /// lt--;
			///cout << "this " << arr[lt] <<" "<<lt<< endl;
			if (arr[lt] == enter)
			{
				///lt--;
				arr[lt] = 0;
				lt--;
				
			///break;
			
			
			///	lt--;
				///max--;
				
			
		
			///for (long long i = 0; i < lt+1; i++)
			///{
			///	cout << arr[i] << " ";
			///}
			
			}
			
		}
		
		f--;
	}
	while (n  > 0)
	{
		if (arr[n - 1] != 0) break;
		n--;
	}
	if (n != 0) cout << "Cheater" << endl;
	else
		cout << "Not a proof" << endl;
	
		
}