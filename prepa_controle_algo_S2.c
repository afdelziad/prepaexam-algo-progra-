#include<stdio.h>
#define Nmax 100
#define Lmax 100
#define Cmax 100

void main ()
{
/* ( exercice 1 )

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
        
*//* ( exercice 2 )
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

*//* ( exercice 3 )

    int T[Lmax][Cmax] , Tab[Lmax][Cmax] , i , j , L , C , cpt = 0 , Sl = 0 , max = 0 ;

    do
    {
        printf("Ligne / Colonne : ");
        scanf("%d%d",&L,&C);
    } while ( L < 0 || L > Lmax || C < 0 || C > Cmax );
    
    for ( i = 0 ; i < L ; i++)
    {
        for ( j = 0; j < C ; j++)
        {
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);
        }
    }

    printf("\n la matrice est : \n");

    for ( i = 0 ; i < L ; i++)
    {
        for ( j = 0 ; j < C ; j++)
        {
            printf("%d \t",T[i][j]);
        }

        printf("\n");
    }
    
    // symetrie 

    if ( L != C )
    {
        printf("La matrice n'est pas symetrique \n");
    }

    else
    {
        for ( i = 0 ; i < L ; i++ )
        {
            for ( j = 0 ; j < C ; j++ )
            {
                if ( i != j )
                {
                    if ( i >= j )
                    {
                        cpt ++ ;
                        break ;
                    }
                }
            }
        }
    
        if ( cpt == 0 )
        {
            printf("la matrice est symetrique \n");
        }
        else
        {
            printf("la matrice n'est pas symetrique \n");    
        }
    }

    // la somme de chaque ligne

    for ( i = 0 ; i < L ; i++)
    {
        Sl = 0 ;

        for ( j = 0 ; j < C ; j++)
        {
            Sl += T[i][j] ;
        }
        
        printf("la somme de la %d lignes est : %d \n",i,Sl);
    }
    
    // le maximum

    max == T[0][0] ;

    for ( i = 0 ; i < L ; i++)
    {
        for ( j = 0 ; j < C ; j++)
        {
            if ( T[i][j] >= max )
            {
                max = T[i][j] ;
            }
        }
    }

    // transposer 

    for ( i = 0 ; i < L ; i++ )
    {
        for ( j = 0 ; j < C ; j++)
        {
            Tab[j][i] = T[i][j] ;
        }

    }

    printf("la matrice transpose est : \n");

    for ( i = 0 ; i < C ; i++)
    {
        for ( j = 0 ; j < L ; j++)
        {
            printf("%d \t",Tab[i][j]);
        }

        printf("\n");
    }

*/ 
    int A[Nmax] , B[Nmax] , TAB[Nmax] , i , j , temp , Na , Xb ;

    do
    {
        printf("entrer la taille du premier tableau : ");
        scanf("%d",&Na);
    } while ( Na < 0 || Na > Nmax );
    
    do
    {
        printf("entrer la taille du deuxieme tableau : ");
        scanf("%d",&Xb);
    } while ( Xb < 0 || Xb > Nmax );
    
    printf("\n Remplissage du tableau A : \n");
    
    for ( i = 0 ; i < Na ; i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    
    printf("\n Remplissage du tableau B : \n");
    
    for ( i = 0 ; i < Xb ; i++)
    {
        printf("B[%d] = ",i);
        scanf("%d",&B[i]);
    }

    // Tri du tableau A 

    for ( i = 0 ; i < Na ; i++)
    {
        for ( j = i + 1 ; j < Na  ; j++)
        {
            if ( A[i] > A[j] )
            {
                temp = A[i] ; 
                A[i] = A[j] ;
                A[j] = temp ;
            }
        }    
    }

    // Tri du tableau B

    for ( i = 0 ; i < Xb ; i++)
    {
        for ( j = i + 1 ; j < Xb  ; j++)
        {
            if ( B[i] > B[j] )
            {
                temp = B[i] ; 
                B[i] = B[j] ;
                B[j] = temp ;
            }
        }
    }

    // Somme des deux tableaux

    for ( i = 0 ; i < Na ; i++)
    {
        TAB[i] = A[i] ;
    }
    
    for ( i = 0 ; i < Xb ; i++)
    {
        TAB[Na+i] = B[i] ;
    }
    
    // Tri du grand taleau 

    for ( i = 0 ; i < Na + Xb ; i++)
    {
        for ( j = i + 1 ; j < Na + Xb  ; j++)
        {
            if ( TAB[i] > TAB[j] )
            {
                temp = TAB[i] ; 
                TAB[i] = TAB[j] ;
                TAB[j] = temp ;
            }
        }
    }

    printf("\n Le grand tableau est : \n");

    for ( i = 0 ; i < Na + Xb ; i++)
    {
        printf("%d \t",TAB[i]);
    }
    
}
