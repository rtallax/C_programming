void reverse(char* begin, char* end)
{
	char temp;
	while (begin < end) {
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}
void reverseWords(char* s)
{
	char* word_begin = s;

	// Word boundary
	char* temp = s;
	// Reversing individual words as
	// explained in the first step
	while (*temp) {
		temp++;
		if (*temp == '\0') {
			reverse(word_begin, temp - 1);
		}
		else if (*temp == ' ') {
			reverse(word_begin, temp - 1);
			word_begin = temp + 1;
		}
	}
	puts(s);
	// Reverse the entire string
	reverse(s, temp - 1);
}

// Driver Code
int main()
{
	char s[] = "i like this program very much";
	char* temp = s;
	reverseWords(s);
	puts(s);
	return 0;
}
