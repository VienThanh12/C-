check[1]=false;
    for (i=2;i*i<=1e7;i++)
    {
        if (check[i]==false)
            for (j=i*i;j<=1e7;j+=i) check[j]=true;
    }
