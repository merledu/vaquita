.text
.global main
main:
    vadd.vi v2, v1,2
    vadd.vx v3, v2, x2
    vadd.vv v4,v2,v3
    vadd.vv v5,v2,v2
    vadd.vi v2, v1,7
    vse32.v v3 ,(x2) 
