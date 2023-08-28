.text
.global main
main:
    addi x1,x0,16
    addi x2,x0,20
    addi x3,x0,24
    addi x4,x0,28
    addi x5,x0,32
    addi x6 ,x0,36
    addi x7 ,x0,40
    addi x8 ,x0,44
    addi x9 ,x0,48
    addi x10 ,x0,52
    addi x11 ,x0,56
    addi x12 ,x0,60
    addi x13 ,x0,66
    addi x14 ,x0,56
    addi x15 ,x0,60
    addi x16 ,x0,64
    addi x17 ,x0,90
    sw x1,0(x0)
    sw x2,4(x0)
    sw x3,8(x0)
    sw x4,12(x0)
    sw x5,16(x0)
    sw x6,20(x0)
    sw x7,24(x0)
    sw x8,28(x0)
    sw x9,32(x0)
    sw x10,36(x0)
    sw x11,40(x0)
    sw x12,44(x0)
    sw x13,48(x0)
    sw x14,52(x0)
    sw x15,56(x0)
    sw x16,60(x0)
    vsetvli x5,x6 , e32,m1,tu,mu
    vle32.v v1, (x0)
    vle32.v v2, (x1)
    vle32.v v3, (x5)
    vle32.v v4, (x10)
    vadd.vv v5,v1,v2
    vadd.vv v6,v3,v4
    vadd.vv v7,v5,v6
    vse32.v v1, (x15)
    vse32.v v1, (x17)
    lw x20 90(x0)
    lw x21 94(x0)
    lw x22 98(x0)
    lw x23 102(x0)
    lw x24 60(x0)
    lw x25 64(x0)
    lw x26 68(x0)
    lw x27 72(x0)