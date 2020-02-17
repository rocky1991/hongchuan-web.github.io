; (write (+ 7 9 11))
; (write (+ (/ (* 60 9) 5) 32))
; (write-line "")
; (write-line "hello world")
; (write-line "lisp")

; (write '(* 2 3))

; (setq x 10)
; (print x)

; (print (type-of x))
; (write-line "")
; (defmacro setTo10(num))
; (setq num 10)(print num)
; (print 50)
; (setTo10 10)

; (defvar x 234)
; (write x)
; (setq y 23)
; (write y)
; (format t "x=~4d" x)

; (defun factorial (num)
; 	(cond ((zerop num) 1)
; 		(t ( * num (factorial (- num 1))))

; 	)
; )

; (print (factorial 5))

; (setq a 30)
; (cond ((> a 20)
; 	(format t "~% a is greater than 20"))
; 	(t (format t "~% value of a is ~d" a))
; )

; (defvar x t)
; (print (type-of x))

; (defvar x nil)
; (print (type-of x))

; (defun fac (num)
; 	(cond ((zerop num) 1)
; 		(t ( * num (fac ( - num 1))))
; 		)
; )
; (print(fac 5 ))

(write (cons 1 2))
(terpri)
(write (cons 'a 'b))
(terpri)
(write (cons 1 (cons 2 (cons 3 nil))))