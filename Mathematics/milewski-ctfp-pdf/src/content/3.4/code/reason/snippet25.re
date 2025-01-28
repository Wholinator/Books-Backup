module Process_Bind_Without_Do =
       (W: Monad_Bind with type m('a) = writer(string, 'a)) => {
  open Monad_Ops(W);

  let tell = w => Writer((), w);

  let process = s =>
    W.(up_case(s) >>= (up_str => tell("to_words") >> to_words(up_str)));
};
