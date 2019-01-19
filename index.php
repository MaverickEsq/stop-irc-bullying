<?php
$page = rtrim($_GET["c"], '/');

require('./inc/header.inc');
switch ($page) {
	case "about":
	default:
		require('./inc/content/about.inc');
		break;
	case "what-is-bullying":
		require('./inc/content/what-is.inc');
		break;
	case "fighting-bullying":
		require('./inc/content/fighting.inc');
		break;
	case "live-chat":
		require('./inc/content/chat.inc');
		break;
	case "stop":
		require('./inc/content/stop.inc');
		break;
	case "contact":
		require('./inc/content/contact.inc');
		break;
	case "fighting-bullying/helpful-tips":
	case "helpful-tips":
		require('./inc/content/tips.inc');
		break;
	case "fighting-bullying/anti-bully-alias":
	case "anti-bully-alias":
		require('./inc/content/alias.inc');
		break;
	case "fighting-bullying/best-practice":
	case "best-practice":
		require('./inc/content/best-prac.inc');
		break;
}
require('./inc/footer.inc');
?>
