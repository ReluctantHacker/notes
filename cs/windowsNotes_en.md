# Admin
Local Admin is just for local machine, if you use "net use" to remotely connect to the machine. Your priviliges would came down to normal user. That's because windows trying to prevent hackers to directly attack when they get the admin account and password.

If you want to "net use" to send file, you have to set register's one key to 1 to let localadmin not just for local but for remote. However, this is kinda risky, you should take a good consider.

# file system
Windows file system mostly uses NTFS which "a file" is actually a "file entry in NTFS" which is a group of data streams. The main data steam is the actual file data. Like for example, a pure txt file data, in linux system, Inode would have a Inode table to reord the properties of that pure txt file data. However, in windows system, NTFS would group all the related data streams about the file data which itself is also a data stream called "main stream" all together. But! the user normally can only see the main stream(from file explorer, or command lines). Here are some common commands that can show the files that is hidden or not main stream:

- dir /a → shows all the file entries in the directory, including ones normally hidden (system/hidden attributes). What you see is basically the main stream’s name for each entry.
- dir /r → shows all the file entries plus any alternate data streams (ADS) attached to them. This is the only way to see those hidden streams in a directory listing.
- dir /s → recursively shows all file entries (and their streams if combined with /r) in the current folder and all subfolders.


