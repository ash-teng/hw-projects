(define (count item lst)
    (cond ((null? lst) 0)
          ((= (car lst) item) (+ 1 (count item (cdr lst))))
          (else (count item (cdr lst)))))


(define (tagmatch item lst)
    (cond ((null? lst) '())
          ((= (car lst) item) (cons 1 (tagmatch item (cdr lst))))
          (else (cons 0 (tagmatch item (cdr lst))))))

