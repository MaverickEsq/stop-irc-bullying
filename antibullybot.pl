use Irssi;
use Irssi::Irc;
use vars qw($VERSION %IRSSI);

$VERSION = "0.1";
%IRSSI = (
        authors         => 'Nico Bengtsson',
        contact         => 'stop-irc-bullying@stop-irc-bullying.info',
        name            => 'AntiBullyBot',
        description     => 'Bot for Stop IRC Bullying Foundation',
        license         => 'WTFPL',
        );


sub antibullybot {
    my ($server, $data, $nick, $address) = @_;
    my ( $chan, $msg ) = split(' :', $data);

    if (!$server->ischannel($target)) {
        if (lc($msg) eq 'voice') {
            $server->command("MODE ##stop-irc-bullying +v $nick");
            $server->command("MSG $nick Sure thing!");
        }
    }
    if ($server->ischannel($chan)) {
        my @string = split(/ /, $msg);

        if ($string[0] eq '!bully') {
            $server->command("MSG $chan $string[1]: $nick feels offended by your recent action(s). Please read http://stop-irc-bullying.info/stop");
        }
    }
}

sub greeter {
    my ($server, $data, $nick, $address) = @_;
    my ( $chan, $msg ) = split(' :', $data);

    if ($chan eq '##stop-irc-bullying') {
        $server->command("MSG $chan Welcome $nick! I hope you feel at home here!");
    }
}

Irssi::signal_add('event privmsg', \&antibullybot);
Irssi::signal_add('event join', \&greeter);
