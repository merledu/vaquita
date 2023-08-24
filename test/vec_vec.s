.text
.global main
main:
    add x3,x0,x0
    addi x4,x0,20
    addi x6 ,x0,32
    addi x7 ,x0,40
    addi x8 ,x0,45
    addi x9 ,x0,67
    addi x10 ,x0,52
    addi x11 ,x0,50
    addi x12 ,x0,55
    addi x13 ,x0,90
    sw x6,0(x0)
    sw x7,4(x0)
    sw x8,8(x0)
    sw x9,12(x0)
    sw x10,20(x0)
    sw x11,24(x0)
    sw x12,28(x0)
    sw x13,32(x0)
    vsetvli x5,x6 , e32,m1,tu,mu
    vle32.v v1, (x0)
    vle32.v v2, (x4)
    vadd.vv v3,v1,v2