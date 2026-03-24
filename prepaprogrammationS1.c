#include<stdio.h>
#include<math.h>

void main ()
{
/*(exercice1)  
    int M , c ;
    float Mf ;

    do
    {
        printf("entrer le montant : \n");
        scanf("%d",&M);
    } while ( M <= 0 );
    
    do
    {
        printf("entrer la devise de destination : \n");
        scanf(" %c",&c);
    } while ( c != 'E' || c != 'e' ||c != 'U' ||c != 'u' );
    
    switch ( c )
    {
    case 'E' :
    case 'e' :
             Mf = M * 0.09 ;
        break;
    case 'U' :
    case 'u' :
             Mf = M * 0.11 ;
        break;
    }
    printf("le montant apres conversion %.2f \n",Mf);
*//*(exercice2)
    int x , S = 0 , cpt = 1 , P = 1 , i = 1 ;
    float Sr = 0 ;

    do
    {
        printf("entrer x : \n");
        scanf("%d",&x);

        if ( x > 0 && cpt <= 5 )
        {
            S += x ;
            cpt ++ ;
        }
        if ( x < 0 && x != -1 && i <= 5 )
        {
            P *= x ;
            i ++ ;
        }
        if ( x % 2 == 0 && x >= 0 )
        {
            Sr += sqrt (x) ;
        }
    } while ( x != -1 );

    printf("la somme des 5 premiers nombre est %d \n",S);
    printf("le produit des 5 premier nombres negatifs est %d \n",P);
    printf("la somme des racines carrees est %.2f \n",Sr);
*/
    int Nb , i ;
    float Dist , A1 , A2 , Pi , Pf ;
    char Classe ,Type ;
    
    do
    {
        printf("entrer le nombre de passagers : \n");
        scanf("%d",&Nb);
    } while ( Nb <= 0 );
    
    for ( i = 1 ; i <= Nb ; i++ )
    {
        printf("Passager : %d \n",i);  
        do
        {
            printf("Distance : \n");
            scanf("%f",&Dist);
        } while ( Dist <= 0 );
    
        if ( Dist <= 200 )
        {
            Pi = Dist * 3 ;
        }
        else if ( Dist <= 500 )
        {
            Pi = Dist * 5 ;
        }
        else if ( Dist <= 1000 )
        {
            Pi = Dist * 7 ;
        }
        else
        {
            Pi = Dist * 10 ;
        }
    
        do 
        {
            printf("Classe : \n");
            scanf(" %c",&Classe);
        } while ( Classe != 'B' && Classe != 'b' && Classe != 'E' && Classe != 'e' );
    
        switch ( Classe )
        {
        case 'B' :
        case 'b' :
            A1 = Pi * 0.1 ;
            break;
        case 'E' :
        case 'e' :
            A1 = 0 ;
            break;
        }

        do
        {
            printf("Type : \n");
            scanf(" %c",&Type);
        } while ( Type != 'D' && Type != 'd' && Type != 'C' && Type != 'c' );
    
        switch ( Classe )
        {
        case 'D' :
        case 'd' :
            A2 = Pi * 0.2 ;
            break;
        case 'E' :
        case 'e' :
            A2 = Pi * 0.1 ;
            break;
        }
    
        Pf = Pi + A1 + A2 ;

        printf("Prix initial du voyage : %.2f \n",Pi);
        printf("Augmentation de la classe : %.2f \n",A1);
        printf("Augmentation du type de vol : %.2f \n",A2);
        printf("Prix final : %.2f \n",Pf);
    }
}
