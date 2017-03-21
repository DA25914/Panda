void function(int a, int b, int c){
	char buffer1[5];
	char buffer2[10];
	int *ret;

	ret = buffer1+13;
	(*ret) += 7;
}

void main(){
	int x;
	x = 0;
	function(1,2,3);
	x = 1;//skipped
	x += 2;
	return x;
}
