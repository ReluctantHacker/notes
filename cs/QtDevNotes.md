# Database Connection
  * **Oracle**:
    - Download **InstantClient** from oracle official website and then copy "all" the file(including the network folder which is for file tnsnames.ora) into the qt project's build folder(same folder the app.exe in) 
    - coyp or create the tnsnames.ora into the network folder in build(same folder as app.exe in)
    - The most simple explanation of this mechanism is that QT need oci.dll. But oci.dll need the environment(files) in the instantclient folder. Here's a very important [reference](https://blog.csdn.net/laoponline/article/details/119963100) talk about this.

