.text
.global main
main:
    addi x8,x0,100
    addi x6 ,x0,32
    addi x7 ,x0,40
    sw x6,100(x0)
    sw x7,104(x0)
    sw x8,108(x0)
    vsetvli x5,x6 , e32,m1,tu,mu
    vle32.v v1, (x8)
    vadd.vv v2,v1,v1
