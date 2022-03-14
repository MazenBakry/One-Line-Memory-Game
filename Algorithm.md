# One-Line-Memory-Game
One line memory game


1. Declare  score1=0, score2=0
2. Declare char= [‘A’,
3. Declare lst=
4. Declare org_lst=
5. Print Welcome and lst
6. Function Player1:
Pass in score1
Read num1 
While (num1>20) or (num1<1):
	Print invalid input
	Read num1
Read num2 
While (num2>20) or (num2<1):
	Print invalid input
	Read num2

Declare x=num1-1 , y=num2-1

For i=0 to i<20:
	if(x==i):
		lst[i]=char[i]
		Declare a=char[i]
	if(y==i):
		lst[i]=char[i]
		Declare b =char[i]

Print lst

If (a==b):
	score1+=1
	For i=0 to i<20:
		if(lst[i]==a):
			lst[i]=’*’
		if(lst[i]==b):
			lst[i]=’*’

Else:
For i=0 to i<20:
		if(lst[i]==a):
			lst[i]=org_lst[i]
		if(lst[i]==b):
			lst[i]=org_lst[i]

Clear screen
Print player1 score is score1
Print lst and player2 turn
Return score1
	

7. Function Player2:
Pass in score2
Read num3 
While (num3>20) or (num3<1):
	Print invalid input
	Read num3
Read num4
While (num4>20) or (num4<1):
	Print invalid input
	Read num4

Declare x=num1-1 , y=num2-1

For i=0 to i<20:
	if(x==i):
		lst[i]=char[i]
		Declare a=char[i]
	if(y==i):
		lst[i]=char[i]
		Declare b =char[i]

Print lst

If (a==b):
	score1+=1
	For i=0 to i<20:
		if(lst[i]==a):
			lst[i]=’*’
		if(lst[i]==b):
			lst[i]=’*’

Else:
For i=0 to i<20:
		if(lst[i]==a):
			lst[i]=org_lst[i]
		if(lst[i]==b):
			lst[i]=org_lst[i]

Clear screen
Print player2 score is score2
Print lst and player1 turn

Return score2
	


8. Function Winner:
	Pass in score1 and score2
	if(score1>score2):
		Print Player1 wins with score: score1
		exit
	
	if(score2>score1):
		Print Player2 wins with score: score1
		Exit


9. While (True):
	For i=0 to i<5:
		player1(score1)
		player2(score2)
		Print Welcome and lst
	winner(score1,score2)
	
