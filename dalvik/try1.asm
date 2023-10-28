const/32 v0,<Input A>
const/32 v1,<Input B>
const/32 v2,<Input C>
const/32 v3,1

sub-int v4,1,1 // κάνει v4 <- 0
``` sub-int v5,0,1 // v5 <- -1
move v6,1
``` move v7,0
``` sub-int v7,v7,B
``` move v8,A
``` move v9,A // useless
add-int v9,A,B
``` move v10,0
``` move v11,0
move v12,1
	:l0
		``` add-int v11,v11,B
		``` add-int v10,v10,A
		move v13,A //move v13,v10
		move v14,0
		```move v15,0
		:l1
			add-int v16,v13,v13
			if-le v16,B,:l2
			sub-int v13,v13,B
			```add-int v14,v14,1
			```add-int v15,v15,B
			goto :l1
		:l2
			if-gt v13,0,:l3
			sub-int v13,0,v13
		:l3
			move v17,0
			move v18,1
		:l4
			add-int v17,v17,v13
			add-int v18,v18,1
			if-le v18,v6,:l4
			move v18,1
		:l5
			sub-int v17,v17,v9
			add-int v18,v18,1
			if-le v18,v12,:l5
			if-ge v17,0,:l6
			```move v5,v14
			move v6,v12
			``` move v7,v15
			``` move v8,v10
			move v9,v13
		:l6
			add-int v12,v12,1
			if-le v12,C,:l0
return v6
