/**
 * 伪随机数发生器，P36
 */
unsigned long int next = 1;
int rand(void){
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65535) % 32768;
}

void srand(unsigned int seed){
    next = seed;
}
