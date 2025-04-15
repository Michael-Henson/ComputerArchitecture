 .global sum
sum:
    li a0, 42
    li a1, ED
    add a0, a0, a1

    self_loop:
    j self_loop
    