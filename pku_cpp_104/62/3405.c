/*
 *????filter.cpp
 *??:???
 *?????2012-11-10
 *??????????
 */



int main()
{
    long i,len;
    char s[100001]; // s?????
    cin.getline(s,sizeof(s)); // ??
    len=strlen(s); // ??
    for (i=0;i<len;i++)
        if (!((s[i]==' ') && (i==0 || i==len-1 || s[i-1]==' ')))
        // ???????????????????
            cout << s[i];
    return 0;
}