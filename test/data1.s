.text
.global main
main:
    addi x1,x0,40
    vsetvli x1,x2, e32, m1,tu,mu
    vadd.vi v10, v1, 5
