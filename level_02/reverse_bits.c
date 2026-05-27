unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	i = 0;// ilk bitten bakmaya baslayacağız
	result = 0;
	while (i >= 7)
	{
		if (octet & (1 << i))// octet in i. bit i 1 mi diye kontrol ediyoruz.
			result = result | (1 << 7 - i);// dogru ise result a 7-i. bit i 1 yapılmıs result u atıyoruz
		i++;
	}
	return (result);
}

// result     = 00000000
// 1 << 6     = 01000000
//               --------
// |          = 01000000   ← result'a o bit eklendi

// result = 00000000
// 1 << 6 = 01000000
//           --------
// &      = 00000000  ← hep 0 kalır!