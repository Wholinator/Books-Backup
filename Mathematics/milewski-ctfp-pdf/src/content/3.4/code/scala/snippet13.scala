def flatMap[A, B](ma: M[A])(f: A => M[B]): M[B] =
  flatten(fmap(f)(ma))