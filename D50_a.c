//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.//

#include <stdio.h>
int main() 
{
    char d[3],m[3],y[5];
    printf("date (dd/mm/yyyy)");
    scanf("%2s/%2s/%4s",d,m,y);
    if (m[0]=='0' && m[1]=='1')
    {
        printf("%s-Jan-%s",d,y);
    }
    else if (m[0]=='0'&& m[1]=='2') 
    {
        printf("%s-Feb-%s",d,y);
    }
    else if (m[0]=='0' && m[1]=='3') 
    {
        printf("%s-Mar-%s",d,y);
    }
    else if (m[0]=='0' && m[1]=='4') 
    {
        printf("%s-Apr-%s",d,y);
    }
    else if (m[0]=='0' && m[1]=='5') 
    {
        printf("%s-May-%s",d,y);
    }
    else if (m[0]=='0' && m[1]=='6') 
    {
        printf("%s-Jun-%s",d,y);
    }
    else if (m[0]=='0' && m[1]=='7') 
    {
        printf("%s-Jul-%s",d,y);
    }
    else if (m[0]=='0' && m[1]=='8') 
    {
        printf("%s-Aug-%s",d,y);
    }
    else if (m[0]=='0' && m[1]=='9') 
    {
        printf("%s-Sep-%s",d,y);
    }
    else if (m[0]=='1' && m[1]=='0') 
    {
        printf("%s-Oct-%s",d,y);
    }
    else if (m[0]=='1' && m[1]=='1') 
    {
        printf("%s-Nov-%s",d,y);
    }
    else if (m[0]=='1' && m[1]=='2') 
    {
        printf("%s-Dec-%s",d,y);
    }
}