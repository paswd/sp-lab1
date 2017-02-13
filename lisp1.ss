(define (SmallestDiv n)
 (FindDiv n 2))

(define (Divides? a b)
  (= (remainder b a) 0))

(define (SPASquare n)
  (* n n ))

(define (FindDiv n current)
  (cond ((> (SPASquare current) n) n)
        ((Divides? current n) current)
        (else (FindDiv n (+ current 1)))))

(define (Prime? n)
  (cond ((< n 2) #f)
  (else (= n (SmallestDiv n)))))
  