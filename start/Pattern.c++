// pattern questions 

#include<iostream>
using namespace std;
int main() {
/*
    int k;
    cin>>k;
 //agar hum j = 0 lete toh hume ik zayada pattern milta 
 
    int row =1;

    while (row<=k)
    {
        int column = 1;
        while (column <= k)
        {
            cout<< "*";
            column = column+1;
        }
        cout<<endl;
        
        row = row +1;
    }
 



 //  for forward print 1 TO n 

    int n;
    cin>>n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j = j + 1; 
        } 
        cout<<endl;

        i = i + 1;   
    }



    //  for backward print 1 TO n 

    int n;
    cin>>n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n-j+1;
            j = j + 1; 
        } 
        cout<<endl;

        i = i + 1;   
    }
 


    //  TO PRINT
    //   1 2 3
    //   4 5 6
    //   7 8 9

    int n;
    cin>>n;
    int row = 1;
    int count = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << count<< " ";
            count = count + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
    



 //  for triangle pattern 

    int n;
    cin>>n;
    int row = 1;
    

    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            cout << "*";
            column = column + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }




   //same for but like 
   // 1
   // 2 2
   // 3 3 3
   // 4 4 4 4

   int n;
    cin>>n;
    int row = 1;
    

    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            cout << row;
            column = column + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
    



    // TO PRINT 
    // 1 
    // 2 3
    // 4 5 6 
    // 7 8 9 10

    int n;
    cin>>n;
    int row2 = 1;
    int count = 1;

    while (row2 <= n)
    {
        int col = 1;
        while (col <= row2)
        {
            cout << count<< " ";
            count = count + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row2 = row2 + 1;   
    }
 


    // TO PRINT 
    //    1
    //    2 3
    //    3 4 5
    //    4 5 6 7

          // ist method  

    int n;
    cin>>n;
    int row3 = 1;

    while (row3 <= n)
    {
        int col = row3;
         int value  = 1;

        while (col <= row3)
        {   
            cout << value << " " ;
            value = value + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row3 = row3 + 1;   
    }

        //  2nd method 

    int n;
    cin>>n;
    int row3 = 1;

    while (row3 <= n)
    {
        int col = row3;
         int value  = row3;

        while (col <= row3*2)
        {   
            cout << value << " " ;
            value = value + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row3 = row3 + 1;   
    }

    

    // TO PRINT 
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= row)
        {   
            cout << row-col+1 << " " ;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
 


    // TO PRINT 
    // A A A 
    // B B B 
    // C C C 
 // rows same column different  

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= n)
        {   
            char ch = 'A' + row - 1;
            cout << ch << " " ;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
    

    
    // TO PRINT 
    // A B C 
    // A B C 
    // A B C 
 // COLUMNS same ROWS different

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= n)
        {   
            char ch = 'A' + col - 1;
            cout << ch << " " ;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
 


    // TO PRINT 
    // A B C 
    // D E F
    // G H I 
 // same increasing as counting one just store the variable as char 

    int n;
    cin>>n;
    int row = 1;
    char start = 'A';

    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << start << " ";
            start = start + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
    


    // TO PRINT 
    // A B C 
    // B C D 
    // C D E 

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= n)

        {   char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
    
    


    // TO PRINT 
    // A 
    // B B 
    // C C C 

    int n;
    cin>>n;
    int row = 1;
    
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + row -1;
        while (col <= row)
        {
            cout << ch << " " ;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
  



    // TO PRINT 
    // A 
    // B C 
    // D E F 
    // G H I J 

    int n;
    cin>>n;
    int row = 1;
    char value = 'A';

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << value << " ";
            value = value + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }

    


    // TO PRINT 
    // A 
    // B C 
    // C D E 
    // D E F G

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {   
            char value = 'A' + row + col - 2;
            cout << value << " ";
            value = value + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }




    // TO PRINT 
    // D 
    // C D 
    // B C D 
    // A B C D 

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        char value = 'A' + n - row;
        while (col <= row)
        {   
            cout << value << " ";
            value = value + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;
    }
 


    
    // TO PRINT 
    // ---*
    // --**
    // -***
    // ****

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {    
        // space print karlo 
        int space = n - row;
        while (space)
        {   
            cout << " ";
            space = space - 1;
        } 
        // stars print karlo
        int col = 1; 
        while (col <=  row)
        {    
            cout << "*";
            col = col + 1;
        }
        
        cout<<endl;

        row = row + 1;
    }
    
    



    // TO PRINT 
    // ****
    // ***
    // **
    // *

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {    
        // stars print karlo
        int col = 1; 
        while (col <= n- row + 1)
        {    
            cout << "*";
            col = col + 1;
        }
        
        cout<<endl;

        row = row + 1;
    }
  



    
    // TO PRINT 
    //  ****
    //   ***
    //    **
    //     *

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {    
        // space print karlo 
        int space = row - 1;
        while (space)
        {   
            cout << " ";
            space = space - 1;
        } 
        // stars print karlo
        int col = 1; 
        while (col <= n - row + 1)
        {    
            cout << "*";
            col = col + 1;
        }
        
        cout<<endl;

        row = row + 1;
    }
 




    
     // TO PRINT 
    // ---1
    // --22
    // -333
    // 4444
    
    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {    
        // space print karlo 
        int space = n - row;
        while (space)
        {   
            cout << " ";
            space = space - 1;
        } 
        // stars print karlo
        int col = 1; 
        while (col <=  row)
        {    
            cout << row;
            col = col + 1;
        }
        
        cout<<endl;

        row = row + 1;
    } 



     

    // TO PRINT 
    //  1111
    //   222
    //    33
    //     4

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {    
        // space print karlo 
        int space = row - 1;
        while (space)
        {   
            cout << " ";
            space = space - 1;
        } 
        // stars print karlo
        int col = 1; 
        while (col <= n - row + 1)
        {    
            cout << row;
            col = col + 1;
        }
        
        cout<<endl;

        row = row + 1;
    }
  
 


    
    // TO PRINT 
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    int n;
    cin>>n;
    int row = 1, num =1;

    while (row <= n)
    {    
        // space print karlo 
        int space = 1, col = 1;
        while (space <= n - 1)
        {   
            cout << " ";
            space = space + 1;
        } 
        // stars print karlo
        while (col <= row)
        {    
            cout << num << " " ;
            num = num + 1;
            col = col + 1;
        }
        
        cout<<endl;

        row = row + 1;
    }



   
    // TO PRINT 
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while(col <= row) {
            cout << row << " ";
            col = col+1;
        }
        cout << endl;
        row = row + 1;
    }
    


    

    // TO PRINT 
    // 1 1 1 1
    // 2 2 2
    // 3 3 
    // 4

    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while(col <= n-row+1) {
            cout << row << " ";
            col = col+1;
        }
        cout << endl;
        row = row + 1;
    }
    
   



    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while(col <= n-row+col) {
            cout << row << " ";
            col = col+1;
        }
        cout << endl;
        row = row + 1;
    }

    
     



    // TO PRINT 
    // 1 
    // 2 3
    // 3 4 5 
    // 4 5 6 7 

    int n;
    cin >> n;
    int row = 1;
    int toprint = 1;
    while (row <= n)
    {
        int col = 1;
        toprint = row;
        while(col <= row) {
            cout << toprint << " ";

            toprint = toprint + 1;
            col = col+1;
        }
        cout << endl;
        row = row + 1;
    }
  




    // TO PRINT 
     //    1
    //    121
    //   12321
    //  1234321 


   int n;
   cin>>n;
   
   int row = 1;
   while (row <= n)
   {
        // print krao space(ist triangle) 

        int space = n - row;
        while (space)
        {
            cout <<" ";
            space = space - 1;
        }

        // print 2nd triangle

        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }
        
        // print 3rd triangle 

        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        

        cout << endl;
        row = row+ 1;
   }
   */
   
    
}

   