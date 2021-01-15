void swap(int *p , int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len -i-1; j++)
        {
            if (p[i]>p[i+1])
            {
                int temp = p[i +1];
                p[i + 1] = p[i];
                p[i] = temp;
            }
            
        }
        

    }
        
}