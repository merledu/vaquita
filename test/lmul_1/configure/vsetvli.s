.text
.global main
main:
    addi x6 ,x0,32
    vsetvli x5,x6 , e32,m1,tu,mu
