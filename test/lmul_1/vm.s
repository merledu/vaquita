.text
.global main
main:
    addi x3,x0,9
    addi x6 ,x0,3
    vsetvli x5,x6 , e32,m1,ta,ma
    vmv.v.x v0,x3
    vadd.vi v2,v1,10
    vadd.vi v3,v1,5
    vadd.vv v4,v2,v3,v0.t
