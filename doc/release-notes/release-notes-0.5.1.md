shitecoin version 0.5.1 is now available for download at:
http://sourceforge.net/projects/shitecoin/files/shitecoin/shitecoin-0.5.1/

This is a bugfix-only release.

This release includes 13 translations, including 5 new translations:
Italian, Hungarian, Ukranian, Portuguese (Brazilian) and Simplified Chinese.
More translations are welcome; join the project at Transifex if you can help:
https://www.transifex.net/projects/p/shitecoin/

Please report bugs using the issue tracker at github:
https://github.com/shitecoin/shitecoin/issues

Project source code is hosted at github; we are no longer
distributing .tar.gz files here, you can get them
directly from github:
https://github.com/shitecoin/shitecoin/tarball/v0.5.1  # .tar.gz
https://github.com/shitecoin/shitecoin/zipball/v0.5.1  # .zip

For Ubuntu users, there is a new ppa maintained by Matt Corallo which
you can add to your system so that it will automatically keep
shitecoin up-to-date.  Just type
sudo apt-add-repository ppa:shitecoin/shitecoin
in your terminal, then install the shitecoin-qt package.


BUG FIXES

Re-enable SSL support for the JSON-RPC interface (it was unintentionally
disabled for the 0.5.0 release binaries).

The code that finds peers via "dns seeds" no longer stops shitecoin startup
if one of the dns seed machines is down.

Tooltips on the transaction list view were rendering incorrectly (as black boxes
or with a transparent background).

Prevent a denial-of-service attack involving flooding a shitecoin node with
orphan blocks.

The wallet passphrase dialog now warns you if the caps lock key was pressed.

Improved searching in addresses and labels in shitecoin-qt.
