int main()
{
 int n=0,i=0,j=0,count=0,a[20000];   //?????????????????20001?????
 cin>>n;                              //??n
 for(i=0;i<=n-1;i++)                 //????????
	 cin>>a[i];
 cout<<a[0];                        //?????????
 for(i=1;i<=n-1;i++)                //??????????????
  {for(j=i-1;j>=0;j--)
      {if(a[j]==a[i])
count++;}                          //??????????count??0???
 if(count==0)                      //??count??0?????????????
  cout<<' '<<a[i];
 else count=0;}                    //??count??0??count????????????????????????
 return 0;
}