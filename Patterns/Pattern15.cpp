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