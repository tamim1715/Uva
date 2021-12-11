#include <iostream>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <fstream>
using namespace std ;

int old[28][28] ;
int young [28][28] ;
set <char> ans ;
int n;

int main(){
   //freopen("tamim.txt", "w", stdout);
  int i , j ,weight ;
  char p ,w ,s ,d ;
   while ( cin >> n){
       if ( n == 0)
        break ;

        for ( i = 0 ; i < 28 ; i++)
        for ( j = 0 ; j < 28 ; j++)
            if ( i != j)
            old[i][j] = young [i][j] = 100000;
            else
            old[i][j] = young [i][j] = 0 ; // i made a mistake here . so check this point .

        for ( i = 0 ; i < n ; i++){
             cin >> p >> w >> s >> d >> weight ;
             if ( p == 'Y'){
                 if ( w == 'U'){
                    young [ s - 'A' ] [ d - 'A' ] = weight ;
                    young [ s - 'A' ] [ s - 'A' ] = 0 ; young [ d - 'A' ] [ d - 'A' ] = 0;
                 }
                 else {
                    young [ s - 'A' ] [ d - 'A' ] = weight ;
                    young [ d - 'A' ] [ s - 'A' ] = weight ;  young [ s - 'A' ] [ s - 'A' ] = 0 ; young [ d - 'A' ] [ d - 'A' ] = 0;
                 }
             }
             else {
                  if ( w == 'U'){
                          old [ s - 'A' ] [ d - 'A' ] = weight ;
                           old [ s - 'A' ] [ s - 'A' ] = 0 ; old[ d - 'A' ] [ d - 'A' ] = 0;

                  }
                  else {
                           old [ s - 'A' ] [ d - 'A' ] = weight ; old[d-'A'][s-'A'] = weight ;
                           old [ s - 'A' ] [ s - 'A' ] = 0 ; old[ d - 'A' ] [ d - 'A' ] = 0;

                  }
             }
        }


        for ( int k = 0 ; k < 28 ; k++)
        for ( i = 0 ; i < 28 ; i++)
        for ( j = 0 ; j < 28 ; j++)
        {
            young [i][j] = min ( young [i][j] , young[i][k] + young [k][j] );
             old [i][j] = min ( old [i][j] ,  old [i][k] + old [k][j] );
        }

        cin >> p >> w ;
        int largest = 100000;
        ans.clear() ;

        for ( i = 0 ; i < 28 ; i++)
        if ( young [ p - 'A'] [i] + old [ w - 'A'][i] < largest )
        {
            ans .clear () ;
            ans .insert (  i + 'A' );
                       largest = young [ p - 'A'] [i] + old [ w - 'A'][i] ;

        }
        else if ( young [ p - 'A'] [i] + old [ w - 'A'][i] == largest && largest < 100000)
        {
                        ans .insert (  i + 'A' );
        }

        set < char > :: iterator  it ;
        it = ans.begin() ;
        if ( ans.size () == 0 )
            printf("You will never meet.\n");
        else {
            printf("%d", largest);
            for ( it = ans.begin(); it != ans.end() ; it++)
                printf(" %c",*it);
            printf("\n");
        }

   }
    return  0;
}
