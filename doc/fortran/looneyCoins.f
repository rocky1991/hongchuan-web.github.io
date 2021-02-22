	PROGRAM looneyCoins
	IMPLICIT NONE
	
	INTEGER :: ioerror
	INTEGER :: total,int,lunkerCoin,loonterCoin,littleCoin,PooneyCoin
	INTEGER, PARAMETER :: Lunker=30, loonter=15, little=5, Pooney=1
	Character:: error = ' Input is out of range.'
	Character(LEN = 4) :: year, month*2, day*2
	Character(LEN = 2):: hour, minute
	Character(LEN = 8) :: DateINFO
	Character (LEN = 10):: TimeINFO
	
	print *, ''
	CALL DATE_AND_TIME(DateINFO, TimeINFO)
!	gets date and time information
	year = DateINFO(1:4)
	month = DateINFO(5:6)
	day = DateInfo(7:8)

	minute = TimeINFO(3:4)
	hour = TimeINFO(1:2)

!	prints date and time information
	print *, day, '-', month,'-',year, ', ', hour, ':',minute


!	asks for input until itg ets valid input
	DO 
	
	print *,'Enter an integer between 1 and 99:'
	read (*,'(i10)',iostat=ioerror) total
	!if input is an integer
	if(ioerror ==0)then
			
		IF(total < 100 .AND. total > 0)THEN
			 exit
		ELSE 
			print *,' Input is out of range.'
		END IF
	!if input is not an integer
	ELSE
		print *,' Invalid input.'
	END IF
	END DO

	!assigns values to the different coin types and then prints the total
	lunkerCoin = coinChange(lunker,total)
	total = total - (lunkerCoin*Lunker)
	
	write (*,'(A,i2)') "lunkerCoin is ", lunkerCoin

	IF(lunkerCoin > 0)THEN
		CALL printCoin(lunkerCoin, " Lunker,  ")
	END IF	

	loonterCoin = coinChange(loonter,total)
	total = total - (loonterCoin*loonter)

	write (*,'(A,i2)') "loonterCoin is ", loonterCoin

	IF(loonterCoin > 0)THEN
		CALL printCoin(loonterCoin, " Loonter, ")
	END IF
	
	littleCoin = coinChange(little,total)
	total = total - (littleCoin*little)
	write (*,'(A,i2)') "littleCoin is ", littleCoin
	IF(littleCoin > 0)THEN
		CALL printCoin(littleCoin, " Little,  ")
	END IF

	PooneyCoin = coinChange(Pooney,total)
	total = total - (PooneyCoin*Pooney)
	write (*,'(A,i2)') "PooneyCoin is ", PooneyCoin
	IF(pooneyCoin > 0)THEN
		CALL printCoin(pooneyCoin, " Pooney   ")
	END IF

	print *, ' '	

	CONTAINS
!		Function to calculate how many coins of a certain type are needed
		INTEGER FUNCTION coinChange(cents,total)
		IMPLICIT NONE
		INTEGER, INTENT(IN)::cents, total
		INTEGER :: coinNum

		coinNum = 0
		IF(total/cents >=1)THEN	
			coinNum = total/cents
		END IF

		coinChange = coinNum
		END FUNCTION coinChange 

!		Subroutine to print out number of coins and coin name	 
		SUBROUTINE printCoin(coin,coinName)
		IMPLICIT NONE
		INTEGER, INTENT(IN) :: coin
		CHARACTER, INTENT(IN) :: coinName*10

		if(coin>0)then
			write(*,'(i1,a10)',advance = 'no') coin, coinName
		end if
		END SUBROUTINE printCoin
	END PROGRAM looneyCoins
