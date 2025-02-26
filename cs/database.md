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

As technology advances, database architecture continues to evolve. The integration of cloud computing, big data analytics, and artificial intelligence in database systems is transforming how data is managed and accessed. These technologies bring new dimensions to database architecture, such as **distributed database**, **real-time analytics**, and **predictive modeling**, which require innovative architectural approaches.

Distributed Database
--------------------
Typically, distributed database systems operate on two or more interconnected servers on a computer network. Each location where a version of the database is running is often called an instance or a node. A distributed database, for example, might have instances running in New York, Ohio, and California. Or it might have instances running on three separate machines in New York. A traditional single-instance database, in contrast, only runs in a single location on a single machine. [reference](https://www.cockroachlabs.com/blog/what-is-a-distributed-database/) [reference2](https://docs.oracle.com/cd/A57673_01/DOC/server/doc/SCN73/ch21.htm) Here are some characteristics:
  * **Sharding**: Sharding involves separating different rows of information from the table and storing them on different machines, as the following shows. [reference](https://aws.amazon.com/what-is/database-sharding/?nc2=h_mo-lang) And because we make separate table into pieces, if you want to searching some row of data, it should be faster if you spot on certain piece.
  * **Replicates(which lower the risk)**: Basically just replicate data to different machines. If a single-instance database goes offline (due to a power outage, machine failure, scheduled maintenance, or anything else) all of the application services that rely on it will go offline, too. Distributed databases, in contrast, are typically configured with **replicas** of the same data across multiple instances, so if one instance goes offline, other instances can pick up the slack, allowing the application to continue operating.
  * **Faster and more availability**: Combine both Sharding and Replicates to achieve.
  * **More scalability**: Distributed database can easily use **Horizontal Scaling(adding additional nodess)**. While single database system can only use **Vertical Scaling(adding more power to your current machines)**
  * **Transparency**: Which means it would be single database from the user's point of view

Distributed System
------------------
Distributed database is one of the example of distributed system which means a set of computers that work together and give the end users a perception of a single computer running behind it. **Distributed Computing** is pretty much the same thing: Distributed computing uses numerous computing resources in different operating locations for a single computing purpose.

One thing need to be noticed is that distributed systems don't have to be **decentralized systems**. [reference](https://en.wikipedia.org/wiki/Decentralized_computing) A lotta resources on Internet got it wrong. Wikipedia, on the other hand, emphasises that they are different concept.

**Decentralized systems** means removing a central authority, like a boss, and letting each computer make its own decisions. 

So a distributed system can be centralized or decentralized, depending on how they are organized and how they manage resources and control. 

The simplest decentralized model of distributed database is **Peer-to-Peer** model which means nodes communicate directly with each other without a central authority. Each node can act both as a client and a server. For example, Blockchain databases and some NoSQL databases like Cassandra, which use a peer-to-peer architecture for distributing data.

The simplest centralized model of distributed database is **Master-Slave** model which means One or more central nodes(masters) coordinate the data distribution and management, while other nodes(slaves) replicate and serve data. For example, tranditional SQL databases that use replication such as MySQL with master-slave replication.

Of course, there are also some hybrid models of them.

CAP theorem
-----------
CAP, which stands for Consistency, Availability, and Partition Tolerance, is a theory primarily in the domain of computer science. Specifically, it's a fundamental concept in **distributed systems** and database design(distributed data store). 

Clustered Systems
-----------------
Clustered systems are a subgroup of distributed systems. [reference](https://stackoverflow.com/questions/21378427/what-is-the-difference-between-a-distributed-system-and-a-clustered-system) Basically, a distributed system can be anything. Having JS on the client and PHP-server code which makes up together a system is already called a distributed system by some people.

In general when working with distributed systems you work a lot with long latencies and unexpected failures (like mentioned in p2p systems). When building a cluster (or a big cluster which can be called supercomputer) you try to prevent it by using more robust hardware and better network interconnection (InfiniBand). But nevertheless, a cluster is still a distributed system. (A sports car still has 4 wheels and an engine) The direct example of Clustered System is Supercomputer of IBM. 

> [!NOTE]
> The notes in GaoKaoNotes is not totally correct. That note is confused about decentralized system and distributed system.

Low-Level Concept of Databases: Transaction
-------------------------------------------
Technically speaking, Database is nothing but a program. The ultimate goal of this program is making data can be read or inserted efficiently and savely into and from hard drive. Database would occupy a certain region of hard drive space with information about the relationship between data. And when database program start up in a process memory, CPU calculates the relationship between data and make decision where data should be stored and what additional information-data that data need to take alongside.

Basically, almost all types of database(including NoSQL) has **CRUD** operations which are **create**, **read**, **update** and **delete**. 

To truly implement this four operations, we need to understand the concept of **Transaction**.

In short, a database transaction is a sequence of multiple operations that mentioned above performed on a database, and all served as a single logical unit of work — taking place wholly or not at all. In many contexts, a transaction can be considered a fundamental unit of work in a database.

In many database systems and programming frameworks, transactions are implemented as objects(Object-Oriented Programming) or constructs that occupy memory and manage the execution of tasks.

For relational databases, to make database coherent and work correclty, a transaction has four basic rule to obey, ACID:
  * **Atomicity**: Ensures the transaction is treated as one indivisible unit, meaning either all of its operations are committed to the database, or none at all.
  * **Consistency**: Calculating of a transaction must be follow the real world's rules.
  * **Isolation**: Transactions are indepedent between each others. Won't influent each others. Means multiple transactions can run concurrently without interfering with each other.
  * **Durability**: After a transction commit, the effect of that transaction needs remain.

On the other hand, Many NoSQL databases were initially designed with a focus on high availability, scalability, and flexibility, often at the expense of strict transactional support. While many modern NoSQL databases offer support for transactions, they don't always fully adhere to the traditional ACID (Atomicity, Consistency, Isolation, Durability) properties in the same way that relational databases do. Instead, they may provide a different consistency model to balance performance, availability, and scalability.

That's the price you pay for speed. [reference](https://www.reddit.com/r/Database/comments/2obq5a/why_doesnt_nosql_useneed_acid/), [reference](https://www.reddit.com/r/webdev/comments/11i0lrb/why_no_sql_does_not_support_acid_properties/)
