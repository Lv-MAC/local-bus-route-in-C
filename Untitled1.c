#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#include<string.h>
int back,gb;///gb= go back.
int go_back();
int Alif();
int Agrodut();
int Achim();
int Akash();
int Bikash();
int BRTC();
int Balaka();
int Bondhu();
int Central();
int Champion();
int City_Link();
int D_Link();
int Desh_Bangla();
int Dewan();
int Dishari();
int ETC_Transport();
int FTCL();
int First_Ten();
int Gazipur_Paribahan();
int Glory_Express();
int Grameen();
int Great_Turag();
int Himachol();
int Haji_Transport();
int Iqbal_Enterprise();
int Itihash_Paribahan();
int J_M_Super_Paribahan();
int Janjabil();
int Kamal_Plus();
int Kanak();
int Khajababa();
int Kironmala();
int Labbaik();
int Lal_Shobuj();
int M_M_Lovely();
int Malancha();
int Manjil();
int Mohona();
int Nilachol();
int Nobokoli_Paribahan();
int Nur_E_Makka_Paribahan();
int Omama_International();
int One_Transport();
int Prochesta();
int Projapoti();
int Ramjan();
int Raida();
int Shadhin();
int Shotabdi();
int Somoy();
int Thikana();
int Tetulia();
int Taranga_Plus();
int VIP();
int Victor();
int Welcome();
int only_go_back();
int condition();
///main function start
void main()
{
    char alpha;///alpha is for alphabetic order bus choice.
    int br;///'i' is for loop purpose.
    char* a[4]= {"Alif","Agrodut","Achim","Akash"}; ///bus name alphabet order
    char* b[4]= {"Bikash","BRTC","Balaka","Bondhu"};
    char* c[3]= {"Central","Champion","City Link"};
    char* d[4]= {"D-Link","Desh Bangla","Dewan","Dishari"};
    char* e[1]= {"ETC Transport"};
    char* f[2]= {"FTCL","First Ten"};
    char* g[4]= {"Gazipur Paribahan","Glory Express","Grameen","Great Turag"};
    char* h[2]= {"Himachol","Haji Transport"};
    char* i[2]= {"Iqbal Enterprise","Itihash Paribahan"};
    char* j[2]= {"J M Super Paribahan","Janjabil"};
    char* k[4]= {"Kamal Plus","Kanak","Khajababa","kironmala"};
    char* l[2]= {"Labbaik","Lal Shobuj"};
    char* m[4]= {"M M Lovely","Malancha","Manjil","Mohona"};
    char* n[3]= {"Nilachol","Nobokoli Paribahan","Nur E Makka Paribahan"};
    char* o[2]= {"Omama International","One Transport"};
    char* p[2]= {"Prochesta","Projapoti"};
    char* r[2]= {"Ramjan","Raida"};
    char* s[3]= {"Shadhin","Shotabdi","Somoy"};
    char* t[3]= {"Thikana","Tetulia","Taranga Plus"};
    char* v[2]= {"VIP","Victor"};
    char* w[1]= {"Welcome"};
entry:
    printf("Enter an alphabet to find the order of that alphabet related bus\n");
    scanf("%s",&alpha);
    system("cls");
///bus selection start
selected_bus:
    gb=0;
    switch(toupper(alpha))
    {
    case 'A':
    {
        for(br=0; br<4; br++)
        {
            printf("%d.%s\n",br+1,a[br]);
        }
        go_back();
bus:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {

            switch(back)
            {
            case '1':
                system("cls");
                Alif();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Agrodut();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '3':
                system("cls");
                Achim();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '4':
                system("cls");
                Akash();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'4' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus;
            }
        }
    }
    break;
    case 'B':
    {
        for(br=0; br<4; br++)
        {
            printf("%d.%s\n",br+1,b[br]);
        }
        go_back();
bus2:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {

            switch(back)
            {
            case '1':
                system("cls");
                Bikash();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                BRTC();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '3':
                system("cls");
                Balaka();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '4':
                system("cls");
                Bondhu();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'4' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus2;
            }
        }
    }
    break;
    case 'C':
    {
        for(br=0; br<3; br++)
        {
            printf("%d.%s\n",br+1,c[br]);
        }
        go_back();
bus3:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Central();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Champion();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '3':
                system("cls");
                City_Link();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'3' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus3;
            }
        }
    }
    break;
    case 'D':
    {
        for(br=0; br<4; br++)
        {
            printf("%d.%s\n",br+1,d[br]);
        }
        go_back();
bus4:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Central();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Champion();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '3':
                system("cls");
                City_Link();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '4':
                system("cls");
                City_Link();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'4' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus4;
            }
        }
    }
    break;
    case 'E':
    {
        for(br=0; br<1; br++)
        {
            printf("%d.%s\n",br+1,e[br]);
        }
        go_back();
bus5:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                ETC_Transport();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'1' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus5;
            }
        }
    }
    break;
