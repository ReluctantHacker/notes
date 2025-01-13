# 接收站的基本架構和業務邏輯
目前主要有大小兩個天線, 大的天線口徑13m, receiving zone較大, 小天線6.1m, receiving zone較小(小天線廠商已倒閉, 須自行維護天線), 接收站的工作基本是將每日的接收任務用排程進行接收, 接收下來之後解調, 再進行影像處理(正射矯正及地面控制點矯正), 最後進入web server給客戶或使用者查看.

# 衛星軌道參數與Antenna(Satellite dish)的控制
衛星軌道參數主要由衛星公司每日提供, 由於大部分低軌衛星會受到大氣及其他阻力影響導致軌道輕微偏離原先預計的軌道, 又或者特別的特別的任務需求需要調整軌道, 衛星公司會進行軌道校正後, 並將新的軌道參數給予客戶, 這個更新頻率可能高達一日三到四次. Antenna需要非常精確的對準天上的衛星, 1度的偏差就可能造成3db的訊號損失. 也因此軌道參數需要隨時更新調整.

目前中心的Antenna都是舊型, 軌道參數無法自動匯入, 需要手動匯入, 所以每日都要有人在接收站. 未來新天線將建成, 可以自動匯入.

軌道參數的格式基本都是TLE(Two Line Element). TLE基本包含:
  * **Line 1**:
    * **Satellite Name**: 衛星名稱
    * **Catalog Number**: 
    * **Epoch Time**: 參考用時間, initial condition
    * **Mean Motion Derivative**
    * **Drag Term**
    * **Checksum**: 數據驗證檢查, 和電腦科學中的checksum是基於同樣的概念
  * **Line 2**:
    * **Inclination**: 軌道傾角(相對赤道平面)
    * **Right Ascension of Ascending Node (RAAN)**: 115.3256
      * The angle from a reference direction (usually the vernal equinox) to the direction of the ascending node (degrees).
    * **Eccentricity**: 偏心率, 數值越小軌道越圓
    * **Argument of Perigee**: 
    * **Mean Anomaly**:
    * **Mean Motion**: 
    * **Revolution Number**:

目前SGP4(Simplified General Perturbation 4) 是較為廣泛使用的軌道計算模型, 搭配TLE參數, 可以精確計算衛星位置. 他是結合**Keplerian Orbits(Kepler行星運動模型)**, **Perturbation Methods(考慮擾動)**, **Numerical Integration(數值積分)**, 等等方法進行計算. 

雖然衛星公司會傳送新的軌道參數, 但是[北美防空司令部Norad](http://celestrak.org/NORAD/elements/)也有提供即時的軌道參數, 中心有寫爬蟲程式去抓取參數, 如果衛星公司沒有及時給予參數時可以使用, 

# 接收的衛星
目前中心有在接收的衛星是, **FORMASAT-5**, **SPOT-6**, **SPOT-7**, **Pleiades 1A/1B**. SPOT-6, SPOT-7, Pleiades 1A/1B屬於同一家法國公司, 彼此軌道時間會刻意錯開, 方便地面接收. 目前Pleiades的影像解析度最高, 地面觀測可達到0.5m的解析度, 也是目前接收站最重要的衛星數據來源. FORMASAT-5解析度最低, 國產研發, 性能較差.

衛星訊號接收時, 解調器會收到對應衛星的信號波型, 理論上每個衛星信號的波型都不同, 可以透過衛星公司提供的衛星參數進行鎖定控制. 

# 衛星信號頻率
早期的衛星都是低頻衛星, 這是低頻電磁波對大氣的抗干擾能力較強. 但隨著需求提升, 現在高頻信號的衛星漸漸成為技術主導. 高頻率具有高頻寬, 可以讓訊號解析度更高, 訊號容量更大, 雍塞程度降低.

目前衛星信號按照頻率分類為:
  * **L-band (1~2 GHz)**:
  * **S-band (2~4 GHz)**: 
  * **C-band (4~8 GHz)**: 
  * **X-band (8~12 GHz)**: 
  * **Ku-band (12~18 GHz)**:
  * **Ka-band (26~40 GHz)**: 

中心的大天線目前有兩個band: **S-band 2.2~2.4GHz**, **X-band 8.0~8.4GHz**. 小天線則只有一band: **X-band 8.0~8.5GHz**. 大天線的接收能力比小天線更好, zone也更大.

信號接收後需要解調, 解調器軟體和參數由衛星公司提供, 天線接收到影像後, 解調器會實時解調, 存成ISO檔, 之後再交由下一個環節進行影像處理(Orthorectification).

# 用途
  * **Mapping 和 GIS**:
    * **氣候變遷**
    * **都市規劃**
  * **環境監測**
    * **氣候變遷**
    * **森林砍罰**
  * **農業**
    * **農作物監控**
    * **農地管理**
  * **災害管理**
    * **自然災害**
  * **安全防護**
    * **國土安全監控**
    * **邊境管理**


# 天線維護
大天線在中心頂樓, 每一年會有國外工程師過來檢查一周的時間, 平時則由接收站的工程師透過高空作業車維護. 天線的角度由三軸馬達精確控制, 結構類似機械手臂. 小天線由於原廠倒閉, 須自行維護

