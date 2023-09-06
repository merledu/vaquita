.text
.global main
main:
    addi x6 ,x0,5
    vsetvli x5,x6 , e32,m1,tu,mu
    vadd.vi v2,v1,10
    vadd.vi v3,v1,5
    vsub.vv v4,v1,v2
    vand.vi v5,v4,10
    vand.vv v6,v4,v5
    vor.vi v7,v1,10
    vxor.vi v8,v6,10
    vmin.vx v9,v1,x6
    vminu.vi v10,v7,10