case 'F':
    {
        for(br=0; br<2; br++)
        {
            printf("%d.%s\n",br+1,f[br]);
        }
        go_back();
bus6:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                FTCL();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                First_Ten();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'2' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus6;
            }
        }
    }
    break;
    case 'G':
    {
        for(br=0; br<4; br++)
        {
            printf("%d.%s\n",br+1,g[br]);
        }
        go_back();
bus7:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {

            switch(back)
            {
            case '1':
                system("cls");
                Gazipur_Paribahan();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Glory_Express();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '3':
                system("cls");
                Grameen();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '4':
                system("cls");
                Great_Turag();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'4' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus7;
            }
        }
    }
    break;
    case 'H':
    {
        for(br=0; br<2; br++)
        {
            printf("%d.%s\n",br+1,h[br]);
        }
        go_back();
bus8:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Himachol();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Haji_Transport();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'2' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus8;
            }
        }
    }
    break;
    case 'I':
    {
        for(br=0; br<2; br++)
        {
            printf("%d.%s\n",br+1,i[br]);
        }
        go_back();
bus9:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Iqbal_Enterprise();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Itihash_Paribahan();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'2' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus9;
            }
        }
    }
    break;
    case 'J':
    {
        for(br=0; br<2; br++)
        {
            printf("%d.%s\n",br+1,j[br]);
        }
        go_back();
bus10:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                J_M_Super_Paribahan();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Janjabil();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'2' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus10;
            }
        }
    }
    break;
    case 'K':
    {
        for(br=0; br<4; br++)
        {
            printf("%d.%s\n",br+1,k[br]);
        }
        go_back();
bus11:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {

            switch(back)
            {
            case '1':
                system("cls");
                Kamal_Plus();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Kanak();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '3':
                system("cls");
                Khajababa();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '4':
                system("cls");
                Kironmala();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'4' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus11;
            }
        }
    }
    break;
    case 'L':
    {
        for(br=0; br<2; br++)
        {
            printf("%d.%s\n",br+1,l[br]);
        }
        go_back();
bus12:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Labbaik();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Lal_Shobuj();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'2' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus12;
            }
        }
    }
    break;
case 'M':
    {
        for(br=0; br<4; br++)
        {
            printf("%d.%s\n",br+1,m[br]);
        }
        go_back();
bus13:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {

            switch(back)
            {
            case '1':
                system("cls");
                M_M_Lovely();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Malancha();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '3':
                system("cls");
                Manjil();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '4':
                system("cls");
                Mohona();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'4' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus13;
            }
        }
    }
    break;
case 'N':
    {
        for(br=0; br<3; br++)
        {
            printf("%d.%s\n",br+1,n[br]);
        }
        go_back();
bus14:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Nilachol();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Nobokoli_Paribahan();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '3':
                system("cls");
                Nur_E_Makka_Paribahan();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'3' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus14;
            }
        }
    }
    break;
case 'O':
    {
        for(br=0; br<2; br++)
        {
            printf("%d.%s\n",br+1,o[br]);
        }
        go_back();
bus15:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Omama_International();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                One_Transport();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'2' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus15;
            }
        }
    }
    break;
    case 'P':
    {
        for(br=0; br<2; br++)
        {
            printf("%d.%s\n",br+1,p[br]);
        }
        go_back();
bus16:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Prochesta();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Projapoti();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'2' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus16;
            }
        }
    }
    break;
    case 'Q':
    {
    printf("No buses found");
    only_go_back();
    condition();
    if(gb!=0){
            system("cls");
            goto entry;
        }
    }
    break;
