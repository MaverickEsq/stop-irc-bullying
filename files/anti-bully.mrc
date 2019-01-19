alias bully {
  var %m I feel offended by your recent action(s). Please read http://stop-irc-bullying.info/stop
  if ($1) {
    var %i 1
    while (%i <= $0) {
      say $($ $+ %i,2) $+ : %m
      inc %i
    }
  }
  else {
    say $active $+ : %m
  }
}

menu nicklist {
  .bully-warn $snicks:bully $replace($snicks,$chr(44),$chr(32))
}
