//********************************
//*????7???????   **
//*?????? 1300012934 **
//*???2013.10.14  **
//********************************


int main()
{  
	int n , sum ; //??n????
	sum = 0;
	cin >> n ;
	for (int i = 1 ; i <= n ; i++)
	{
		if ( i % 7 != 0 ) //????7
		{
			if (i % 10 != 7)  //?????7
			{ 
				int x = i / 10; //?????
				if ( x != 7 ) //?????7
					sum = sum + i * i; //i???????i???
			}
		}
	}

	cout << sum << endl;
	return 0;
}
