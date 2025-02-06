# Basic type of database system
  * **Hierarchical Databases**: 
    - Tree-like structure 
    - Parent-child relationship
    - Examples: Some file systems
  * **Network Database**:
    - Graph structure or network structure(Yeah! came from data structure concept) 
    - Every Nodes can connect to each others.
  * **Relational Database**:
    - Use SQL(Structured Query Language)
    - Table-like
    - Most used
  * **Object-oriented Database**:
    - Use the idea of **class** in programming language
  * **NoSQL**:
    - Roughly speaking, the database systems that are not just using SQL
    - Above type of databases are all kind of NoSQL(except for relational database, of course)
    - Examples: MongoDB, Redis, Cassandra, OrientDB

# Database Architecture
Database architecture describes how a database management system (DBMS) will be integrated with your application.  Specifically, is about how data is stored, organized, and retrieved, playing a crucial role in the efficiency and effectiveness of data management.
  * **1-Tier**: Applications and Database on the same machine, as following image show

<p align="center">
  <img src="./images/database_figure_1.avif"/>
</p>
Figure_1

  * **2-Tier**: Multiple clients(Machine) connecting directly to the database. This tier architecture is also known as client-server architecture.

<p align="center">
  <img src="./images/database_figure_2.avif"/>
</p>
Figure_2

  * **3-Tier**: Most modern web applications use a three-tier architecture. In this architecture, the clients connect to a back end, which in turn connects to the database. Using this approach has many benefits:
    - Security: Keeping the database connection open to a single back end reduces the risks of being hacked.
    - Scalability: Because each layer operates independently, it is easier to scale parts of the application.
    - Faster deployment: Having multiple tiers makes it easier to have a separation of concerns and to follow cloud-native best practices, including better continuous delivery processes.

<p align="center">
  <img src="./images/database_figure_3.avif"/>
</p>
Figure_3

A pivotal aspect of modern database architecture is the client-server model, particularly relevant in two-tier and three-tier architectures. In this model, the database server houses the DBMS and the actual database, handling data storage, query processing, and transaction management. [reference](https://www.mongodb.com/resources/basics/databases/database-architecture)

As technology advances, database architecture continues to evolve. The integration of cloud computing, big data analytics, and artificial intelligence in database systems is transforming how data is managed and accessed. These technologies bring new dimensions to database architecture, such as distributed data storage, real-time analytics, and predictive modeling, which require innovative architectural approaches.
  * **Distributed Database**: Typically, distributed database systems operate on two or more interconnected servers on a computer network. Each location where a version of the database is running is often called an instance or a node. A distributed database, for example, might have instances running in New York, Ohio, and California. Or it might have instances running on three separate machines in New York. A traditional single-instance database, in contrast, only runs in a single location on a single machine. [reference](https://www.cockroachlabs.com/blog/what-is-a-distributed-database/) [reference2](https://docs.oracle.com/cd/A57673_01/DOC/server/doc/SCN73/ch21.htm) Here are some characteristics:
    - **Sharding**: Sharding involves separating different rows of information from the table and storing them on different machines, as the following shows. [reference](https://aws.amazon.com/what-is/database-sharding/?nc2=h_mo-lang) And because we make separate table into pieces, if you want to searching some row of data, it should be faster if you spot on certain piece.
    - **Replicates(which lower the risk)**: Basically just replicate data to different machines. If a single-instance database goes offline (due to a power outage, machine failure, scheduled maintenance, or anything else) all of the application services that rely on it will go offline, too. Distributed databases, in contrast, are typically configured with **replicas** of the same data across multiple instances, so if one instance goes offline, other instances can pick up the slack, allowing the application to continue operating.
    - **Faster and more availability**: Combine both Sharding and Replicates to achieve.
    - **More scalability**: Distributed database can easily use **Horizontal Scaling(adding additional nodess)**. While single database system can only use **Vertical Scaling(adding more power to your current machines)**
    - **Transparency**: Which means it would be single database from the user's point of view



