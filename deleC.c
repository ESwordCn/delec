char* deleC ( char *pStr, char A )
{
    int n,leng;
    char temp[10];
    leng=strlen(pStr);
    for(n=0; pStr[n]!='\0'; n++)
    {
        if(pStr[n]==A)
        {
            memcpy(temp,pStr,n);
            pStr+=n+1;
            memcpy(temp+n,pStr,leng-n);
            memcpy(pStr,temp,leng);
        }
    }
    return pStr;
}
