#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
    char s[20], s1[20];
    int i, j, k, l, n;
    
    clrscr();
    
    cout << "enter a string: ";
    cin.getline(s, 20);
    
    cout << "enter a 2nd string: ";
    cin.getline(s1, 20);
    
    n = strlen(s1);
    l = strlen(s);
    k = 0;
    
    while(l > 1)
    {
        for(i = 0; i < n - 1; i++)
        {
            k++;
            if(k == l)
            {
                k = 0;
            }
        }
        
        for(j = k; j < l - 1; j++)
        {
            s[j] = s[j + 1];
        }
        
        l--;
        s[l] = '\0';
        
        if(k == l)
        {
            k = 0;  
        }
      
    } 
    cout << "last character: " << s;
    getch();
}
