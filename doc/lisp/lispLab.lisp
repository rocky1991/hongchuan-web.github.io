;;Connie Bernard
;;CSCI 305
;;LISP LAB
;;2-19-2020

;; this function is the one given to us from hunter
;; it checks if the list given is a list, atom or is null
(defun testIf( alist )
    (cond
    ((null alist) 1) ;; list is null, will return 1
    ((atom alist) 2) ;; list is an atom, will return 2
    ((list alist) 3) ;; list is a list! will return 3
    (t 0) ;; for all other cases will return 0
   )
)

;; this function determines if the given list is a palindrome
(defun palindromep (checkList)
  (setq rev (reverse checkList)) ;; creates a reverse of the given list
  (setq o1 (car checkList)) ;; takes first element from original list
  (setq r1 (car rev)) ;; takes first element from reversed list
  ;; removes first and last element from original list
  (setq newList (reverse(cdr( reverse( cdr checkList))))) 
  (setq x (testIf newList)) ;; tests to see if shortened list is still a list
  (if (<= x 2) ;; if funtion returns less than 2 list is either null or an atom
    ;; if the list becomes null or an atom that means the function moved all the way through the list recurisivly and it is a palindrome. this we can return t
    (princ "t"))
  (if (> x 2) 
    (if (equal o1 r1) ;; checks if first and last element are equal 
      (palindromep newList) ;; calls palindrome funciton again if they are
     (princ "nil")))) ;; returns nil if they are not

;; asking user to input a list
(princ "Plese enter the list you wish to check: ")
(setq list2check (read)) ;; reading in list
(palindromep list2check) ;; checking if it is a palindrome

