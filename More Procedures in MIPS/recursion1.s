.data
prompt:	 .asciiz "Please enter a number: "

.text
main:
	addi $sp, $sp, -4
	li $v0, 4
	la $a0, prompt
	syscall
	
	li $v0, 5
	syscall
	add $a0, $0, $v0
	
	jal recursion
	
	add $a0, $0, $v0
	
	li $v0, 1
	syscall
	
	j end
	
	
recursion:	
	addi $sp, $sp -12
	
	sw $ra, 0($sp)
	sw $v0, 4($sp)
	
	bne $a0, -1, not_minus_one
	
	li $v0, 3
	
	j end_recur

not_minus_one:
	bne $a0, -2, not_minus_two
	
	li $v0, 1
	
	j end_recur
	

not_minus_two:
	bgt $a0, -2, greater_than_minus_two
	
	li $v0, 2
	
	j end_recur

greater_than_minus_two:
	sw $a0, 8($sp)
	
	addi $a0, $a0, -3
	add $v0, $0, $a0
	
	jal recursion
	
	sw $v0, 4($sp)
	
	lw $a0, 8($sp)
	addi $a0, $a0, -2
	
	jal recursion
	
	lw $t0, 8($sp)
	lw $t1, 4($sp)
        add $v0, $t0, $v0
        add $v0, $t1, $v0
        
        j end_recur
	
	

end_recur:
	lw $ra, 0($sp)
	addi $sp, $sp, 12
	jr $ra

end:	
	addi $sp, $sp 4
	li $v0, 10
	syscall