int main()
{
	int y1,m1,d1,y2,m2,d2,d=0;
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	for(i=y1;i<y2;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			d+=366;
		else
			d+=365;
	}
	for(i=1;i<m1;i++)
	{
		d-=m[i];
	}
	if(((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))&&m1>2)
		d-=1;
	d-=d1;
	for(i=1;i<m2;i++)
	{
		d+=m[i];
	}
	if(((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))&&m2>2)
		d+=1;
	d+=d2;
	cout<<d;
	return 0;
}
	