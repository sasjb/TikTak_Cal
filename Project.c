#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ll long long int
ll MA=1e18;
const PI=3.1416;
char s[10]="0123456789";
int SORT(int n,int a[])
{
   int i,j,temp;
   for(i=0;i<n;i++)
    {
        for(j=0;j<(n-1)-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return a;
}
void FIBONACCI(int n)
{
    int a[100],i;
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("The fibonacci series is: ");
    for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    printf("\n");
}
int FACTORIAL(int n)
{
    if(n<0) printf("Factorial of negative number doesn't exist!.\n");
    else
    {

        if(n==0)
            return 1;
        else
            return n*FACTORIAL(n-1);
    }
}
void MAX()
{
    int i,j,temp,n;
    printf("How many you can want to input: ");
    scanf("%d",&n);
    int a[n+10];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    SORT(n,a);
    printf("The maximum value is: ");
    printf("%d\n",a[n-1]);

}
void MIN()
{
    int i,j,temp,n;
    printf("How many you can want to input: ");
    scanf("%d",&n);
    int a[n+10];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    SORT(n,a);
    printf("The minimum value is: ");
    printf("%d\n",a[0]);
}
void AVERAGE()
{
    int i,sum=0,n;
    printf("How many nunber you want to calculate average: ");
    scanf("%d",&n);
    int a[n+10];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    double avg=(double)sum/(double)n;
    printf("The average is: ",n);
    printf("%lf\n",avg);
}
void MEAN()
{
    int i,n,res;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a[n+10];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2) res=a[(n/2)];
    else res=a[n/2-1];
    printf("The mean is: %d\n",res);
}
void CALCULATION()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    double ans=n;
    char ch;
    while(1)
    {
        scanf("%c",&ch);
        if(ans>MA)
        {
            printf("math error!\n");
            break;
        }
        if(ch=='=')
        {
            printf(" %.4lf\n",ans); break;
        }
        else
        {
            int a;
            if(ch=='+')
            {
                scanf("%d",&a);
                ans+=(double)a;
            }
            else if(ch=='-')
            {
                scanf("%d",&a);
                ans-=(double)a;
            }
            else if(ch=='*')
            {
                scanf("%d",&a);
                ans*=(double)a;
            }
            else if(ch=='/')
            {
                scanf("%d",&a);
                if(a==0) printf("Math eror!\n");
                else
                {
                    ans/=(double)a;
                }
            }
        }
    }
}
void TRIANGLE()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a<=0||b<=0||c<=0||(a+b<c||a+c<b||b+c<a))
        printf("The side of a triangle doesn't exist!\n");
    else
    {
        double area,s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of triangle is: %.4lf\n",area);
    }
}
void RECTANGLE()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(a<=0||b<=0) printf("The side of rectangle doesn't exist!\n");
    else
    {
        double area=a*b;
        printf("The area of the rectangle is: %.4lf\n",area);
    }
}
void CIRCLE()
{
    double r; scanf("%lf",&r);
    if(r<0) printf("The radius of a circle doesn't exist!\n");
    else
    {
        double area=PI*r*r;
        printf("The area of the circle is: %.4lf\n",area);
    }
}
void MULTITABLE()
{
    printf("Enter the number: ");
    int n,i,sum=1; scanf("%d",&n);
    printf("The multiplication table is: \n");
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = ",i,n);
        sum=i*n;
        printf("%d\n",sum);
    }
}
void HexToBi()
{
    printf("Enter a Hexadecimal number: ");
    char hex[100]; scanf("%s",&hex);
    long int i = 0;
    printf("Equivalent Binary Value: ");
    while (hex[i])
    {

        switch (hex[i]) {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
        case 'a':
            printf("1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;
        default:
            printf( "\nInvalid hexadecimal digit %c\n",hex[i]);
        }
        i++;
    }
    printf("\n");
}
void OctToBi()
{
    printf("Enter a Octal number: ");
    char oct[100]; scanf("%s",&oct);
    ll i = 0;
    printf("Equivalent Binary Value: ");
    while (oct[i])
    {

        switch (oct[i]) {
        case '0':
            printf("000");
            break;
        case '1':
            printf("001");
            break;
        case '2':
            printf("010");
            break;
        case '3':
            printf("011");
            break;
        case '4':
            printf("100");
            break;
        case '5':
            printf("101");
            break;
        case '6':
            printf("110");
            break;
        case '7':
            printf("111");
            break;
        default:
            printf( "\nInvalid Octal digit %c\n",oct[i]);

        }
        i++;
    }
    printf("\n");
}
void BiToHex()
{
    ll n, hex= 0, i = 1, rem;
    printf("Enter the binary number: ");
    scanf("%lld", &n);
    while (n != 0)
    {
        rem = n% 10;
        hex = hex+ rem * i;
        i = i * 2;
        n = n/ 10;
    }
    printf("Equivalent hexadecimal value: %lX\n", hex);

}
void BiToDec()
{
    ll n;
    printf("Enter a Binary Value: ");
    scanf("%lld", &n);
    ll dec = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    printf("Equivalent Decimal value: %lld\n",dec);


}
void BiToOct()
{
    ll n,O=0,i=1,rem;
    printf("Enter a Binary Value: ");
    scanf("%lld", &n);
     while (n != 0)
    {
        rem = n% 10;
        O = O+ rem * i;
        i = i * 2;
        n = n / 10;
    }
    printf("Equivalent Octal value: %o\n", O);

}
void DecToBin()
{
    ll bin = 0;
    int rem, i = 1;
    printf("Enter a Decimal Value: ");
    ll n; scanf("%lld",&n);

    while (n!=0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    printf("Equivalent Binary Value: %lld\n",bin);

}
void DecToHex()
{
   printf("Enter a Decimal Value: ");
   ll n; scanf("%lld",&n);
   printf("Equivalent hexadecimal value: %lX\n", n);

}
void DecToOct()
{
   printf("Enter a Decimal Value: ");
   ll n; scanf("%lld",&n);
   printf("Equivalent Octal value: %o\n", n);

}
void HexToDec()
{
   int dec=0, rem, i=0, len=0;
    char hex[20];
    printf("Enter any Hexadecimal Number: ");
    scanf("%s", hex);
    while(hex[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hex[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit");
            getch();
            return 0;
        }
        dec = dec + (rem*pow(16, i));
        len--;
        i++;
    }
    printf("\nEquivalent Decimal Value = %d\n", dec);
}
void HexToOct()
{
   int dec=0, rem, i=0, len=0;
    char hex[20];
    printf("Enter any Hexadecimal Number: ");
    scanf("%s", hex);
    while(hex[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hex[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit\n");
            return;
        }
        dec = dec + (rem*pow(16, i));
        len--;
        i++;
    }
     printf("Equivalent Octal value: %o\n", dec);
}
void OctToDec()
{
   printf("Enter a Octal Value: ");
   ll dec= 0, rem = 0,oct;
   scanf("%lld",&oct);

    while(oct!= 0)
    {
        dec= dec+ (oct%10) * pow(8,rem);
        rem++;
        oct = oct/ 10;
    }
   printf("Equivalent Decimal value: %lld\n", dec);

}
void OctToHex()
{
   printf("Enter a Octal Value: ");
   ll dec= 0, rem = 0,oct;
   scanf("%lld",&oct);

    while(oct!= 0)
    {
        dec= dec+ (oct%10) * pow(8,rem);
        rem++;
        oct = oct/ 10;
    }
   printf("Equivalent Hexadecimal value: %x\n", dec);

}
void NumberConversion()
{
    con:
        getchar();
    printf("Press b for convert Binary number from any number.\n");
    printf("Press d for convert Decimal number from any number.\n");
    printf("Press h for convert Hexadecimal from any number.\n");
    printf("Press o for convert Octal from any number.\n");
    printf("Press B for Previous interface.\n");
    char ch; scanf("%c",&ch);
    ll n;
    if(ch=='b')
    {
         getchar();
         printf("Press D for convert to Decimal.\n");
         printf("Press H for convert to Hexadecimal.\n");
         printf("Press O for convert to Octal.\n");
         char ss; scanf("%c",&ss);
         if(ss=='D') BiToDec();
         else if(ss=='H') BiToHex();
         else if(ss=='O') BiToOct();
         goto con;
    }
    else if(ch=='d')
    {
         getchar();
         printf("Press C for convert to Binary.\n");
         printf("Press H for convert to Hexadecimal.\n");
         printf("Press O for convert to Octal.\n");
         char ss; scanf("%c",&ss);
         if(ss=='C') DecToBin();
         else if(ss=='H') DecToHex();
         else if(ss=='O') DecToOct();
         goto con;
    }
    else if(ch=='h')
    {
         getchar();
         printf("Press D for convert to Decimal.\n");
         printf("Press C for convert to Binary.\n");
         printf("Press O for convert to Octal.\n");
         char ss; scanf("%c",&ss);
         if(ss=='D') HexToDec();
         else if(ss=='C') HexToBi();
         else if(ss=='O') HexToOct();
         goto con;
    }
    else if(ch=='o')
    {
         getchar();
         printf("Press D for convert to Decimal.\n");
         printf("Press H for convert to Hexadecimal.\n");
         printf("Press C for convert to Binary.\n");
         char ss; scanf("%c",&ss);
         if(ss=='D') OctToDec();
         else if(ss=='H') OctToHex();
         else if(ss=='C') OctToBi();
         goto con;
    }

}
void Board()
{
    printf("Press a for Calculation (addition, substraction, division, multiplication)\n");
    printf("Press b for Maximum.\n");
    printf("Press c for Minimum.\n");
    printf("Press d for Factorial of a number.\n");
    printf("Press e for Fibonacci series.\n");
    printf("Press f for Calculae area of surface.\n");
    printf("Press g for Average.\n");
    printf("Press h for Multiplication Table.\n");
    printf("Press i for Sort an array.\n");
    printf("Press j for Number conversion.\n");
    printf("Press k for Mean.\n");
    printf("Press B for Previous interface.\n");

}
void calculator()
{
    int n;
    char ch,sa,aa;
    sojib:
    getchar();
    Board();
    scanf("%c",&aa);
    if(aa=='a')
    {
        CALCULATION();
         { goto sojib;}

    }
    else if(aa=='b')
    {
        MAX();
         {goto sojib;}
    }
    else if(aa=='c')
    {
        MIN();
       {goto sojib;}
    }
    else if(aa=='d')
    {
        printf("Enter the decimal number: ");
        scanf("%d",&n);
        ll result=FACTORIAL(n);
        printf("The factorial of %d is: %lld\n",n,result);
        {goto sojib;}
    }
    else if(aa=='e')
    {
        printf("Enter the decimal number: ");
        scanf("%d",&n);
        FIBONACCI(n);

         {goto sojib;}
    }
    else if(aa=='f')
    {
        Area:
        printf("Press T for Calculate a Triangle area.\n");
        printf("Press R for Calculate a Rectangle area.\n");
        printf("Press C for Calculate a Circle area.\n");
        printf("Press B for Previous interface.\n");
        getchar();
        char ss; scanf("%c",&ss);
        if(ss=='T')
        {
            TRIANGLE(); { goto Area;}

        }
        else if(ss=='R')
        {
            RECTANGLE(); { goto Area;}
        }
        else if(ss=='C')
        {
            CIRCLE();
            { goto Area;}
        }
        else if(ss=='B') {goto sojib;}
        else printf("Enter Correct Key Again!\n");
    }
    else if(aa=='g')
    {
        AVERAGE();
         { goto sojib;}
    }
    else if(aa=='h')
    {
        MULTITABLE();
       {goto sojib;}
    }
    else if(aa=='i')
    {
        printf("How many number you want to sort : ");
        scanf("%d",&n);
        int a[n+10],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        SORT(n,a);
        printf("The sorting array is: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
         {goto sojib;}
    }
    else if(aa=='j')
    {
        NumberConversion();
       {goto sojib;}
    }
    else if(aa=='k')
    {
        MEAN(); goto sojib;
    }
    else if(aa=='B')
    {

    }
    else printf("Enter Correct Key Again!\n");
}
int check()
{
    if(s[1]==s[2]&&s[2]==s[3]) return 1;
    else if(s[4]==s[5]&&s[5]==s[6]) return 1;
    else if(s[7]==s[8]&&s[8]==s[9]) return 1;
    else if(s[1]==s[4]&&s[4]==s[7]) return 1;
    else if(s[2]==s[5]&&s[5]==s[8]) return 1;
    else if(s[3]==s[6]&&s[6]==s[9]) return 1;
    else if(s[1]==s[5]&&s[5]==s[9]) return 1;
    else if(s[3]==s[5]&&s[5]==s[7]) return 1;
    else if(s[1]!='1'&&s[2]!='2'&&s[3]!='3'&&s[4]!='4'&&s[5]!='5'&&s[6]!='6'&&s[7]!='7'&&s[8]!='8'&&s[9]!=9)
        return 0;
    else return -1;
}
void Gameboard()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
    printf(" _________________\n");
    printf("|     |     |     |\n");
    int i;
    for(i=1;i<10;i+=3)
    {
       printf("|  %c  |  %c  |  %c  |\n",s[i],s[i+1],s[i+2]);
       if(i==7) break;
       printf("|_____|_____|_____|\n");
       printf("|     |     |     |\n");
    }
    printf("|_____|_____|_____|\n\n");
}
void gamezone()
{
    int player,ch,d,i;
    char m;
    player=1;
    do
    {
        Gameboard();
        if(player%2) player=1;
        else player=2;
        printf("Player %d, enter a number: ",player);
        scanf("%d",&ch);
        if(player==1) m='X';
        else m='O';
        int z=s[ch]-'0';
        if(ch==z) s[ch]=m;
        else
        {
            printf("Invalid move ");
            player--;
            getch();
        }
        d=check();
        player++;

    }while(d==-1);

    Gameboard();
    if(d==1) printf("Player %d win\n",--player);
    else printf("Game draw!\n");
    getchar();
}
void Signup()
{
       getchar();
       FILE * fp, * outfile;
        fp = fopen("fputs_test.txt", "a");

        char username[200];
        char password[200];
        char password2[200];
        USERNAME:
        printf("Enter email address\n");
        gets(username);
        char line[100];
        outfile = fopen("fputs_test.txt", "r");
        int count=1;
         while (fgets(line, sizeof line, outfile) != NULL)
        {
          if(count%2==1)
          {

          int blb = 0,ii;
          for( ii = 0;ii < strlen(username);ii++)
          {
              if(line[ii]!=username[ii])
              {
                  blb = 1;
                  break;
              }
          }
          if(blb==0)
          {
              printf("This email is exists please try with another email\n");
              goto USERNAME;
          }
          }
          count++;

        }
         fclose(outfile);


        PASSWORD:
        printf("Enter your password\n");
        gets(password);
        int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,i;
        if(strlen(password)<6)
        {
            printf("Password length must be >= 6\n");
            flag1=1;
        }
        int up=0,lw=0,dig=0,spcl=0;
        for(i=0; i<strlen(password); i++)
        {
            if(isupper(password[i]))
            {
               up++;

            }
            if(islower(password[i]))
            {
                lw++;
            }
            if(isdigit(password[i]))
            {
                dig++;
            }
            if(password[i]=='.'||password[i]==','||password[i]=='!'||password[i]=='@'||password[i]=='$'||password[i]=='#'||password[i]=='*')
            {
                spcl++;
            }
        }
        if(up==0)
        {
            printf("Password must contain at least one uppercase character\n");
            flag2=1;
        }
        if(lw==0)
        {
            printf("Password must contain at least one lowercase character\n");
            flag3=1;
        }
        if(dig==0)
        {
            printf("Password must contain at least one  digit character\n");
            flag4=1;
        }
        if(spcl==0)
        {
            printf("Password must contain at least one  special character\n");
            flag5=1;
        }

        if(flag1==1||flag2==1||flag3==1||flag4==1||flag5==1)
        {
            goto PASSWORD;
        }


        printf("Re Enter your password\n");
        gets(password2);
        if (strcmp(password,password2) == 0)
        {

            fputs(username, fp);
            fputs("\n", fp);
            fputs(password, fp);
            fputs("\n", fp);
        }
        else
        {
            printf("Those password are not same \n");
            printf("Enter two same password\n");
            goto PASSWORD;
        }


        fclose(fp);

        printf("You successfully register your account\n");
    salam:
        printf("Press c for Calculator.\n");
        printf("Press g for Gamezone.\n");
        char ch;
        scanf("%c",&ch);

    if(ch=='c')
    {
        calculator();
        {getchar(); goto salam;}

    }
    else if(ch=='g')
    {
        gamezone();
        char st; scanf("%c",&st);
        if(st=='B')
        {getchar(); goto salam;}
    }
    else
    {
        printf("Enter Correct Key Again!\n");
        goto salam;
    }
}
void login()
{
     getchar();
        FILE * fp, * outfile;

        char username[200];
        char password[200];
        char password2[200];
        USERNAME:
        printf("Enter email address\n");
        gets(username);
        char line[100];
        outfile = fopen("fputs_test.txt", "r");
        int count=1;
        int sojib=0;
         while (fgets(line, sizeof line, outfile) != NULL)
        {
            int cnt=0;
          if(count%2==1)
          {

          int blb = 0,ii;
          int d = strlen(username);
          for( ii = 0;ii <d;ii++)
          {
              if(line[ii]==username[ii])
              {
                  cnt++;
              }
          }

          if(cnt==d)
          {
              sojib=1;
              break;
          }
          }
          count++;
        }

        if(sojib==0)
        {
            goto USERNAME;

        }
         fclose(outfile);


   PASSWORD:
        printf("Enter password\n");
        gets(password);
        fp = fopen("fputs_test.txt", "r");

        int count1=1;
         sojib=0;
         while (fgets(line, sizeof line, fp) != NULL)
        {
            int cnt=0;
          if(count1==count+1)
          {


           int blb = 0,ii;
           int d = strlen(password);
          for( ii = 0;ii <d;ii++)
          {
              if(line[ii]==password[ii])
              {
                  cnt++;
              }
          }
          if(cnt==d)
          {
              sojib=1;
              break;
          }
          }
          count1++;
        }
        if(sojib==0)
        {
            goto PASSWORD;
        }
         fclose(fp);

    salam:
        printf("Press c for Calculator.\n");
        printf("Press g for Gamezone.\n");
        printf("Press q for logout.\n");
        char ch;
        scanf("%c",&ch);

    if(ch=='c')
    {
        calculator();
        {getchar(); goto salam;}
    }
    else if(ch=='g')
    {

        gamezone();
        char st; scanf("%c",&st);
        if(st=='B')
        {getchar(); goto salam;}
    }
    else if(ch=='q')
    {

    }
    else
    {
        printf("Enter Correct Key Again!\n");
        getchar();
        goto salam;
    }

}
int main()
{
    start:
    printf("Press a for Signup.\n");
    printf("Press b for login.\n");
    printf("Press Q for exite the program.\n");
    char aaa;
    scanf("%c",&aaa);
    if(aaa=='a')
    {
        Signup(); getchar();
         goto start;
    }
    else if(aaa=='b')
    {
        login(); getchar();
         goto start;
    }
    else if(aaa=='Q') return 0;
}


