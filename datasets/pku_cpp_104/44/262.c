int reverse(int a);//??reverse??
int main()//?????
{
	int n[6],num[6],i;
	for(i=0;i<6;i++)cin>>n[i];//??????6???
	for(i=0;i<6;i++)num[i]=reverse(n[i]);//????????num??
	for(i=0;i<5;i++)cout<<num[i]<<endl;//??num????????????
	cout<<num[5];//???????
	return 0;
}//?????
int reverse(int a)//reverse??
{
	int x[100],i=0,sum=0,num=0;
	if(a>0)//?a??????
	{do//?a???????
	{
		x[i]=a%10;
		a=a/10;
		i++;num++;
	}while(a>0);
	for(i=0;i<num;i++)sum=sum*10+x[i];//???????
	}
	else if(a<0)//?a??????
	{
		a=a*(-1);//?a????????
		do//????????????
	{
		x[i]=a%10;
		a=a/10;
		i++;num++;
	}while(a>0);
	for(i=0;i<num;i++)sum=sum*10+x[i];//???????
	sum=sum*(-1);//???????????
	}
	else if(a==0&&a==-0)sum=0;//?a?0?-0????0
	return sum;//????sum
}//reverse????