case 'R':
    {
        for(br=0; br<2; br++)
        {
            printf("%d.%s\n",br+1,r[br]);
        }
        go_back();
bus18:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Ramjan();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Raida();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'2' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus18;
            }
        }
    }
    break;
    case 'S':
    {
        for(br=0; br<3; br++)
        {
            printf("%d.%s\n",br+1,s[br]);
        }
        go_back();
bus19:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Shadhin();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Shotabdi();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '3':
                system("cls");
                Somoy();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'3' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus19;
            }
        }
    }
    break;
    case 'T':
    {
        for(br=0; br<3; br++)
        {
            printf("%d.%s\n",br+1,t[br]);
        }
        go_back();
bus20:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Thikana();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Tetulia();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '3':
                system("cls");
                Taranga_Plus();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'3' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus20;
            }
        }
    }
    break;
    case 'U':
    {
    printf("No buses found");
    only_go_back();
    condition();
    if(gb!=0){
            system("cls");
            goto entry;
        }
    }
    break;
    case 'V':
    {
        for(br=0; br<2; br++)
        {
            printf("%d.%s\n",br+1,v[br]);
        }
        go_back();
bus22:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                VIP();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            case '2':
                system("cls");
                Victor();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'2' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus22;
            }
        }
    }
    break;
    case 'W':
    {
        for(br=0; br<1; br++)
        {
            printf("%d.%s\n",br+1,w[br]);
        }
        go_back();
bus23:
        if(back=='0')
        {
            system("cls");
            goto entry;
        }
        else
        {
            switch(back)
            {
            case '1':
                system("cls");
                Welcome();
                only_go_back();
                condition();
                system("cls");
                goto selected_bus;
                break;
            default :
                while(back>'1' || back<'0')
                {
                    printf("Invalid");
                    back='\0';
                    go_back();
                }
                goto bus23;
            }
        }
    }
    break;
    case 'X':
    {
    printf("No buses found");
    only_go_back();
    condition();
    if(gb!=0){
            system("cls");
            goto entry;
        }
    }
    break;
    case 'Y':
    {
    printf("No buses found");
    only_go_back();
    condition();
    if(gb!=0){
            system("cls");
            goto entry;
        }
    }
    break;
    case 'Z':
    {
    printf("No buses found");
    only_go_back();
    condition();
    if(gb!=0){
            system("cls");
            goto entry;
        }
    }
    break;
    default :
        printf("Invalid\n");
        back='\0';
        goto entry;
    }
///bus selection end


    getch();
}
///main function end


