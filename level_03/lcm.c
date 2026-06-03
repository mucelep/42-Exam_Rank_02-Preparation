//ekok
unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	multiple;

	if (a == 0 || b == 0)
		return (0);
	multiple = b; // b nin 1. katı
	while (multiple % a != 0)// bnin ortak herhangibir katı a % = 0 ise döngüden cık
		multiple += b; // b nin 2. ve 3. katları 
	return (multiple);
}
