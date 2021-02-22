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

; (write (cons 1 2))
; (terpri)
; (write (cons 'a 'b))
; (terpri)
; (write (cons 1 (cons 2 (cons 3 nil))))

; (setq aList '(a b b a))
; (terpri)
; (setq tf (eq (car aList) (car (reverse aList))))

; (write tf)
; (cond ((eq (car aList) (car (reverse aList))) (write "equal"))
; 	(t (write "hello"))
; )
; (setq theRest (cdr aList))
; (terpri)
; (write theRest)
; (setq nextRest (cdr theRest))
; (terpri)
; (write nextRest)

; (defun pl (aList)
; 	(if (eq aList nil)
; 		(return-from pl t)
; 	)

; 	(setq fElem (car aList))
; 	(setq lElem (car (reverse aList)))
	
; 	(setq rFirst (cdr aList))
; 	(setq rBoth (cdr (reverse rFirst)))

; 	(cond ( (not (equal fElem lElem) )
; 		(return-from pl nil))
; 		(t (pl rBoth))
; 	)
; )

; (write (pl '(a b (d e) (e d) b a)))
; (terpri)
; (write (pl '(n a n a a n a n)))
; (terpri)
; (write (pl '(n a n a a n)))

(defun palindromep (input)
(setq first (car input))
(setq list1 (cdr input))
(setq rev (reverse list1))
(setq lvar (car rev))
(setq list2 (cdr rev))

   (cond ((null list2) nil)
   ((equal first lvar) (palindromep list2))
   )
)

(print(palindromep '(a b b a)))
(print(palindromep '(a b c b a)))
(print(palindromep '(a b c)))
(print(palindromep '(a (d e) b (d e) a)))
(print(palindromep '(a (d e) b (e d) a)))

