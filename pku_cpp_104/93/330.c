int main()
{
int num,i,j=0,chushu;//num:????????i??????j?????num?3,5,7????,????0?chushu?????3,5,7
cin>>num;
for(i=1;i<4;i++)//????????3,5,7
{
	chushu=2*i+1;
	if(num%chushu==0)//????num???????
	{	
		if(j>0)
			cout<<" ";//??j>0??????????????????????????????????
		cout<<chushu;
		j++;//??????????
	}
}
if(j==0)//????j=0??num???3,5,7??????�n�
cout<<"n";
cout<<endl;
return 0;
}