if(array[1]=='0'&&is_one_ahead==1)
{
    is_one_ahead=0;
    tail++;
    count[tail]++;
}
else if(array[i]=='0')
    count[tail]++;
else if(array[i]=='1'&&is_one_ahead==0)
{
    is_one_ahead=1;
    tail++;
    count[tail]++;
}
else if(array[i]=='1')
{
    count[tail]++;
}
