//**********************************************************************************************
//* ??????????                                                                       *
//* ????????????????????????????????????????????? *
//*           ???????????????????????????????i?????????*
//*           ???????????xi, yi????????????????t?? xi <= t < yi? *
//*           ???????????????????? 0 <= xi < yi<1000??????????? *
//*           ??????????????????????????????                     *
//* ?    ?????                                                                           *
//* ?    ??2013.10.30                                                                       *
//**********************************************************************************************
int main()
{
	int t[1000]={0} , x[1000] , y[1000] , num , i  , c , max ;
	num = 0 ;
	do
	{
		cin >> x[num] ;
		num++ ;
	}
	while ( ( c = cin.get() ) == ',' ) ;                       //??xi????
	num = 0 ;
	do
	{
		cin >> y[num] ;
		num++ ;                                                //?????
	}
	while ( ( c = cin.get() ) == ',' ) ;                       //??yi????
	max = 0 ;

	for ( i = 0 ; i <= num - 1 ; i ++ )
	{
		for ( int j = x[i] ; j < y[i] ; j++ )
		{
			t[j]++ ;                                           //??????
			if ( t[j] > max )
				max = t[j] ;
		}
	}
	cout << num << " " << max ;
	return 0 ;
}