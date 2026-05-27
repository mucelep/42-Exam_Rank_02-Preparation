#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;

	i = 7;// 7 cunku sagdan solda dogru yazdırıyoruz en son bitten baslamamız laızm 
	while (i >= 0)
	{
		if (octet & (1 << i)) //i. bit i 1 mi diye kontrol ediyoruz
			write(1, "1", 1);//dogru ise 1
		else
			write(1, "0", 1);//yanlıs ise 0 yazdırıyoruz
		i--;
	}
}
int main()
{
	print_bits(97);
}

// result     = 00000000
// 1 << 6     = 01000000
//               --------
// |          = 01000000   ← result'a o bit eklendi

// result = 00000000
// 1 << 6 = 01000000
//           --------
// &      = 00000000  ← hep 0 kalır!