bool isprime(int n)
{
	if(n==1)
	return false;
	int count=0;
	if(n==2)
	return true;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==1)
	return true;
	else
	return false;
}