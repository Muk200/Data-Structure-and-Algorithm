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