        .data
x:      .word 1
y:      .word 2
z:	.word 3

        .text
main:   la $t0, x
        lw $s0, 0($t0) # $s0 = x
        la $t0, y
        lw $s1, 0($t0) # $s1 = y
        la $t0, z
        lw $s2, 0($t0) # $s2 = z

        add $a0, $zero, $s0
        add $a1, $zero, $s1
        add $a2, $zero, $s2
        
        jal foo

        add $s2, $s1, $s2   # y = y + x ...
        add $s0, $s0, $s2   # $a0 = y + sum($s0, $s1)
        add $s2, $v0, $s2
        
        add $a0, $zero, $s2 
	li $v0, 1
	syscall
	j end

foo:    addi $sp, $sp, -12
        # Save all values for later
        sw $ra, 8($sp)
        sw $s1, 4($sp) #q == s1
        sw $s0, 0($sp) #p == s0

        # Prepare registers $a0 & $a1 to pass through sub()

        # Add the original values passed into sum()
       	add $t0, $a0, $a2	
	add $t1, $a1, $a2
	add $t2, $a0, $a1

        # Prepare registers $a0 & $a1 to pass through sub()
        sub $t3, $a0, $a2
	sub $t4, $a1, $a0
	add $t5, $a1, $a1 

        add $a0, $zero, $t0
	add $a1, $zero, $t1
	add $a2, $zero, $t2
	
	jal bar
	
	add $s0, $zero, $v0
	
	add $a0, $zero, $t3
	add $a1, $zero, $t4
	add $a2, $zero, $t5
	
	jal bar
	 
	add $s1, $zero, $v0
	
	add $v0, $s0, $s1
	
	lw $s0, 0($sp)
	lw $s1, 4($sp)
	lw $ra, 8($sp)
	
	addi $sp, $sp -12
	
	jr $ra
bar:	
	sub $t0, $a1, $a0 #$a0 = a, $a1 = b, $a2 = c
	sllv $v0, $t0, $a2
	jr $ra

end: