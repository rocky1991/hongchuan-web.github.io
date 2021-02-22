;;==============;;
;;   Tim Osen   ;;
;;   CSCI 305   ;;
;; Assignment 2 ;;
;;   2/19/2020  ;;
;;==============;;

;; Defines a function "palindromep" that takes in a list as input
(defun palindromep (input)
  ;; Assigns input to a variable string named "Forward"
  (setq forward input)
  ;; Reverses the "forward" string and assigns it to a variable "Reversed" for comparison later
  (setq reversed (reverse forward) )
  ;; First if condition that determines if the considered input is empty. This is the "break" condition for recursion
  (if (equal forward '() ) (return-from palindromep t))
  ;; Assuming that there are still list items to be compared, this if condition compares the first and last object in the list
  (if (equal (car forward) (car reversed))
  ;; If the first and last letter are equal, this line chops off the first and last object and passes the remaining list again
  (palindromep (cdr(reverse(cdr forward)))))
  )


(write (palindromep '(a b b a)))
(terpri)
(write (palindromep '(a b c b a)))
(terpri)
(write (palindromep '(a b c)))
(terpri)
(write (palindromep '(a (d e) b (d e) a)))
(terpri)
(write (palindromep '(a (d e) b (e d) a)))
