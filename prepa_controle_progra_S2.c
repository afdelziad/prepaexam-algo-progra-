#include<stdio.h>
#define Nmax 100
#define Lmax 100
#define Cmax 100

void main ()
{
/*    char tab[] = "EMSI" ;
    int i = 0; 

    while ( tab[i] != 'S' )
    {
        i++ ;
    }
    
    printf("i = %d \n",i);
*//*
    int temp , i = 1 , tab[] = {1,3,5,7} ;

    while ( i != 0 )
    {
        temp = tab[i] ;
        tab[i] = tab[i+1] ;
        tab[i+1] = temp ;

        i-- ;
    }
    
    for ( i = 0 ; i < 3 ; i++)
    {
        printf("%d",tab[i]);
    }
*//*
    int T[Nmax] , i , X , pos , N ;

    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N <= 0 || N > Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }
    
    printf("entrer la valeur que vous voulez inserer : ");
    scanf("%d",&X);

    do
    {
        printf("entrer la position dont laquel vous voulez inserer : ");
        scanf("%d",&pos);
    } while ( pos < 0 || pos > N );
    
    printf("le tableau avent insertion : \n");

    for ( i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
    
    for ( i = N ; i >= pos ; i-- )
    {
        T[i] = T[i-1] ;
    }

    T[pos-1] = X ;
    N ++ ;

    printf("\n le tableau apres l'insertion : \n");

    for ( i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
*/
    int T[Lmax][Cmax] , i , j , Somme_de_diagonale = 0 , k = 0 , C , L ;
    
    do
    {
        printf("Ligne / Colonne : ");
        scanf("%d%d",&L,&C);
    } while ( L < 0 || L > Lmax || C < 0 || C > Cmax );
    
    for ( i = 0 ; i < L ; i++)
    {
        for ( j = 0 ; j < C ; j++)
        {
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);
        }
        
    }
    
    for ( i = 0 ; i < L ; i++)
    {
        for ( j = 0 ; j < C ; j++)
        {
            if ( i == j )
            {
                Somme_de_diagonale += T[i][j] ;
            }    
        }
    }
    
    for ( i = 0 ; i < L ; i++)
    {
        for ( j = 0 ; j < C ; j++)
        {
            if ( i > j )
            {
                if ( T[i][j] != 0 )
                {
                    k++ ;
                }
                
            }
            
        }
        
    }

    if ( k == 0 )
    {
        printf("la matrice est une diagonal superieur \n");
    }
    else
    {
        printf("la matrice n'est pas supererieur \n");
    }
       
    printf("la somme de la diagonale principale : %d \n",Somme_de_diagonale);
}