///user defined function
int condition()
{
    if(back=='0')
    {
        gb++;
    }
    else if(back=='1')
    {
        system("cls");
        printf("Thanks for using our service");
        Sleep(2000);
        exit(0);
    }
    else
    {
        while(back > '1' || back < '0')
        {
            printf("Invalid");
            only_go_back();
        }
    }
}
int only_go_back()
{
    printf("\n\nEnter 0 to go back or 1 to exit\n");
    scanf("%s",&back);
}
int go_back()
{
    printf("\n\nEnter 0 to go back or select an option.\n");
    scanf("%s",&back);
}
int Alif()
{
    printf("Alif's Route:\n\n");
    printf("Mirpur-1 => Mirpur-2 => Mirpur-10 => Kazipara => Shewrapara => Agargaon => Bijoy Sarani => Jahangir Gate => Mohakhali => Wireless More => Glushan Bridge => Gulshan-1 => Badda => Rampura Bridge => Banasree\nRoute: a-182");
}
int Agrodut()
{
    printf("Agrodut's Route:\n\n");
    printf("Baipayl => Hemayetpur => gabtoli => Technical => Kallayanpur => Shyamoli => Shishu Mela => Agargaon => Zia Udyan => Bijoy Sarani => Jahangir Gate => Mohakhali => Wireless More => Gulshan Bridge => Gulshan-1 => Badda => Shahjadpur => Bashtola => Natun Bazar\nRoute: a-181");
}
int Achim()
{
    printf("Achim's Route:\n\n");
    printf("Gabtoli => Technical => Ansar Camp => Mirpur-1 => Sony Hall => Mirpur-2 => Mirpur-10 => Mirpur-11 => Purobi => Kalshi => ECB Chattor => MES => Shewra => Kuril Bishwa Road => Bashundhara => Natun Bazar => Badda => Merul Badda => Rampura Bridge => Banasree => Demra Staff Quarter\nRoute: a-314");
}
int Akash()
{
    printf("Akash's Route:\n\n");
    printf("kodomtoli => Keraniganj => Babu Bazar => Naya Bazar => Golap Shah Mazar => GPO => Paltan => Kakrail => Shantinagar => Malibagh More => Mouchak => Malibagh Railgate => Rampura => Merul => Madhya Badda => Badda => Natun Bazar => Bashundhara => Kuril Bishwa Road => Khilkhet => Airport => Azampur => House Building => Diabari\nRoute: n/a");
}
int Bikash()
{
printf("Bikash's Route:\n\n");
printf("Sign Board => Matuail => Rayerbag => Shonir Akhra => Jatrabari => Sayedabad => Gulistan => Chankhar Pul => Bakshi Bazar => Azimpur => Nilkhet => New Market => City College => Kalabagan => Kalabagan => Farmgate => Jahangir Gate => Mohakhali => Chairman Bari => Banani => Shewra => Kuril Bishwa Road => Khilkhet => Airport => Azampur => House Building => Abdullahpur => Kamarpara\nRoute: n/a");
}
int BRTC()
{

}
int Balaka()
{
printf("Balaka's Route:\n\n");
printf("Sadarghat => Ray Shaheb Bazar => Naya Bazar => Golap Shah Mazar => GPO => Paltan => Kakrail => Shantinogor => Malibagh More => Mouchak => Moghbazar => Nabisco => Mohakhali => Chairman Bari => Shainik Club => Banani => Kakoli => Staff Road => MES => Shewra => Kuril Bishwa Road => Khilkhet => Airport => Abdullahpur => Tongi => Station Road => Mill Gate => Board Bazar => Gazipur Chowrasta\nRoute: a-205");
}
int Bondhu()
{
printf("Bondhu's Route:\n\n");
printf("Gulistan => GPO => Paltan => kakrail => Shantinogor => Malibagh More => Mouchak => Malibagh Railgate => Rampura => Merul => Madhya Badda => Badda => Notun Bazar\nRoute: n/a");
}
int Central()
{
printf("Central's Route:\n\n");
printf("Gabtoli => Dhaka Udyan => Beribadh Tin Rastar More => Rayer Bazar => Sikder Medical => Hazaribag => Nowabganj => Kamrangirchar => Showari Ghat => Mitford Ghat => Babu Bazar\nRoute: n/a");
}
int Champion()
{
printf("Champion's Route:\n\n");
printf("Bhashantek => Mirpur-14 => Mirpur-10 => Mirpur-2 => Sony Hall => mirpur-1 => Ansar Camp => Technical => Gabtoli\nRoute: n/a");
}
int City_Link()
{
printf("City Link's Route:\n\n");
printf("Chittagong Road => Sign Board => Shonir Akhra => Gulistan => GPO => Paltan => Press Club => High Court => Shahbag => Bata Signal => Science Lab => City College => Jigatola => Dhanmondi-15 => Star Kabab => Shankar => Mohammadpur => Bosila => Ghater Char\nRoute: n/a");
}
int D_Link()
{
printf("D-Link's Route:\n\n");
printf("Fulbaria => Chankar Pul => Bakshi Bazar => Azimpur => Nilkhet => New Market => City College => Kalabagan => Dhanmondi-32 => Dhanmondi-27 => Asad Gate => College Gate => Shishu Mela => Shyamoli => Kallyanpur => technical => Gabtoli => Aminbazar => Hemayetpur => Savar => Dhamrai\nRoute: a-260");
}
int Desh_Bangla()
{
printf("Desh Bangla's Route:\n\n");
printf("Postagola => Dholairpar => jatrabari => Sayedabad => Mugdapara => Basabo => Khilgaon => Malibagh => Rampura => Merul => Badda => Natun Bazar => Nadda => kuril Bishwa Road => Khilkhet => Airport => House Building => Abdullahpur => Kamarpara\nRoute: a-456");
}
int Dewan()
{
printf("Dewan's Route:\n\n");
printf("Azimpur => New Market => City College => Science Lab => Katabon => Shahbag => Bangla Motor => Kawran Bazar => Farmgate => Jahangir Gate => Mohakhali => Wireless More => Gulshan-1 => Badda => Shahjadpur => Natun Bazar => Nadda => Bashundhara => Jamuna Future park => Kuril Bishwa Road\nRoute: a-355");
}
int Dishari()
{
printf("Dishari's Route:\n\n");
printf("Chiriakhana => Mirpur-1 => Ansar Camp => Technical => Kallyanpur => Shyamoli => Shishu Mela => College Gate => Asad Gate => Khamarbari => Farmgate => Kawran Bazar => Bangla Motor => Shahbag => Motsho Bhaban => High Court => Press Club => Paltan => GPO => Golap Shah Mazar => Naya Bazar => Babu Bazar => Keraniganj\nRoute: a-268");
}
int ETC_Transport()
{
printf("ETC Transport's Route:\n\n");
printf("Golap Shah Mazar => GPO => Paltan => Press Club => High Court => Motsho Bhaban => Shahbag => Bangla Motor => Kawran Bazar => Farmgate => Khamarbari => Agargaon => Taltola => Shewrapara => Kazipara => Mirpur-10 => Mirpur-11 => Purobi => Pallabi => Mirpur-12\nRoute: a-125");
}
int FTCL()
{
printf("FTCL's Route:\n\n");
printf("Mohammadpur => Shankar => Star Kabab => Dhanmondi-15 => Jigatola => City College => Science Lab => Bata Signal => Shahbag => Motsho Bhaban => High Court => Press Club => Paltan => GPO => Gulistan => Sayedabad => Jatrabari => Shonir Akhra => Sign Board => Chittagong Road\nRoute: n/a");
}
int First_Ten()
{
printf("First Ten's Route:\n\n");
printf("vashantek => Mirpur-14 => Mirpur-10 => Mirpur-2 => Sony Hall => Mirpur-1 => Ansar Camp => Technical => Gabtoli\nRoute: n/a");
}
int Gazipur_Paribahan()
{
printf("Gazipur Paribahan's Route:\n\n");
printf("Motijheel => Paltan => Kakrail => Shantinagar => Malibagh More => Mouchak => Moghbazar => Nabisco => Mohakhali => Chairman Bari => Shainik Club => Banani => Kakoli => Staff Road => MES => Shewra => Kuril Bishwa Road => Khilkhet => Airport => Jasimuddin => Rajlakshmi => Azampur => House Building => Abdullahpur => Tongi => Station Road => Mill Gate => Board Bazar => Gazipur Chowrasta => Shib Bari\nRoute: a-222");
}
int Glory_Express()
{
printf("Glory Express's Route:\n\n");
printf("Gulistan => Sayedabad => Jonopath More => Jatrabari => Kazla => Matuail => Konapara => Demra Staff Quarter => Tarabo => Konapara => Borabo => Rupshi => Borpa => Bhulta\nRoute: n/a");
}
int Grameen()
{
printf("Grameen's Route:\n\n");
printf("Mirpur-14 => Mirpur-10 => Mirpur-2 => Sony Hall => Mirpur-1 => Ansar Camp => Technical => Gabtoli\nRoute: n/a");
}
int Great_Turag()
{
printf("Great Turag's Route:\n\n");
printf("Jatrabari => Sayedabad => Mugdapara => Basabo => Khilgaon => Malibagh => Rampura => Badda => Natun Bazar => Nadda => Kuril Bishwa Road => Khilkhet => Airport => House Building => Abdullahpur => Tongi\nRoute: a-243");
}
int Himachol()
{
printf("Himachol's Route:\n\n");
printf("Metro Hall => Chashara => Shibu Market => Jalkuri => Sign Board => Matuail => Rayerbag => Shonir Akhra => Jatrabari => Jonopath More => Gulistan => GPO => Paltan => Press Club => High Court => Motsho Bhaban => Shahbag => Bangla Motor => Kawran Bazar => Farmgate => Bijoy Sarani => Agargaon => Taltola => Shewrapara => Kazipara => Mirpur-10 => Mirpur-11 => Purobi => Pallabi => Mirpur-12\nRoute: n/a");
}
int Haji_Transport()
{
printf("Haji Transport's Route:\n\n");
printf("Mirpur-12 => Pallabi => Purobi => Mirpur-11 => Mirpur-10 => Kazipara => Shewrapara => Taltola => Agargaon => Bijoy Sarani => Farmgate => Kawran Bazar => Bangla Motor => Shahbag => Motsho Bhaban => High Court => Press Club => Paltan => GPO => Gulistan => Motijheel\nRoute: a-123");
}
int Iqbal_Enterprise()
{
printf("Iqbal Enterprise's Route:\n\n");
printf("Abdullahpur => Uttara => Azampur => Rajlakshmi => Jasimuddin => Airport => Khilkhet => Kuril Bishwa Road => Jamuna Future Park => Bashundhara => Badda => Rampura => Malibagh Railgate => Khilgaon => Basabo => Mugdapara => Golapbag => Jatrabari => Sonir Akhra => Matuail => Saddam Market => Sign Board\nRoute: n/a");
}
int Itihash_Paribahan()
{
printf("Itihash's Route:\n\n");
printf("Mirpur-14 => Mirpur-10 => Mirpur-2 => Sony Hall => Mirpur-1 => Ansar Camp => Technical => Gabtoli => Aminbazar => Hemayetpur => Savar => Nobinagar => Baipayl => Zirani Bazar => Nandan Park => Chandra\nRoute: a-307");
}
int J_M_Super_Paribahan()
{
printf("J M Super Paribahan's Route:\n\n");
printf("Jatrabari => Sayedabad => Mugdapara => Basabo => Khilgaon => Malibagh => Rampura => Badda => Natun Bazar => Nadda => Kuril Bishwa Road => Khilkhet => Airport => House Building => Abdullahpur => Tongi\nRoute: n/a");
}
int Janjabil()
{
printf("Janjabil's Route:\n\n");
printf("Gabtoli => Beribadh Tin Rastar More => Rayer Bazar => Sikder Medical => Hazaribag => Nawabganj => Kamrangirchar => Showari Ghat => Mitford Ghat => Babu Bazar\nRoute: n/a");
}
int Kamal_Plus()
{
printf("Kamal plus's Route:\n\n");
printf("Ghatar Char => Mohammadpur => Shankar => Star Kabab => Dhanmondi-15 => Jigatola => City College => Science Lab => New Market => Azimpur => Bakshi Bazar => Chankhar Pul => Gulistan => Sayedabad => Jatrabari => Shonir Akhra => Sign Board => Chittagong Road\nRoute: n/a");
}
int Kanak()
{
printf("kanak's Route:\n\n");
printf("Mirpur-1 => Sony Hall => Mirpur-2 => Mirpur-10 => Mirpur=11 => Purobi -> Kalshi => ECB Chattor => MES => Shewra => Kuril Bishwa Road => Khilkhet => Airport => Jasimuddin => Rajlakshmi => Azampur => House Building => Abdullahpur\nRoute: a-269");
}
int Khajababa()
{
printf("Khajababa's Route:\n\n");
printf("Mirpur-12 => Pallabi => Purobi => Mirpur-11 => Mirpur-10 => Kazipara => Shewrapara => Taltola => Agargaon => Khamarbari => Farmgate => Kawran Bazar => Bangla Motor => Shahbag => Motsho Bhaban => High Court => Press Club => Paltan => GPO => Gulistan => Sayedabad => Jatrabari\nRoute: a-319");
}
int Kironmala()
{
printf("Kironmala's Route:\n\n");
printf("Chiriakhana => Sony Hall => Mirpur-1 => Mazar Road Konabari => Mirpur Diabari => Nobaberbag => Tamanna World Family Park => Eastern Housing => Birulia => Panchaboti => Dhour Beribadh => Ashulia => Zirabo => Nishchintapur => Narshinghapur => Sura Bari => Kashimpur => Noyapara => Jarun => Konabai\nRoute: a-422");
}
int Labbaik()
{
printf("Labbaik's Route:\n\n");
printf("Savar => Hemayetpur => Aminbazar => Gabtoli => Technical => Kallyanpur => Shyamoli => Shishu Mela => College Gate => Asad Gate => Khamarbari => Farmgate => Kawran Bazar => Bangla Motor => Moghbazar => Mouchak => Malibagh Railgate => Khilgaon Flyover => Basabo => Mugdapara => Manik Nagar => Golapbag Chowrasta => Sayedabad => Jonopath More => Jatrabari => Kazla => Shonir Akhra => Rayerbag => Matuail => Sign Board\nRoute: a-192");
}
int Lal_Shobuj()
{
printf("Lal Shobuj's Route:\n\n");
printf("Nandan Park => Zirani Bazar => Baipayl => Nobinagar => Savar => Hemayetpur => Aminbazar => Gabtoli => Technical => Kallyanpur => Shyamoli => Shishu Mela => College Gate => Asad Gate => Khamarbari => Farmgate => Kawran Bazar => Bangla Motor => Shahbag => High Court => Press Club => Paltan => GPO => Gulistan => Motijheel\nRoute: n/a");
}
int M_M_Lovely()
{
printf("M M Lovely's Route:\n\n");
printf("Savar => Hemayetpur => Aminbazar => Gabtoli => Technical => Kallyanpur => Shyamoli => Shishu Mela => College Gate => Asad Gate => Khamarbari => Farmgate => Kawran Bazar => Bangla Motor => Moghbazar => Mouchak => Malibagh More => Rajarbagh => Khilgaon Flyover => Basabo => Mugdapara => Manik Nagar => Golapbag Chowrasta => Sayedabad => Jonopath More => Jatrabari => Kazla => Shonir Akhra => Rayerbag => Matuail => Sign Board\nRoute: n/a");
}
int Malancha()
{
printf("Malancha's Route:\n\n");
printf("Mohammadpur => Shankar => Star Kabab => Dhanmondi-15 => Jigatola => City College => Science Lab => Bata Signal => Shahbag => Motsho Bhaban => High Court => Press Club => Paltan => GPO => Gulistan => Doyagonj => Dhupkhola\nRoute: n/a");
}
int Manjil()
{
printf("Manjil's Route:\n\n");
printf("Chittagong Road => Sign Board => Shonir Akhra => Gulistan => GPO => Paltan => Kakrail => Malibagh More => Mouchak => Moghbazar => Satrasta => Nabisco => Mohakhali => Chairman Bari => Banani => Kakoli => Kuril Bishwa Road => Khilkhet => Airport => Jasimuddin => Rajlakshmi => Azampur => house Building => Abdullahpur\nRoute: a-368");
}
int Mohona()
{
printf("Mohona's Route:\n\n");
printf("Mirpur-14 => Mirpur-10 => Mirpur-2 => Sony Hall => Mirpur-1 => Konabari => Rupnagar => Birulia => Ashulia => Zirabo => Fantasy Kingdom\nRoute: a-182");
}
int Nilachol()
{
printf("Nilachol's Route:\n\n");
printf("Chittagong Road => Sign Board => Matuail => Rayerbag => Shonir Akhra => Jatrabari => Sayedabad => Gulistan => Chankhar Pul => Bakshi Bazar => Azimpur => Nilkhet => New Market => City College => Kalabagan => Dhanmondi-32 => Dhanmondi-27 => Asad Gate => College Gate => Shishu Mela => Shyamoli => Kallyanpur => Technical => Gabtoli => Aminbazar => Hemayetpur => Nabinagar => Manikganj => Paturia\nRoute: n/a");
}
int Nobokoli_Paribahan()
{
printf("Nobokoli Paribahan's Route:\n\n");
printf("Chiriakhana => Mirpur-1 => Ansar Camp => Technical => Kallyanpur => Shyamoli => Shishu Mela => College Gate => Asad Gate => Dhanmondi-27 => Shukrabad => Dhanmondi-32 => kalabagan => Science Lab => Katabon => Shahbag => High Court => Fulbaria => Naya Bazar => Babu Bazar => Keraniganj\nRoute: a-413");
}
int Nur_E_Makka_Paribahan()
{
printf("Nur E Makka Paribahan's Route:\n\n");
printf("Chiriakhana => Sony Hall => Mirpur-2 => Mirpur-10 => Mirpur-11 => Purobi => Kalshi => ECB Chattor => MES => Shewra => kuril Bishwa Road => Bashundhara => Nadda => Natun Bazar => Bashtola => Shahjadpur => Uttar Badda Bazar => Badda => Madhya Badda => Merul => Rampura => Malibagh Railgate\nRoute: a-320");
}
int Omama_International()
{
printf("Omama International's Route:\n\n");
printf("Motijheel => Daynik Bangla More => Paltan => Press Club => Shahbag => bangla Motor => Kawran bazar => Farmgate => Jahangir Gate => Mohakhali => Chairman Bari => Shainik Club => Banani => Kakoli => Staff Road => MES => Shewra => Kuril Bishwa Road => Khilkhet => Airport\nRoute: n/a");
}
int One_Transport()
{
printf("One Transport's Route:\n\n");
printf("Nandan Park => Zirani Bazar => Baipayl => Nobinagar => Savar => Hemayetpur => Aminbazar => Gabtoli => Technical => Kallyanpur => Shyamoli => Shishu Mela => College Gate => Asad Gate => Khamarbari => farmgate => Kawran Bazar => Bangla Motor => Shahbag => High Court => Press Club => Paltan => GPO => Gulistan => Motijheel\nRoute: n/a");
}
int Prochesta()
{
printf("Prochesta's Route:\n\n");
printf("Mawa => Keraniganj => Babu Bazar => Naya Bazar => Golap Shah Mazar => GPO => Paltan => Kakrail => Shantinagar => Malibagh More => Mouchak => Malibagh Railgate => Rampura => Merul => Madhya Badda => Badda => Natun Bazar => Nadda => Bashundhara => Kuril Bishwa Road => Khilkhet => Airport => Jasimuddin => Rajlakshmi => Azampur => House Building => Abdullahpur\nRoute: a-173");
}
int Projapoti()
{
printf("Projapoti's Route:\n\n");
printf("Bosila => Mohammadpur => Asad Gate => College Gate => Shyamoli => Kallyanpur => Darusslam => Technical => Bangla College => Ansar Camp => Mirpur-1 => Mirpur-2 => Mirpur-10 => Mirpur-11 => Purobi => Kalshi => ECB Chattor => MES => Shewra => Kuril Bishwa Road => Khilkhet => Airport => Jasimuddin => Rajlakshmi => House Building => Abdullahpur => Kamarpara\nRoute: a-270");
}
int Ramjan()
{
printf("Ramjan's Route:\n\n");
printf("Gabtoli => Technical => Kallyanpur => Shyamoli => Shishu Mela => College Gate => Asad Gate => Mohammadpur => Shankar => Star Kabab => Dhanmondi-15 => Jigatola => City College => Science Lab => Bata Signal => Katabon => Shahbag => Motsho Bhaban => Kakrail => Shantinagar => Mouchak => Malibagh Railgate => Rampura => Banasree => Demra Staff Quarter\nRoute: n/a");
}
int Raida()
{
printf("Raida's Route:\n\n");
printf("Postagola => Dholaipar => Jatrabari => Jonopath => Mugdapara => Basabo => Khilgaon => Malibagh => Rampura => Merul => Badda => Natun Bazar => Nadda => Kuril Bishwa Road => Khilkhet => Airport => House Building => Diabari\nRoute: n/a");
}
int Shadhin()
{
printf("Shadhin's Route:\n\n");
printf("Bosila => Mohammadpur => Asad Gate => Khamarbari => Farmgate => Kawran Bazar => Bangla Motor => Moghbazar => Mouchak => Malibagh Railgate => Rampura => Banasree => Demra => Staff Quarter\nRoute: a-378");
}
int Shotabdi()
{
printf("Shotabdi's Route:\n\n");
printf("Motijheel => Paltan => Kakrail => Malibagh => Mouchak => Moghbazar => Satrasta => Nabisco => Mohakhali => Chairman Bari => Banani => Kakoli => Shewra => Kuril Bishwa Road => Khilkhet => Airport => House Building => Abdullahpur => Kamar Para\nRoute: a-346");
}
int Somoy()
{
printf("Somoy's Route:\n\n");
printf("Sign Board => Matuail => Rayerbag => Shonir Akhra => Jatrabari => Jonopath More => Gulistan => GPO => Paltan => Press Club => High Court => Matsho Bhaban => Shahbag => Bangla Motor => Kawran Bazar => Farmgate => Bijoy Sarani => Agargaon => Taltola => Shewrapara => Kazipara => Mirpur-10 => mirpur-11 => Purobi => Pallabi => Mirpur-12\nRoute: n/a");
}
int Thikana()
{
printf("Thikana's Route:\n\n");
printf("Sign Board => Matuail => Rayerbag => Shonir Akra => Jatrabari => Sayedabad => Gulistan => Chankhar Pul => Bakshi Bazar => Azimpur => Nilkhet => New Market => City College => Kalabagan => Dhanmmondi-32 => Dhanmondi-27 => Asad Gate => College Gate => Shishi Mela => Shyamoli => Kallyanpur => Technical => Gabtoli => Aminbazar => Hemayetpur => Savar => Baipayl => Zirani Bazar => Nandan Park => Chandra\nRoute: n/a");
}
int Tetulia()
{
printf("Tetulia's Route:\n\n");
printf("Shia Masjid => Japan Garden City => Ring Road => Adabor => Shyamoli => Shishu Mela => Agargaon => Taltola => Shewrapara => Kazipara => Mirpur-10 => Mirpur-11 => Purobi => Pallabi => Kalshi => ECB Chattor => MES => Shewra => Kuril Bishwa Road => Khilkhet => Airport => Jasimuddin => Rajlakshmi => House Building => Abdullahpur\nRoute: n/a");
}
int Taranga_Plus()
{
printf("Taranga Plus's Route:\n\n");
printf("Mohammadpur => Shankar => Star Kabab => Dhanmondi-15 => Jigatola => City College => Science Lab => Bata Signal => Shahbag => Motsho Bhaban => Kakrail => Shantinagar => Malibagh More => Mouchak => Malibagh Railgate => Rampura => Banasree\nRoute: a-157");
}
int VIP()
{
printf("VIP's Route:\n\n");
printf("Azimpur => New Market => City College => Dhanmondi-8 => Dhanmondi-6 => Kalabagan => Dhanmondi-32 => Shukrabad => Dhanmondi-27 => Manik Mia Avenue Khamarbari => Bijoy Sarani => Jahangir Gate => Mohakhali Chairman Bari => Banani => Kakoli => MES => Shewra => Kuril Bishwa Road => Khilkhet => Kawlar => Airport => Jasimuddin => Rajlakshm => Azampur => Uttara => Abdullahpur => Tongi Station Road => Mill Gate => Cherag Ali => Tongi College Gate => National University => Vogra Bypass => Gazipur Chowrasta => Shib Bari\nRoute: a-207");
}
int Victor()
{
printf("Victor's Route:\n\n");
printf("Sadarghat => Ray Shaheb Bazar => Naya Bazar => Golap Shah Mazar => GPO => Paltan => Kakrail => Shantinagar => Malibagh More => Mouchak => Malibagh Railgate => Rampura => Merul => Madhya Badda => Natun Bazar => Nadda => Bashundhara => Kuril Bishwa Road\nRoute: n/a");
}
int Welcome()
{
printf("Welcome's Route:\n\n");
printf("Nandan Park => Zirani Bazar => Baipayl => Nobinagar => Savar => Hemayetpur => Aminbazar => Gabtoli => Technical => Kallyanpur => Shyamoli => Shishi Mela => College Gate => Asad Gate => Khamarbari => Farmgate => Kawran Bazar => Bangla Motor => Shahbag => High Court => Press Club => Paltan => GPO => Gulistan => Motijheel\nRoute: a-331");
}

/*


*/
