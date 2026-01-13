#include<stdio.h>
#include<math.h>

void main ()
{/*
    int h , d ;
    float V ;
    const float pi = 3.14 ;
    
    do
    {
        printf("entrer la valeur de h et d : \n");
        scanf("%d%d",&h,&d);
    } while ( d <= 0 && h <= 0 );
    
    V = pi * pow( ((float)d/2 ) , 2 ) * h ;

    printf("V = %.2f \n",V);
*//*  
    int c ;

    do
    {
          printf("entrer une lettre : \n");
          scanf(" %c",&c);
    } while ( c != 'J' || c != 'F' || c != 'M' || c != 'A' || c != 'I' || c != 'U' || c != 'L' || c != 'O' || c != 'S' || c != 'C' || c != 'N' || c != 'D' );

    switch ( c )
    {
    case 'J':
        printf("Janvier \n");
        break;
    case 'F':
        printf("Fevrier \n");
        break;
    case 'M':
        printf("Mars \n");
        break;
    case 'A':
        printf("Avril \n");
        break;
    case 'I':
        printf("Mai \n");
        break;
    case 'U':
        printf("Juin \n");
        break;
    case 'L':
        printf("Juillet \n");
        break;
    case 'O':
        printf("Aout \n");
        break;
    case 'S':
        printf("Septembre \n");
        break;        
    case 'C':
        printf("Octobre \n");
        break;
    case 'N':
        printf("Novembre \n");
        break;
    case 'D':
        printf("Decembre \n");
        break;
    }
*//*
    int N , i , r , cpt = 0 , Sp = 0 , Simp = 0 , p = 0 , imp = 0 ;
    float Mp , Mimp ;

    do
    {
        printf("entrer un nombre :\n");
        scanf("%d",&N);
    } while ( N <= 0 );
    
    while ( N != 0 )
    {
        r = N % 10 ;
        N = N / 10 ;
        if ( r == 3 )
        {
            cpt ++ ;
        }
        if ( r % 2 == 0 )
        {
            Sp += r ;
            p ++ ;
        }
        if ( r % 2 != 0 )
        {
            Simp += r ;
            imp ++ ;
        }
    }
    Mp = Sp /(float) p ;
    Mimp = Simp /(float) imp ;

    printf("nombre de fois que le chiffre 3 apparait est : %d \n",cpt);
    printf("moyenne des chiffres pairs : %.2f \n",Mp);
    printf("moyenne des vhiffres impaires : %.2f \n",&Mimp);
*//*
    float M = 0 , P , Pmin = 299 , Pmax = 0 ;

    while ( P != 0 )
    {
        do
        {
            printf("veuillez entrer le prix : \n");
            scanf("%f",&P);
        } while ( P < 0 );

        if ( P < Pmin )
        {
            Pmin = P ;
        }
        if ( P > Pmax )
        {
            Pmax = P ;
        }
        
        M += P ;
    }
    
    printf("le monatnt des achats est : %.2f \n",M);
    printf("le prix le plus petit est ; %.2f \n",Pmin);
    printf("le prix le plus grand est : %.2f \n",Pmax);
*/
    int i , N , Sc = 0 , r ;

    do
    {
        printf("entrer la valeur de N : \n");
        scanf("%d",&N);
    } while ( N <= 0 );
    
    for ( i = 1 ; i <= N ; i++ )
    {
        while ( N == 0 )
        {
           r = N % 10 ;
           N = N / 10 ;
           Sc += r ;
        }
    }
    if ( Sc % 6 == 0 )
    {
        printf("le nombre est magique \n");
    }
    else 
    {
        printf("le nombre n'est pas magique \n");
    }
}