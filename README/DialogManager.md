This plugin serves as a host for its sub-plugins, allowing to extend the standard functionality of FAR Manager dialogs. It allows to run its sub-plugins from inside dialogs (most of them) by pressing CtrlF11 which will present you with a menu listing the sub-plugins. The plugin requires Windows NT/2000/XP.

Current version comes with the following sub-plugins:
  * Case - Allows to change case of text in input lines.
  * Pwd - Allows to view the password hidden by asterisks.
  * OpenFile - Shows an "Open file" dialog similar to the one provided by the OS.
  * Logger - Writes to a log file all input received by the [DefDlgProc](http://api.farmanager.com/en/dialogapi/defdlgproc.html).
  * GrabDialog - Saves dialog structure into a file.
  * BCopy - Shows the information menu of the BackgroundCopy plugin.
  * CharMap - Allows to insert any symbol into an input line using the CharacterMap plugin.
  * Macro - Lets you have a different set of macros for each dialog.
  * Undo - Makes possible to perform undo and redo operations in dialog input lines.
  * Paste Selection - Allow to insert into an input line the current selection of the current editor.
  * Default Button - Marks the default button in a dialog by enclosing it in curly brackets.