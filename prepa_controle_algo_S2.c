#include<stdio.h>
#define Nmax 100

void main ()
{
/*
    int T[Nmax] , N , i , S = 0 , j , k , inv , r , palindrome = 1 , max1 , max2 , temp ;

    do
    {
        printf("entrer la taille du tableau : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);

        if ( i == 0 )
        {
            max1 = T[i] ;
            max2 = T[i] ;
        }
        
    }
    
    // supprimer doublons 
    for ( i = 0 ; i < N ; i++)
    {
        for ( j = i + 1 ; j < N ; j++)
        {            if ( T[i] == T[j] )
            {
                for ( k = j ; k < N - 1 ; k++)
                {
                    T[k] = T[k + 1] ;
                }

                N--;
                j--; 
            }
        }
    }

    // somme des paires
    for ( i = 0 ; i < N ; i++)
    {
        if ( T[i] % 2 == 0 )
        {
            S += T[i] ;
        }

    }
    
    // palindrome
    for ( i = 0 ; i < N / 2 ; i++ )
    {
        if ( T[i] != T[N-1-i] )
        {
            palindrome = 0 ;
            break; 
        }
        
    }

    // deuxieme grand nombre du tableau 
    for ( i = 0 ; i < N ; i++)
    {
        if ( T[i] > max1 ) 
        {
            max2 = max1 ;
            max1 = T[i] ;
        }
        else if ( T[i] > max2 && T[i] < max1 ) 
        {
            max2 = T[i] ;
        }
        
    }
    
    // inversement 
    for (i = 0; i < N / 2; i++) 
    {
        temp = T[i] ;
        T[i] = T[N - 1 - i] ;
        T[N - 1 - i] = temp ;
    }
    
    printf("le deuxieme plus grand du tableau : %d \n",max2);
    printf("la sommme des paires est : %d \n",S);
    
    printf("le tableau inverse est : \n");
    for ( i = 0 ; i < N ; i++)
    {
        printf(" %d \t",T[i]);
    }

    if ( palindrome == 1 )
    {
        printf("\n le tableau est un palindrome \n");
    }

    else
    {
        printf("\n le tableau n'est pas un palindrome \n");
    }
        
*/
    int T[Nmax] , i , N , temp , j ;

    do
    {
        printf("entrer la taille du tableau : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    
    for ( i = 0 ; i < N ; i++)
    {
        temp = T[i] ;
        j = i - 1 ;

        while ( j >= 0 && T[j] > temp )
        {
            T[j+1] = T[j] ;
            j -- ;
        }
        
        T[j+1] = temp ;
    }

    printf("le tableau trie est : \n");

    for ( i = 0 ; i < N ; i++)
    {
         printf("%d \t",T[i]);
    }
    
    printf("\n le tri par ordre decroissant est : \n");

    for ( i = 0 ; i < N ; i++)
    {
        printf(" %d \t",T[N-1-i]);
    }


}