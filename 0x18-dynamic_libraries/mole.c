static int val = 0;

int rand(void){
	int luck[] = {8, 8, 7, 9, 23, 74};
	int i = val;

	val++;
	if (val >= 6)
		val = 0;

	return luck[i];
}
