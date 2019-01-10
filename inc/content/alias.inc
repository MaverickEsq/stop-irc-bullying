<h3>Our Anti-Bully-Alias for multiple IRC-clients</h3>
<p>The&nbsp;<strong>Anti-Bully-Alias</strong>&nbsp;is a nice way of half-<strong>automating</strong>&nbsp;the&nbsp;<strong>appeal against being bullied on IRC.</strong></p>
<p>After you have followed the steps for your client below, you can use&nbsp;/bully bulliesnickname&nbsp;on anyone bullying you on IRC (don’t forget to replace “bulliesnickname” with the actual nickname of the bully).</p>
<p><em>If your IRC-client is not listed below, please&nbsp;<a title="Contact us" href="/contact">Contact us</a>&nbsp;so we can add instructions for that one too.</em></p>
<p><strong>mIRC:</strong></p>
<p>Just type the following command:</p>
<pre>/bully /say $$1 $+ : I feel offended by your recent action(s). Please read&nbsp;http://stop-irc-bullying.info/stop</pre>
<p>Alternatively, more advanced users may use&nbsp;<a title="Advanced Anti-Bully-Script for mIRC" href="/files/anti-bully.mrc">anti-bully.mrc</a>&nbsp;which supports nicklist-integration and multiple targets.</p>
<p><strong>X-Chat &amp; HexChat:</strong></p>
<p>Navigate to Settings -&gt; Advances -&gt; User commands, click “New”, put “bully” (without quotes) in the first box and the following text in the second box:</p>
<pre>say %2: I feel offended by your recent action(s). Please read&nbsp;http://stop-irc-bullying.info/stop</pre>
<p>Confim everything with “Ok”.</p>
<p><strong>Irssi:</strong></p>
<p>Just type the following two commands:</p>
<pre>/alias bully say $0: I feel offended by your recent action(s). Please read&nbsp;http://stop-irc-bullying.info/stop</pre>
<pre>/save</pre>
<p><strong>WeeChat:</strong></p>
<p>Just type the following two commands:</p>
<pre>/alias add bully say $1: I feel offended by your recent action(s). Please read&nbsp;http://stop-irc-bullying.info/stop</pre>
<pre>/save</pre>
<p><strong>ChatZilla:</strong></p>
<p>In ChatZilla’s preferences, navigate to Global settings -&gt; Lists tab and add the following to&nbsp;Command aliases:</p>
<pre>bully = say&nbsp;$(1): I&nbsp;feel offended by your recent action(s). Please read&nbsp;http://stop-irc-bullying.info/stop</pre>
<p><strong>Textual:</strong></p>
<p>Download the&nbsp;<a title="Anti-Bully-Hook for the Textual IRC Client" href="/files/textual_bully">bully</a>&nbsp;hook (right-click it and choose “Save Links as” or similar)&nbsp;and place it in Textuals&nbsp;script directory with “bully” as its filename (without quotes).</p>
<p><strong>Quassel</strong></p>
<p>Press F7 to open the settings menu, then navigate to Aliases -&gt; New and&nbsp;replace “alias” with “bully” (without quotes) and “Expansion” with:</p>
<pre>/say $1: I feel offended by your recent action(s). Please read http://stop-irc-bullying.info/stop

</pre>
<p><a href="/img/6.jpg"><img class="alignnone wp-image-67 size-full" src="/img/6.jpg" alt="" width="600" height="400"></a></p>
          
