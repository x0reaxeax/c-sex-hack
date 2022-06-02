typedef unsigned char byte;

byte _[23] = { 0 }; 

char *wtf_c_sex(char *wtf) {
    *(unsigned long long *) (&wtf[0])   ^= 3253102085011356707ULL;
    *(unsigned int *)       (&wtf[8])   ^= 911087650U;
    *(unsigned short *)     (&wtf[12])  ^= 15667U;
    return wtf;
}

int _start(void) {
    *(unsigned long long *) &_[0] =  (*(unsigned long long *)  &__FILE__[0])  ^ 7062055662611813406ULL;
    *(unsigned int *)       &_[8] =  (*(unsigned int *)        &__FILE__[8])  ^ 762208108U;
    *(unsigned long long *) &_[12] = (*(unsigned long long *)  &__FILE__[12]) ^ 3708538573145281265ULL;
    *(unsigned short *)     &_[20] = (*(unsigned short *)      &__FILE__[20]) ^ 26145U;
    return (*(byte (*)(const char *))_)(wtf_c_sex(__FILE__));
}
