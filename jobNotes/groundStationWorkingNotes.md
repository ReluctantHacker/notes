# Databases
  - soss資料庫: 專門放排程紀錄的資料庫, 他把從以前至今所有的排程紀錄都存入了, 並且會依照orbitron的軌道預測(輸出後在匯入soss)後10天的排程, 但那只是大致預測, 實際上的接收排程要依照接收的實際排程, VB排程程式會把當日的正確排程輸進soss資料庫, 並把多餘的排程紀錄(orbitron自動生成)從資料庫刪除. Orbitron的軌道參數現在會擋IP央大的IP, 所以要透過其他方式(我之前是透過VPN)繞過.  以下是接收站按照soss資料庫的排程紀錄用web前端列出接收排程: [接收排程](http://140.115.109.136/Web/Schedule/Default.aspx)
  - csrsr資料庫:

# Database Connection methods
  - Oracle 使用TNS(設定檔案在tnsnames.ora)
  - MySQL使用.my.cnf
  - SQL Server使用ODBC

# 國家太空中心檔案
  - 國家太空中心(台灣的)本來叫做NSPO, 20230101後改為TASA, 所以你看舊的VB排程的code裡面只有NSPO, 但是較新的VB排程code只有TASA
