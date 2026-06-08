unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	result;

	result = 0;
	result = result | (octet << 4);
	result = result | (octet >> 4);
	return (result);
}

// return((octet >> 4) | (octet << 4));