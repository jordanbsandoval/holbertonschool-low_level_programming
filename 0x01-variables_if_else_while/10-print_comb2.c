#include <stdio.h>
/**
 * main - program that prints the numbers from 00 to 99.
 * Return: exit successful.
 */
int main(void)
{
	unsigned int FirstDigit, SecondDigit, StoredCharacter, Accountant;

	FirstDigit = '0';
	SecondDigit = '0';
	Accountant = 0;
	StoredCharacter = '0';

	while (StoredCharacter != ('\n' + 1))
	{
		putchar(StoredCharacter);

		if (SecondDigit > '9')
			SecondDigit = '0', FirstDigit++;

		if (StoredCharacter >= '0' && StoredCharacter <= '9')
			Accountant++;

		if (Accountant == 1)
			StoredCharacter = SecondDigit, SecondDigit++;

		if (Accountant == 2)
			StoredCharacter = ',', Accountant = 0;
		else if (StoredCharacter == ',')
			StoredCharacter = ' ';
		else if (StoredCharacter == ' ')
			StoredCharacter = FirstDigit;
		if (StoredCharacter == '\n')
			StoredCharacter++;
		else if (FirstDigit == ('9' + 1))
			StoredCharacter = '\n';
	}
	return (0);
}
