//*************************************
//* ????1.cpp *
//* ??????1200012844 *
//* ?????2012?11?28? *
//* ????????? *
//**************************************
int factor(int, int);
int main()
{
	int n, i, a;
	cin >> n;//n???
	for ( i = 0; i < n; i ++ )
	{
		cin >> a;//?????
		cout << factor(a, 2) << endl;//??????
	}
	return 0;
}

int factor(int a, int b)
{
	int c, i;
	int num = 1;//???????
	if (a == 1)
		return 0;
	c = sqrt(a);
	for ( i = b; i <= c; i++ )//?2??????????????????
		if ( a % i == 0 )//??????i?????
			num += factor(a / i, i);
	return num;
}