//**********************************************
//**???????????**********************
//**?????? 1000012741*********************
//**???2010?10?29?************************
//**********************************************
int main()  //???
{
	int a[100000], n, k, num = 0, q, p;  //????a,????????n,???????k,??num,??????q?p
    cin >> n;  //??????????n
    for (int i = 0; i < n; i++)  //??????
		cin >> a[i];  //??????
        cin >> k;  //?????????k
		for (p = 0, q = 0; p < n; p++)  //??????
		{
			if (a[p] != k)  //??????????????
				a[q++] = a[p];  //??????????
			else  //?????????????
				num++;  //???1
        }
		cout << a[0];  //??????????
		for (int t = 1; t < (n-num); t++)  //??????               
			cout << " "<< a[t];  //??????????              

		return 0;  //?????
}
//**********************************************