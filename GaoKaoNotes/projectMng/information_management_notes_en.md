# Information Management Notes

> **Scope note**: These notes cover concepts commonly found in Information Management, Information Systems, IT Governance, Cybersecurity Management, and related fields. Most of the concepts are international rather than being specific to Chinese-speaking countries. However, some items—especially Taiwanese laws, government programs, and government-specific baselines—are jurisdiction-specific.
>
> The original narrative structure is intentionally preserved. `🤔` and `😄` are retained as informal markers from the original notes.

---

|#############################################################################################################|

# 1. E-Commerce

--- traditional business activities becoming electronic and networked

## A. Electronic Monetary Exchange

### a. Digital Payment

- **Digital payment**: Using credit cards, debit cards, electronic wallets, and similar methods to purchase products online and pay for services.

### b. Cryptocurrency

- **Cryptocurrency**: Cryptographic digital assets such as Bitcoin and Ethereum that use distributed ledger / blockchain technologies for transactions and transfers.

Reference:
- https://www.youtube.com/watch?v=bBC-nXj3Ng4

#### I. How cryptocurrency works

- 🤔. Participants in a blockchain network maintain or have access to a copy of the transaction history (often represented as a distributed ledger).
- 🤔. This transaction history records transactions among participants, including information such as time, parties, and amounts.
- 🤔. The balance associated with an address can be derived from the ledger according to the rules of the particular cryptocurrency.
- 🤔. In a blockchain such as Bitcoin, transactions are grouped into blocks. A block includes the hash of the previous block and other block data. In Proof-of-Work systems, miners repeatedly perform hashing computations to find a value satisfying the network's difficulty target.
- 🤔. When a person wants to pay another person with cryptocurrency, the transaction is normally **digitally signed with the sender's private key**. Other participants can verify the signature with the corresponding public key. This uses public-key cryptography; technically, generating a digital signature is not the same thing as “encrypting the transaction with the private key.”
- 🤔. Because a block contains information derived from the previous block, changing an earlier block would invalidate the subsequent chain unless the attacker could also satisfy the consensus rules for the affected blocks. This chained structure is why it is called a **blockchain**.
- 🤔. After a transaction is signed, it can be broadcast to the peer-to-peer network.
- 🤔. In a Proof-of-Work blockchain, miners collect valid transactions into candidate blocks, perform the required computation, and broadcast valid blocks. The network then accepts blocks according to the consensus rules. In systems such as Bitcoin, the successful miner can receive a block subsidy and transaction fees.
- 🤔. Finding a valid Proof-of-Work result requires substantial computation. The participants who perform this work are called **miners**, and the process is called **mining**.
- 🤔. **Not all cryptocurrencies are created through mining.** Different cryptocurrencies use different consensus mechanisms, such as Proof of Stake (PoS), rather than Proof of Work.
- 🤔. In Bitcoin, the genesis block is the first block and contains the initial block reward transaction. It is the starting point of Bitcoin's blockchain.
- 🤔. Bitcoin's block subsidy is periodically reduced (halved, Bitcoin halving = the block reward is cut in half after every 210,000 blocks.). This contributes to a fixed maximum supply of 21 million bitcoins. This specific supply rule should not be generalized to every cryptocurrency. Addtionally, 1 BTC = 100,000,000 satoshis. Bitcoin cannot currently represent less than 1 satoshi on the normal Bitcoin network. Eventually the mathematically halved reward becomes smaller than 1 satoshi. At that point, it can't be represented as a Bitcoin amount, so the block subsidy becomes 0.

Here's an addtional notes I took after discussion with ChatGPT more about the mechanism of blockchain for bitcoin, especially about the computational competition of getting right to propose new block. First of all, nodes means the ones who own the full chain history records. Nodes would want to have the right to propose new Blocks with everyone agree with because this behavior has reward of gaining bitcoins. What they actually calculating is roughly like this, the current state of the chain is X, the transaction paramenter is Y:
X' = f(X, Y, nonce)
They want to find what nonce can satisfy this. X' is easy to calculate, but the nonc is burning the computational resource. People actually blame this kinda game like proof of work. Because it doesn't create any valuable result, or solving any real meaningful task. It just a computational competition to own the right of propose of chain.
- 🤔. A wallet, means a software/device that manages your cryptographic keys information. There are "hot wallet" which mean the management device is online and "cold wallet" which mean the device is offline.. Well anyway, a wallet generally includes thing like below:
Wallet
│
├── Private key(s)      ← secret, used to sign transactions
├── Public key(s)
└── Address(es)         ← derived from keys, used to receive BTC

#### II. Characteristics of cryptocurrency

- 🤔. **Decentralization**
- 🤔. **Blockchain / distributed-ledger technology**
- 🤔. **Pseudonymity** — transactions are associated with public addresses rather than necessarily with real-world names; this is more accurately described as pseudonymous rather than fully anonymous.
- 🤔. **Tamper resistance** — historical records are designed to be difficult to alter under the network's consensus rules.

### c. Electronic Banking

- **Electronic banking (e-banking)**: Using Internet banking systems to manage and conduct banking activities such as transfers, deposits, and loans.

### d. Electronic Payment

- **Electronic payment**: Making payments through electronic payment systems, such as third-party payment platforms including Alipay and WeChat Pay.

## B. Supply Chain Management

## C. Electronic Marketplaces

## D. Online Shopping

## E. Online Marketing / Digital Marketing

### a. Content Marketing

- I. Creating and sharing valuable content to attract a target audience.

### b. Search Engine Optimization (SEO)

- I. Optimizing website structure and content to improve search-engine rankings.

### c. Search Engine Marketing (SEM)

- I. Using paid advertising on search engines to promote products or services, for example through Google Ads.

### d. Social Media Marketing

- I. Using social media platforms to build a brand, communicate with audiences, and interact with customers.

### e. Email Marketing

- I. Sending information to a target audience through email, including promotions, information, and news.

### f. Web Analytics

- I. Using tools such as Google Analytics to track and analyze website traffic and understand user behavior.

### g. Marketing Automation

- I. Using software to automate marketing tasks, such as sending emails and tracking audience behavior.

### h. Content Management System (CMS)

- I. Using a CMS to manage and update website content so that content remains current and easy to maintain.

### i. Video Marketing

- I. Using video on online platforms to share brand stories, product information, or other marketing content.

### j. Online Advertising

- I. Placing advertisements on websites, social media, or search engines, including banner ads and native advertising.

### k. Mobile Marketing

- I. Marketing aimed at mobile devices such as phones and tablets, including in-app advertising and mobile websites.

### l. Online Public Relations

- I. Conducting public-relations activities online and cooperating with media or online communities to increase brand awareness.

### m. Data Analytics and Big Data Marketing

- I. Using large-scale data analysis to optimize marketing strategies.

### n. Influencer Marketing

- I. Cooperating with online celebrities, influencers, or opinion leaders to promote products or services through their reach and influence.

### o. Viral Marketing

- I. Using social sharing and word-of-mouth propagation to spread brand information rapidly.

## F. Online Transaction Processing

## G. Electronic Data Interchange (EDI)

## H. Inventory Management

## I. Automated Data Collection Systems

---

|#############################################################################################################|

# 2. Information Systems

## A+. Levels and Classifications of Information Systems

Reference:
- https://zh.wikipedia.org/zh-tw/%E4%BF%A1%E6%81%AF%E7%B3%BB%E7%BB%9F

### a. Hierarchical Levels of Information Systems

> The following hierarchy is a classic Information Systems / MIS textbook model that parallels organizational management levels. It is useful for study, but modern organizations do not necessarily map every system neatly into only one level.

#### I. Operational Level

- 🤔. This is the lowest organizational level and is mainly concerned with routine operations and transaction processing.
- 🤔. Typical activities include bookkeeping, order processing, inventory management, and other day-to-day operations.
- 🤔. The operational level is primarily responsible for executing and recording routine business activities.

#### II. Knowledge Level

- 🤔. This level is above the operational level and focuses on knowledge work and information analysis.
- 🤔. Typical activities include document management, design, engineering, research, and related professional work.
- 🤔. Knowledge workers and analysts use information systems to improve productivity and the quality of decisions and outputs.

#### III. Management Level

- 🤔. This level focuses on management, control, and supervision of organizational operations.
- 🤔. Typical activities include planning, control, monitoring, and decision support.
- 🤔. Managers at this level usually make short- to medium-term plans, monitor operations, and make tactical decisions.

#### IV. Strategic Level

- 🤔. This is the highest organizational level and focuses on long-term strategy and organizational goals.
- 🤔. Typical activities include strategic planning, policy making, and resource allocation.
- 🤔. Strategic decision makers include senior executives such as CEOs and CFOs, who use information systems to support strategic decisions.

### b. Six Major Information System Categories

#### I. Transaction Processing System (TPS)

- 🤔. **Supported management level:** Operational level.
- 🤔. **Description:** TPS records and processes routine business transactions, such as sales, payments, and order processing. These systems handle detailed day-to-day business inputs and outputs.

#### II. Office Automation System (OAS)

- 🤔. **Supported management level:** Knowledge level.
- 🤔. **Description:** OAS helps knowledge workers improve productivity by providing functions such as word processing, email, calendars, and document management.

#### III. Knowledge Work System (KWS)

- 🤔. **Supported management level:** Knowledge level.
- 🤔. **Description:** KWS is designed for professionals and supports the creation and dissemination of knowledge, such as engineering design systems and R&D systems.

#### IV. Management Information System (MIS)

- 🤔. **Supported management level:** Management level.
- 🤔. **Description:** MIS provides routine reports and information to help management monitor and control organizational operations and support tactical decisions.

#### V. Decision Support System (DSS)

- 🤔. **Supported management level:** Management level.
- 🤔. **Description:** DSS supports complex and non-routine decisions by providing interactive analysis tools, data analysis, and reporting capabilities. It helps managers make decisions under uncertainty.

#### VI. Executive Information System (EIS)

- 🤔. **Supported management level:** Strategic level.
- 🤔. **Description:** EIS provides senior executives with timely, concise, high-level strategic information and key performance indicators to support strategic decisions and long-term planning.

## A. Interorganizational Information Systems

- a. Integrate the needs of multiple organizations into a unified platform that provides common functions and services across organizational boundaries. A common architecture makes collaboration and data sharing easier.
- b. It is also possible to integrate multiple existing systems through standardized interfaces and protocols to enable cross-organizational operations. This is usually more difficult because compatibility, integration, data formats, and differing system assumptions must all be considered.

## B. Knowledge Management (Expert Systems, AI)

- a. Basically, software systems that provide domain-specific knowledge and assistance to users. Some such systems may include learning capabilities. These systems were especially prominent during earlier waves of AI and expert-system development. 😄.

## C. Organizational Redesign Through Information Systems

- a. Using information systems to optimize and restructure organizational structures and business processes.
- b. Some major approaches / characteristics include:

#### I. Automation

- 🤔. Use information systems to replace some repetitive, execution-oriented human work and perform it at scale, improving efficiency and reducing the probability of human error.
  - 😄. Example: introducing ERP (Enterprise Resource Planning) software such as SAP. ERP systems serve as core enterprise management systems and can cover areas such as human resources, finance, supply chain, and manufacturing.

#### II. Rationalization

#### III. Business Process Reengineering

- 🤔. Basically, redesigning organizational business processes from the ground up. 😄

#### IV. Paradigm Shift

- 🤔. Basically, changing the organization's underlying way of thinking, such as its work philosophy, assumptions, or values. 😄

## D. Information System Planning, Implementation, Evaluation, and Impact

## E. Cloud Services

### a. Common Technologies

#### I. Virtualization

- Cloud services commonly use virtualization to abstract physical resources such as servers, storage, and networking into virtual resources, enabling flexible allocation and resource sharing.

#### II. Distributed Systems

- Cloud services are commonly built from distributed-system architectures, where computing and storage resources are distributed across multiple systems or locations to improve reliability and fault tolerance.

#### III. Automated Management

- Cloud platforms use automation tools and platforms to automate provisioning, monitoring, scaling, configuration, and operational tasks.

#### IV. Containerization

- Cloud environments increasingly use container technologies such as Docker and Kubernetes for rapid application deployment, portability, and scaling.

### b. Characteristics

> NIST's formal cloud definition emphasizes five essential characteristics: on-demand self-service, broad network access, resource pooling, rapid elasticity, and measured service. The list below preserves the practical study framing of the original notes while using standard terminology. citeturn805786search0

#### I. Self-Service / On-Demand Self-Service

- Cloud computing allows users to access and manage computing resources over a network, including virtual machines, storage, applications, and services. Users can obtain resources as needed without waiting for manual provisioning.

#### II. Scalability

- Cloud platforms can expand or reduce computing and storage resources according to demand, helping systems maintain performance under different workloads.

#### III. On-Demand Service

- Cloud services are generally provided as services that can be consumed when needed, without requiring large upfront investments in physical infrastructure.

#### IV. Multi-Tenancy

- Cloud platforms commonly allow multiple customers to share underlying computing and storage infrastructure while maintaining logical isolation, improving resource utilization and lowering costs.

#### V. Rapid Deployment

- Cloud services can often be provisioned and configured quickly. New virtual machines or application instances can be launched rapidly to respond to changing business requirements.

#### VI. Elasticity

- Cloud platforms can automatically increase or decrease resources in response to workload changes.

#### VII. Pay-Per-Use / Measured Service

- Cloud services commonly meter resource usage and charge based on consumption, subscription, or a combination of models.

### c. Service Models

> Cloud computing is commonly described using the three service models **IaaS, PaaS, and SaaS**. NIST also defines four deployment models: private, community, public, and hybrid cloud. citeturn805786search0turn805786search72

#### I. IaaS (Infrastructure as a Service)

- 🤔. **Description:** IaaS provides fundamental computing resources such as virtual machines, storage, networking, and related infrastructure. Customers configure and manage these resources according to their needs.
- 🤔. **Characteristics:**
  - 😄. Resources can be dynamically scaled up or down.
  - 😄. Customers generally manage the operating system, middleware, and deployed applications.
  - 😄. Provides high flexibility and control.
- 🤔. **Examples:**
  - 😄. Amazon Web Services (AWS) EC2
  - 😄. Microsoft Azure Virtual Machines
  - 😄. Google Cloud Compute Engine

#### II. PaaS (Platform as a Service)

- 🤔. **Description:** PaaS provides a platform layer, including managed runtime environments, middleware, development tools, databases, or related services, on which users can build and run applications.
- 🤔. **Characteristics:**
  - 😄. Provides a development and deployment environment without requiring users to manage the underlying infrastructure.
  - 😄. Supports collaborative development and rapid deployment.
  - 😄. Reduces the complexity of setting up and managing infrastructure.
- 🤔. **Examples:**
  - 😄. Google App Engine
  - 😄. Microsoft Azure App Service
  - 😄. Heroku

#### III. SaaS (Software as a Service)

- 🤔. **Description:** SaaS provides ready-to-use software applications over the Internet, without requiring users to install and maintain the underlying software infrastructure themselves.
- 🤔. **Characteristics:**
  - 😄. Users can start using the application without dealing with most underlying technical details.
  - 😄. Software updates and maintenance are primarily handled by the provider.
  - 😄. Often billed by subscription, user count, usage, or some combination thereof.
- 🤔. **Examples:**
  - 😄. Google Workspace (such as Gmail and Google Drive)
  - 😄. Microsoft 365
  - 😄. Salesforce

### d. Advantages of Cloud Services

#### I. Flexibility and Scalability

- Users can quickly expand or reduce resources according to business needs.

#### II. Cost Efficiency

- Cloud services can reduce the need for large upfront infrastructure investments and can charge according to usage or subscription.

#### III. Global Accessibility

- Users can access cloud services over networks from many geographical locations.

#### IV. High Availability and Fault Tolerance

- Distributed architectures and provider-managed redundancy can improve availability and resilience, although the actual level depends on the service architecture and configuration.

### e. Disadvantages of Cloud Services

#### I. Security Concerns

- Security issues remain important, including data privacy, identity, access control, configuration errors, and provider-side risks.

##### 🤔. Data Privacy

- Storing data in the cloud may involve multi-tenant infrastructure. Providers use logical isolation and other controls, but customers still need to assess privacy and isolation risks.

##### 🤔. Data Encryption

- Cloud providers often offer encryption capabilities, but correct key management, configuration, access control, and implementation remain critical.

##### 🤔. Access Control

- Cloud providers must ensure that only authorized users and services can access protected data and resources. Misconfiguration or stolen credentials can lead to unauthorized access.

##### 🤔. Data Transmission Security

- Data transmitted over networks may be exposed if secure protocols and appropriate controls are not used. Public networks increase the importance of encryption and endpoint security.

#### II. Dependency

- Using cloud services means depending on third-party providers for critical infrastructure and data services, creating operational, contractual, availability, and vendor-lock-in risks.

#### III. Performance Issues

- Cloud performance may be affected by network conditions, service-provider limitations, resource contention, architecture, or geographic distance.

#### IV. Legal and Compliance Issues

- Cloud use may involve laws and regulations concerning data protection, data residency, cross-border transfers, contractual obligations, and industry-specific requirements.

##### 🤔. Data Privacy and Compliance

- If data includes personal information, sensitive business information, or other legally protected information, the organization must ensure that its cloud architecture and provider arrangements comply with applicable legal requirements, such as the EU General Data Protection Regulation (GDPR) where applicable.

##### 🤔. Service Agreements and Liability

- Cloud providers normally define responsibilities and obligations in service agreements and terms of service. Organizations should understand service-level commitments, responsibility boundaries, breach notification obligations, and dispute mechanisms.

##### 🤔. Intellectual Property

- Organizations may upload software, documents, images, and other intellectual property to the cloud. Contracts and access controls should clearly address ownership and permitted uses.

##### 🤔. Data Transfer and Storage Location

- Some jurisdictions have requirements concerning where certain categories of data may be stored or transferred. Organizations must verify applicable data residency and cross-border transfer requirements.

## F. Big Data Applications

## G. Backup — mainly Full / Incremental / Differential

Reference:
- https://tw.easeus.com/backup-recovery/differential-backup-vs-incremental-backup.html

### a. Full Backup

- I. **Concept:** Back up all selected data.
- II. **Advantages:** Fast and simple restoration; the backup set is self-contained.
- III. **Disadvantages:** Takes longer and uses more storage space.
- IV. **Typical use:** Environments with manageable data volumes or where simple restoration is highly important.

### b. Incremental Backup

- I. **Concept:** Back up only data changed since the immediately preceding backup, whether that previous backup was full or incremental.
- II. **Advantages:** Fast backups and lower storage consumption.
- III. **Disadvantages:** Restoration can require the base full backup plus every required incremental backup in the chain.
- IV. **Typical use:** Frequently changing data and situations where backup time and storage are limited.
- V. **Example:** Suppose you perform an incremental backup on Tuesday. It contains only the data changed since Monday's backup. Therefore, Tuesday's backup can be smaller and faster than backing up all data again.

### c. Differential Backup

- I. **Concept:** Back up all data changed since the last full backup.
- II. **Advantages:** Usually uses less storage than repeated full backups while allowing simpler restoration than a long incremental chain.
- III. **Disadvantages:** The differential backup generally grows as more changes accumulate after the last full backup.
- IV. **Typical use:** Situations that need a compromise between backup size and restoration complexity.
- V. **Example:** Suppose a full backup is performed on Sunday. Monday's differential contains data changed since Sunday. Tuesday's differential also contains all data changed since Sunday's full backup, and so on until the next full backup.

### d. Mirror Backup

- **Concept:** Create a backup copy that closely mirrors the current source data.
- **Advantages:** The backup copy closely matches the current source and can be restored quickly.
- **Disadvantages:** Usually does not preserve historical versions, and deletions or unwanted changes can also be reflected depending on the implementation.
- **Typical use:** Environments where a current replica is more important than long-term version history.

### e. Snapshot

- **Concept:** Capture the state of data or a storage volume at a particular point in time.
- **Advantages:** Usually fast to create and convenient for short-term recovery and rollback.
- **Disadvantages:** Snapshots often depend on the underlying storage system and should not be treated as a complete replacement for independent backups.
- **Typical use:** Virtualization, storage systems, and environments that support point-in-time snapshots.

### f. Hybrid Backup Strategy

- **Concept:** Combine multiple backup methods to balance backup time, storage usage, and recovery speed.
- **Common approach:** For example, perform one full backup per week and incremental backups every day.
- **Advantages:** Balances backup windows, storage consumption, and restoration complexity.
- **Disadvantages:** Higher management complexity.
- **Typical use:** Many enterprise environments, particularly where data is large and changes frequently.

### g. Continuous Data Protection (CDP)

- **Concept:** Continuously capture changes to data, potentially allowing very fine-grained recovery points.
- **Advantages:** Very small potential data-loss windows.
- **Disadvantages:** Can consume significant storage, processing, and network resources depending on implementation.
- **Typical use:** Environments with stringent recovery-point requirements, such as some financial systems.

### h. Offsite Backup

- **Concept:** Store backup data at a geographically separate location to protect against local disasters.
- **Advantages:** Protects against events such as fire, flooding, theft, or major local infrastructure failures.
- **Disadvantages:** Backup and recovery may be slower and depend on network connectivity and the physical distance to the backup site.
- **Typical use:** Disaster recovery and business continuity planning.

### i. Cloud Backup

- **Concept:** Back up data to storage provided by a cloud service provider.
- **Advantages:** No need to operate all storage hardware locally; storage can scale, and costs may follow a subscription or usage model.
- **Disadvantages:** Recovery can be constrained by network bandwidth and provider availability.
- **Typical use:** Small and medium-sized organizations, distributed workforces, and cloud-centric environments.

### j. Local Backup

- **Concept:** Back up data to local storage such as external drives, NAS, or dedicated backup appliances.
- **Advantages:** Fast backup and restoration and little dependence on Internet connectivity.
- **Disadvantages:** Does not protect against disasters that affect the same physical location; local storage itself must be protected.
- **Typical use:** Small environments where rapid local restoration is important.

## H. Virtual Machines and Containerization

### a. Virtual Machines (VMs)

#### I. How they work

- A hypervisor enables multiple virtual machines to run on a physical host. Each VM normally runs its own operating-system kernel and receives virtualized hardware resources.

#### II. Isolation level

- VMs generally provide stronger isolation than ordinary containers because each VM runs its own kernel. However, VM isolation is not absolutely perfect and still depends on the hypervisor and configuration.

#### III. Startup speed

- 🤔. Startup is generally slower than starting a container because the guest operating system must boot. Depending on the VM, OS, and infrastructure, startup may take seconds to minutes.

#### IV. Resource requirements

- 🤔. Each VM requires resources for its guest operating system, including memory, storage, and CPU time. The hypervisor also consumes resources.

#### V. Deployment and management

- 🤔. VM management is commonly performed through platforms such as VMware, Hyper-V, or KVM. Provisioning usually involves a guest OS image and configuration, although modern templates and automation can make deployment much faster.

#### VI. Supplement: VDI (Virtual Desktop Infrastructure)

Reference:
- https://segmentfault.com/a/1190000044679348

- 🤔. VDI is a technology built around delivering virtual desktops, usually using VMs or similar virtualization mechanisms, to end users over a network.
- 🤔. VM technology is a broad virtualization technique, while VDI is specifically concerned with delivering centrally managed desktop environments to users.
- 🤔. VDI can support remote work, flexible work environments, education and training, and environments with strong desktop-control or security requirements.

### b. Containers

#### I. How they work

- Containers share the host operating system kernel but run isolated user spaces. A container packages an application and its required libraries and runtime dependencies, rather than carrying a separate full OS kernel.

#### II. Isolation level

- Container isolation is generally lighter than VM isolation because containers share the host kernel. Linux containers commonly use namespaces, cgroups, capabilities, seccomp, and other kernel mechanisms to isolate processes and resources.
- 🤔. On a Linux host, ordinary Linux containers use the host's Linux kernel. On Windows and macOS, desktop container platforms commonly use a Linux virtual machine or another virtualization layer because Linux containers require a Linux kernel. For example, modern Docker Desktop can run Linux containers inside a lightweight Linux VM rather than directly on the macOS kernel.

#### III. Namespace Isolation

- 🤔. Namespaces provide isolation of resources such as process IDs, networking, mount points, and users.
- 🤔. For example, process IDs visible inside container A can be isolated from the process IDs visible inside container B, even though the containers use the same underlying host kernel.

#### IV. Startup Speed

- 🤔. Containers can usually start much faster than full VMs because they do not need to boot a separate operating-system kernel.

#### V. Resource Requirements

- 🤔. Because containers share the host kernel, they generally require fewer resources than full VMs and have lower storage and memory overhead.

#### VI. Deployment and Management

- 🤔. Container environments are commonly managed using tools such as Docker, containerd, Kubernetes, and related orchestration systems. A container image can generally be started without installing a complete guest OS.

---

|#############################################################################################################|

# 3. IT Governance

## A. Taiwan Government Information Policies and Strategic Planning

> **Jurisdiction-specific section:** the following laws and classifications are Taiwan-specific. The underlying ideas—cybersecurity governance, accountability, risk management, classification, and incident handling—are international, but the legal names and government requirements are not universal.

### a. Cyber Security Management Act

### b. Enforcement Rules of the Cyber Security Management Act

### c. Regulations Governing Cybersecurity Responsibility Classification

#### I. Grade A

- Covers organizations / systems associated with major national interests, such as national security, critical infrastructure, or important public services.

#### II. Grade B

- Covers organizations / systems associated with government-funded or government-supported activities, including certain research and development activities.

#### III. Grade C

- Covers information systems established or outsourced by individual government agencies.

#### IV. Grade D

- Covers information-related work that does not involve independently maintained or outsourced information systems under the above categories.

#### V. Grade E

- Organizations with no relevant cyber information systems and that do not provide cyber / information services.

> **Study note:** Exact Taiwanese responsibility-level classifications are subject to the applicable version of Taiwan's law and subordinate regulations. Check the current official text when this is being used for an examination.

## B. Information Management

### a. CMMI

### b. ITSM (IT Service Management)

- ITSM is a management approach / discipline rather than one single software product. It describes how an organization should manage IT services through consistent processes and governance.

#### I. Service-oriented

- ITSM treats IT as a service provider that creates business value, rather than merely as a technical support function.

#### II. Process-driven

- ITSM uses defined processes and practices. Examples of related frameworks and bodies of practice include ITIL and COBIT, although they serve different purposes and should not be treated as identical frameworks.

#### III. Customer-oriented

- ITSM emphasizes customer needs, user experience, communication, and cooperation so that IT services meet business expectations.

#### IV. Continual improvement

- ITSM emphasizes monitoring, measurement, feedback, and ongoing improvement to increase efficiency, reduce unnecessary cost, and improve service value.

### c. Examples

#### I. ITIL

- A widely used body of guidance for IT service management; certifications are available.

#### II. COBIT

- A framework from ISACA focused strongly on governance and management of enterprise information and technology.

## C. Outsourcing Management

### a. Definition

#### I.

- Outsourcing management means that an organization transfers some business functions, services, or technical activities to an external supplier or contractor. The organization delegates execution and some operational responsibility while retaining appropriate governance and accountability.
- Goals may include cost control, access to specialized expertise, scalability, efficiency, and faster delivery.

### b. Intellectual Property Transfer and Protection

#### I.

- Outsourcing may involve transferring or sharing intellectual property such as patents, trademarks, copyrights, source code, and trade secrets. Contracts should clearly define ownership, licenses, permitted uses, and protection requirements.

### c. Contracts and Legal Liability

#### I.

- Outsourcing requires contracts defining responsibilities, obligations, rights, confidentiality, liability, breach handling, dispute resolution, service levels, and termination conditions.

### d. Data Privacy and Security

#### I.

- Outsourced providers may process sensitive data such as customer information and financial data. The organization must ensure that vendors follow applicable privacy, security, and compliance requirements.

### e. Technology Transfer and Confidentiality

#### I.

- Outsourcing may involve technical knowledge and technology transfer. Contracts should specify permitted transfer, usage limitations, confidentiality, ownership, and protections against unauthorized disclosure.

### f. Intellectual Property Dispute Resolution

#### I.

- If an intellectual-property dispute occurs, the parties should resolve it according to applicable law and the contract, potentially through negotiation, mediation, arbitration, or litigation.

## D. Relationship Management

### a. Identify Stakeholders

#### I.

- Identify stakeholders and understand their needs, expectations, interests, influence, and concerns, including both internal and external stakeholders.

### b. Establish Relationships

#### I.

- Build positive, open, and transparent relationships through effective communication, trust, and respect.

### c. Communication and Cooperation

#### I.

- Use effective communication and collaboration to solve problems, formulate policies, execute plans, and respond to stakeholder needs and feedback.

### d. Conflict Resolution

#### I.

- Manage disagreements and conflicts among stakeholders, identify common interests, and balance competing needs and interests.

### e. Maintain Relationships

#### I.

- Proactively maintain stakeholder relationships and continually adjust policies, strategies, and actions to meet changing needs and expectations.

## E. Risk Management (Mnemonic: identify → assess → respond → monitor → improve)

### a. Risk Identification and Assessment

#### I. Identify risks

- First identify threats and risks that may affect the confidentiality, integrity, availability, security, and continuity of information systems.
- This can involve periodic risk assessments, security reviews, vulnerability scanning, asset inventories, business-process analysis, and threat analysis.
- The key is to understand information assets, business processes, technology infrastructure, potential threats, and plausible attack paths.

#### II. Assess risks

- After risks are identified, evaluate their likelihood and potential impact.
- Qualitative and quantitative approaches can be used, including risk matrices, scoring models, probability models, and scenario analysis.
- The purpose is to determine which risks deserve the greatest attention and treatment.

### b. Respond to Risks

#### I.

- Risk response means taking actions to reduce the likelihood and/or impact of risk.
- Possible responses include prevention, reduction, transfer, avoidance, or acceptance.
- Examples include strengthening cybersecurity, performing regular backups, implementing security training, and improving access controls.

### c. Monitor Risks

#### I.

- Risk management is continuous rather than a one-time activity.
- Organizations should monitor changes in risk through risk registers, security-event monitoring, anomaly detection, log analysis, and periodic reviews.
- The goal is to detect new threats, changing conditions, and vulnerabilities early enough to respond effectively.

### d. Continual Improvement

#### I.

- Risk management requires periodic reassessment and optimization.
- Organizations can conduct exercises, post-incident reviews, policy updates, control reviews, and continuous improvement activities to improve their ability to identify and handle risk.

## F. Performance Evaluation

### a. Alignment with Business Objectives

#### I.

- The first task of performance evaluation is to ensure that IT and information-system objectives align with organizational business objectives.
- System design, implementation, and operation should directly support business strategy and requirements.

### b. Performance Indicator Setting

#### I.

- Performance evaluation requires appropriate indicators to measure system operation and value.
- Indicators can include:
  - Technical measures: availability, stability, performance, security.
  - Business measures: service availability, user satisfaction, process efficiency.
  - Strategic measures: market growth, customer satisfaction, business value.
- Indicators should be measurable, comparable, meaningful, and actionable.

### c. Data Collection and Analysis

#### I.

- Collect and analyze data relevant to the selected performance indicators.
- Sources can include system logs, surveys, user feedback, operational metrics, and business data.
- Analysis helps identify problems, trends, performance gaps, and opportunities for improvement.

### d. Evaluation Method Selection

#### I.

- Performance evaluation may use both qualitative and quantitative methods.
- Qualitative methods include user-satisfaction surveys, expert reviews, and case studies.
- Quantitative methods include data analysis, statistical analysis, and modeling.
- The method should be chosen according to evaluation objectives, available data and resources, and the characteristics of the evaluation target.

### e. Communicating and Applying Results

#### I.

- The ultimate goal of evaluation is to support decisions and improvement.
- Results should be communicated to relevant stakeholders such as management, business units, and technical teams.
- The findings should then be used to improve system design, operation, management, and business value.

### f. Continual Improvement

#### I.

- Performance evaluation should be repeated regularly to detect problems, optimize performance, and increase the value contributed by information systems.
- The evaluation process should be integrated into the organization's broader continuous-improvement cycle together with strategic planning, business-process optimization, and technology innovation.

## G. Open Data Applications and Management

### a. Application Areas

#### I.

- Open data can be used across government, business, academic research, and social innovation.
- In government, open data can improve transparency, governance, and public participation.
- In business, open data can support market analysis, business intelligence, and product innovation.
- In research, open data can improve scientific collaboration and reproducibility.
- In social innovation, open data can help identify and address social problems.

### b. Data Types

#### I.

- Open data can include geospatial data, socioeconomic data, scientific research data, biomedical data, transportation data, and many other categories.
- Data may originate from government agencies, companies, universities, research institutions, and non-profit organizations.

### c. Data Management

#### I.

- Open-data management includes data collection, cleaning, storage, publication, metadata management, access, and updating.
- Data providers need appropriate policies and standards to maintain quality, accuracy, reliability, and usability.
- Publication should consider machine-readable formats, APIs, standards, licensing, and access methods.
- Data should be updated appropriately to maintain timeliness.
- Privacy and security must also be considered so that open data does not unintentionally expose protected personal information.

### d. Data Applications

#### I.

- Open-data applications include data analysis, visualization, dashboards, maps, and application development.
- Analysis can reveal patterns and support decisions.
- Visualization can present information as charts, maps, animations, and other forms that improve understanding and communication.
- Developers can build applications and services based on open data.

### e. Social Impact

#### I.

- Open data can improve government transparency and accountability, support economic and technological innovation, facilitate academic collaboration, and contribute to solving social problems.

---

|#############################################################################################################|

# 4. Cybersecurity Management

Reference:

- Taiwan National Institute of Cyber Security (NICS) / related government materials:
  - https://www.nics.nat.gov.tw/core_business/cybersecurity_defense/GCB/
- https://medium.com/upas/%E5%85%AC%E9%83%A8%E9%96%80%E7%9A%84%E8%B3%87%E5%AE%89%E6%8E%AA%E6%96%BD-vans-%E6%98%AF%E5%A6%82%E4%BD%95%E5%BB%BA%E7%AB%8B%E5%AE%8C%E6%95%B4%E7%9A%84%E5%BC%B1%E9%BB%9E%E6%8E%83%E6%8F%8F%E6%A9%9F%E5%88%B6-699e8c349871

## A. Cybersecurity Regulations and Standards (Taiwan Regulations)

> The legal and regulatory part is jurisdiction-specific. International standards and frameworks should be studied separately from Taiwan's laws and government requirements.

## B. Cybersecurity Risk Management (Mnemonic: Identify → Assess → Respond → Monitor → Improve)

### a. Steps

#### I. Identify Risks

- 🤔. First identify potential cybersecurity risks in the information system.

#### II. Assess Risks

- 🤔. Assess likelihood and impact, and prioritize the risks most likely to cause serious losses or operational disruption.

#### III. Respond to Risks

- 🤔. Develop or implement measures to reduce the likelihood or impact of risks, for example:
  - 😄. Strengthen network security.
  - 😄. Perform regular data backups.
  - 😄. Provide security training.

#### IV. Monitor Risks

- 🤔. Establish mechanisms to monitor how risks change and evolve, for example:
  - 😄. Periodically review the risk register.
  - 😄. Detect security incidents and anomalous activities.
  - 😄. Collect and analyze security logs.
  - 😄. Detect potential threats in a timely manner.

#### V. Continual Improvement

- 🤔. Regularly review the risk-management process, learn from incidents and exercises, and improve controls and procedures.

### b. Basic Risk Strategies (Mnemonic: Avoid → Transfer → Mitigate → Accept)

#### I. Risk Avoidance

- 🤔. Change the business process, system design, or operating method to eliminate a specific risk.
- 😄. Possible approaches:
  - 😄. **Stop high-risk activities:** If an activity or application creates excessive risk and cannot be adequately secured, stop using it.
  - 😄. **Modify business processes:** Redesign the process or replace insecure technology with a safer approach.

#### II. Risk Transfer

- 🤔. Transfer part of the financial or operational consequences of a risk to another party through contracts, insurance, or outsourcing.
- 😄. Examples:
  - 😄. **Buy insurance:** Cybersecurity insurance can reduce some financial consequences of an incident.
  - 😄. **Outsource services:** Transfer certain operational responsibilities to qualified third parties and define security responsibilities contractually.
  - 😄. **Contractual agreements:** Define responsibilities, notification requirements, and liability if a security incident occurs.

#### III. Risk Mitigation

- 🤔. Implement controls that lower the likelihood or impact of a risk.
- 😄. Examples:
  - 😄. Deploy security technologies such as firewalls, IDS/IPS, endpoint protection, and malware defenses.
  - 😄. Encrypt sensitive information in storage and transit.
  - 😄. Apply security patches promptly.
  - 😄. Implement access control, backup, disaster recovery, and security policies.

#### IV. Risk Acceptance

- 🤔. Decide that a particular risk is within the organization's acceptable level and formally accept it.
- 😄. Typical activities:
  - 😄. **Risk assessment and analysis:** Determine which risks are acceptable and which require treatment.
  - 😄. **Decision and documentation:** Management makes and records the risk-acceptance decision.
  - 😄. **Monitoring and review:** Continue monitoring the accepted risk and reevaluate it when conditions change.

## C. Business Continuity Management (BCM)

### a. Definition

#### I.

- Business Continuity Management is the management discipline for identifying threats to an organization and understanding the potential impact of those threats on business operations, then preparing the organization to respond and recover.

### b. Basic Elements

#### I. Before an Incident

- Prepare measures that reduce the probability or impact of disruption.

#### II. During an Incident

- Respond in ways that reduce damage and maintain critical operations.

#### III. After an Incident

- Restore normal or acceptable operations and learn from the event.

### c. Basic Process

#### I. Risk Assessment

- 🤔. Identify and assess threats that may affect business operations, including natural disasters, technical failures, human errors, cyber incidents, and other disruptions.

#### II. Business Impact Analysis (BIA)

- 🤔. Analyze business operations to determine the actual impact of different disruptions.
- 🤔. Identify critical processes, systems, dependencies, recovery priorities, and acceptable downtime / data-loss thresholds.

#### III. Planning

- 🤔. Based on risk assessment and BIA results, develop business continuity plans (BCP) and appropriate incident-response / emergency-response plans. Define responsibilities and roles so that the organization can respond quickly and effectively.

#### IV. Execution and Testing

- 🤔. Implement BCP and response procedures, establish response teams, backup systems, alternate facilities, communication mechanisms, and employee training.
- 🤔. Conduct tests and exercises periodically to verify that the plans actually work.

#### V. Continual Improvement

- 🤔. Regularly review plans, collect lessons learned, and update them as business requirements, technology, threats, and organizational structures change.

> ISO 22301 is the international standard for Business Continuity Management Systems (BCMS). It provides a systematic framework for preparing for, responding to, and recovering from disruptive events and is intended for organizations of different sizes and types. citeturn805786search2turn805786search4

## D. Information Security Audit

References:
- https://marketing.ares.com.tw/newsletter/2022-05-cybersecurity/info-security-audit
- https://ithelp.ithome.com.tw/articles/10276760

### a. Definition

#### I.

- An information security audit evaluates whether an organization's IT architecture, systems, processes, and controls satisfy applicable security requirements and standards.

### b. Evaluation Focus: CIA Triad

#### I. Confidentiality — unauthorized parties must not read protected information

- 🤔. Resources and information should not be exposed or disclosed to unauthorized users or systems.
- 🤔. Controls commonly include encryption, access control, authentication, and data-masking techniques.

##### 😄. Encryption

- **Symmetric encryption (e.g., AES):** The same secret key is used for encryption and decryption.
- **Asymmetric cryptography (e.g., RSA):** Uses a public/private key pair. In a common encryption use case, the public key encrypts and the private key decrypts.

##### 😄. Access Control

- **Role-Based Access Control (RBAC):** Permissions are assigned to roles, and users are assigned roles.
- **Attribute-Based Access Control (ABAC):** Access decisions are based on attributes of subjects, resources, actions, and/or environmental context.

##### 🤔. Authentication

- **Multi-Factor Authentication (MFA):** Combines multiple authentication factors such as passwords, security keys, authenticator applications, or biometrics.
- **Single Sign-On (SSO):** One authentication session can allow access to multiple applications according to the organization's federation / identity architecture.

##### 😄. Data Masking

- Sensitive data is partially hidden, transformed, or tokenized so that it can remain useful without exposing the original value.

#### II. Integrity — unauthorized modification must be prevented or detected

- 🤔. Information should remain accurate, complete, and trustworthy and should not be modified or destroyed without authorization.
- 🤔. Common techniques include digital signatures, hashes, checksums, message authentication codes, and certificates.

##### 😄. Digital Signatures

- A digital signature can help verify the origin / signer and the integrity of a digital message or document.
- A signer creates a signature using a private key, and a verifier checks it using the corresponding public key.

###### 😄. RSA

- RSA is an asymmetric public-key cryptographic algorithm based on computational difficulty related to integer factorization. It can be used for encryption and digital signatures, depending on the scheme.

###### 😄. DSA (Digital Signature Algorithm)

- DSA is a **public-key digital signature algorithm based on discrete-logarithm cryptography**.
- **Correction to the original note:** DSA is **not symmetric encryption**.

##### 😄. Hashing

- A cryptographic hash converts data into a fixed-length digest. A small change in the input should produce a substantially different digest, allowing changes to be detected when a trusted reference digest exists.

###### 😄. SHA-1

- Produces a 160-bit digest. SHA-1 is considered cryptographically broken for collision resistance and should generally not be used for new security-sensitive designs.

###### 😄. SHA-256 / SHA-384 / SHA-512

- Members of the SHA-2 family that produce digests of different lengths.

###### 😄. MD5

- A legacy hash function with practical collision weaknesses; it should not be used for security-critical integrity or authenticity purposes.

###### 😄. Message Authentication Code (MAC)

- A keyed integrity/authentication mechanism. A MAC combines a secret key with a message to allow a recipient possessing the same secret key to verify integrity and authenticity.

##### 😄. Digital Certificates

- A digital certificate is an electronic credential used to bind an identity or subject name to a public key. In common PKI systems, a Certificate Authority (CA) signs the certificate.

#### III. Availability — authorized users should be able to access resources when needed

- 🤔. When an authorized user needs an information resource, the system should make that resource available within the required operational conditions.
- 🤔. Common controls include backups, redundancy, high-availability architectures, failover, disaster recovery, capacity management, and resilience engineering.

### c. PDCA

- **Plan → Do → Check → Act**
- Plan the improvement, implement it, verify the results, and act to standardize or improve it further.

## E. Vulnerability Assessment and Penetration Testing

### a. Vulnerability Assessment

#### I. Vulnerability Scanning

- 🤔. Automated vulnerability-scanning tools can inspect operating systems, applications, and network services for known vulnerabilities.
- 🤔. This can identify known weaknesses relatively quickly and at lower cost than a fully manual assessment.
- 🤔. A limitation is that automated scanners mainly depend on known vulnerability signatures, versions, configurations, and rules; newly discovered or highly contextual flaws may require manual analysis.

#### II. Typical Output

- After scanning:
  - Vulnerability statistics.
  - Vulnerability descriptions.
  - Affected systems / paths.
  - Risk ratings where supported.
  - Remediation recommendations.

### b. Penetration Testing

#### I. Definition

- 🤔. Authorized penetration testing uses security professionals and attacker-style thinking to assess whether systems can actually be compromised by chaining weaknesses together.
- 🤔. The objective is to validate practical security impact and identify weaknesses in applications, systems, infrastructure, or defenses.

#### II. Steps

##### 🤔. Preparation

- 😄. Define authorization, objectives, scope, target systems, timing, rules of engagement, communication procedures, and test plans.

##### 🤔. Information Gathering

- 😄. Collect relevant information about the target environment and establish the methodology and test strategy. Frameworks such as OSSTMM may be referenced depending on the engagement.

##### 🤔. Analysis

- 😄. Use recognized vulnerability categories and application-security guidance, including OWASP materials, to identify and validate weaknesses.
- 😄. SANS
- 😄. OWASP

References:
- https://www.cloudflare.com/zh-tw/learning/security/threats/owasp-top-10/
- https://owasp.org/www-project-top-ten/

##### 🤔. Exploitation / Target Penetration

- 😄. Perform authorized security tests against applications, systems, websites, or infrastructure to validate exploitability and impact.

##### 🤔. Vulnerability Consulting / Reporting

- 😄. Deliver the penetration-test report and provide remediation recommendations.

## F. Mobile / App Security Testing

## G. Cybersecurity Frameworks (CIS Controls / STIGs / NIST)

## H. Threat Intelligence

### a.

- In simple terms, threat intelligence is the collection, processing, analysis, and use of information about cybersecurity threats so that organizations can make better security and risk-management decisions.

## I. Digital Forensics — Common Areas

### a. Data Recovery Tools

- Software and hardware tools used to recover data from damaged, deleted, or otherwise inaccessible storage media, such as EnCase, Forensic Toolkit (FTK), and R-Studio.

### b. Network Forensics

- Analyze network packets, flows, logs, and related telemetry to reconstruct network activity, investigate incidents, and preserve evidence.

### c. Mobile Device Forensics

- Specialized techniques and tools for examining smartphones, tablets, and other mobile devices to collect relevant digital evidence.

### d. Metadata Analysis

- Analyze metadata from files, images, videos, and other artifacts, such as timestamps, locations, software information, or authorship-related fields, to understand the origin and history of evidence.

### e. File Fingerprinting

- Use hashes or other identifying characteristics to identify and compare files and help verify authenticity and integrity.

### f. Virtualization Forensics

- Analyze virtual machines, virtual disks, snapshots, and related artifacts while preserving the original evidence and minimizing unnecessary modification.

### g. Blockchain Forensics

- Analyze blockchain transactions, addresses, smart contracts, and related data to investigate cryptocurrency activity and other blockchain-based events.

### h. Social Media Forensics

- Analyze publicly or legally obtained social-media information and activity to understand relationships, timelines, communications, and potentially relevant events.

### i. Digital Identity Verification

- Analyze digital evidence to determine authenticity, integrity, attribution, and credibility where relevant to an investigation.

### j. Digital Forensics Law and Ethics

- Covers legal and ethical issues in acquiring, preserving, analyzing, and presenting digital evidence, including authorization, chain of custody, privacy, and evidentiary requirements.

## J. Cybersecurity Law and Information Ethics

- Includes privacy law, personal-data protection, cybersecurity regulation, legal compliance, professional ethics, and responsible handling of digital information.

## K. Security Health Check

- Basically, checking whether computers or systems may contain malware, suspicious software, insecure configurations, or other indicators of compromise.

### a. Antivirus and Anti-Malware Scanning

### b. System Log Analysis

### c. Network Traffic Monitoring

#### I. Network Analysis Tools

- Use tools such as Wireshark to inspect network traffic and identify suspicious communication, such as unauthorized external connections or unusual data transfers.

#### II. Firewall Logs

- Review firewall logs for suspicious inbound and outbound traffic that may indicate malicious activity or communication with command-and-control infrastructure.

### d. Check Startup Items and Processes

#### I. Startup Item Management

- Inspect startup applications and services to identify unknown or suspicious programs that launch automatically.
- On Windows, tools can include Task Manager's Startup area, system configuration tools, and endpoint-management platforms.

#### II. Process Monitoring

- Use Windows Task Manager / PowerShell or Linux commands such as `ps` and `top` to inspect currently running processes and investigate suspicious or unfamiliar ones.

### e. System Integrity Checking

#### I. File Integrity Monitoring (FIM)

- Use FIM tools to detect unauthorized changes to critical files.

#### II. System File Checks

- On Windows, `sfc /scannow` can check and repair protected system files.
- On RPM-based Linux systems, `rpm -Va` can verify installed package files against package metadata.

## L. Digital Evidence

### a. Evidence Preservation

#### I.

- The process of collecting, preserving, examining, and presenting digital information while maintaining its evidentiary integrity and legal defensibility.

### b. Admissibility / Evidentiary Value

#### I. Legality

- Ensure evidence was obtained using lawful and authorized procedures.

#### II. Integrity

- Use appropriate acquisition and preservation methods so that evidence is not unintentionally altered or destroyed.

## M. Identifying National Cybersecurity Service Providers / Third-Party Vendors

### a. SOC (Security Operations Center) Services

- SOC services are often provided by internal teams or third-party providers. Their central role is centralized security monitoring, detection, analysis, and response.

#### I. 24/7 Security Monitoring

##### 🤔. Real-Time Monitoring

- SOC personnel and systems monitor network, endpoint, identity, and security telemetry for suspicious behavior and threats.

##### 🤔. Log Management

- Collect and analyze system logs, network telemetry, and security-device events.

#### II. Threat Detection and Response

##### 🤔. Threat Intelligence

- Use internal and external threat-intelligence sources to improve detection and anticipate relevant threats.

##### 🤔. Incident Response

- After detecting a threat, the SOC may contain affected systems, block malicious traffic, disable compromised accounts, or coordinate other response actions.

#### III. Vulnerability Management

##### 🤔. Vulnerability Scanning

- Periodically scan systems and networks for known weaknesses.

##### 🤔. Patch Management

- Help identify, prioritize, deploy, and verify security patches.

#### IV. Compliance Management

##### 🤔. Compliance Monitoring

- Monitor whether controls align with applicable regulations and standards such as GDPR, HIPAA, or PCI DSS where relevant.

##### 🤔. Compliance Reporting

- Generate security and compliance reports that support audits and governance.

#### V. Reporting and Analysis

##### 🤔. Periodic Reports

- Provide incident summaries, trend analysis, metrics, and improvement recommendations.

##### 🤔. Incident Review

- Review major incidents, identify root causes and contributing factors, and recommend improvements.

#### VI. Security Assessment and Testing

##### 🤔. Penetration Testing

- Conduct authorized penetration tests to assess defensive effectiveness.

##### 🤔. Security Assessment

- Evaluate networks, systems, processes, and controls to identify security gaps.

#### VII. Security Training and Awareness

##### 🤔. Employee Training

- Provide targeted security awareness and skills training.

##### 🤔. Simulated Exercises

- Conduct exercises such as phishing simulations, incident-response drills, and tabletop exercises.

#### VIII. Security Strategy and Consulting

##### 🤔. Strategy Development

- Help organizations define comprehensive security strategies and policies.

##### 🤔. Security Consulting

- Provide expertise for specific cybersecurity challenges and architecture decisions.

#### IX. Data Protection and Recovery

##### 🤔. Data Backup and Recovery

- Provide backup and disaster-recovery services to support recovery after incidents.

##### 🤔. Data Encryption

- Help deploy appropriate encryption and key-management measures.

#### X. Endpoint Protection

##### 🤔. Endpoint Detection and Response (EDR)

- Provide endpoint protection, monitoring, investigation, and response capabilities.

#### XI. Supplement: National Cybersecurity Security Operations / N-SOC

- 🤔. Possible monitoring sources include:
  - Firewall
  - IDS/IPS
  - Web Application Firewall (WAF)
  - Antivirus / endpoint protection
  - Advanced Persistent Threat (APT) indicators
  - Active Directory (AD)
  - Endpoint Detection and Response (EDR)

### b. Cybersecurity Health Assessment

### c. Vulnerability Scanning

### d. Penetration Testing

### e. Social Engineering Exercises

## N. Data Governance

### a.

- **Data Governance** is the organizational discipline for defining responsibilities, policies, processes, standards, and controls so that data remains appropriately available, usable, accurate, consistent, protected, and compliant throughout its lifecycle—from acquisition and creation through use, sharing, retention, and disposal.

---

|#############################################################################################################|

# 5. Cybersecurity Technologies

## A. User Identity Authentication Mechanisms

### a. Purpose

#### I.

- Basically, authentication verifies who the user is; authorization then determines what that user is allowed to access or do.

### b. Common Authentication Methods

#### I. Username and Password Authentication

- The most common traditional authentication mechanism.

#### II. Multi-Factor Authentication (MFA)

- 🤔. Uses two or more distinct authentication factors to verify identity. Factors can include something you know (password/PIN), something you have (security key/smart card), and something you are (biometrics such as fingerprint or iris recognition).

#### III. Single Sign-On (SSO)

- 🤔. A user authenticates once and can then access multiple systems or applications according to the organization's identity and federation architecture.
- 🤔. Microsoft Active Directory environments commonly support SSO-related enterprise identity mechanisms, but AD itself is not synonymous with SSO.

#### IV. Token Authentication

- Uses security tokens or session tokens as evidence of an authenticated or authorized session.

#### V. Third-Party Authentication / Federated Identity

- 🤔. Common standards include **OAuth 2.0** and **OpenID Connect (OIDC)**.
- 🤔. OAuth is primarily an **authorization** framework, while OpenID Connect is an **identity layer built on OAuth 2.0**.
- 🤔. These mechanisms are often used for third-party login and delegated authorization on web applications. For example, when a service allows “Sign in with Google,” the service delegates authentication to Google's identity system and receives an assertion / token indicating the authenticated identity.
- 🤔. This can improve usability and reduce the need for users to maintain separate passwords, while also allowing identity providers to provide mature security mechanisms.

##### 😄. Advantages

- 😄. **Convenience:** Users do not need to create separate authentication credentials for every application.
- 😄. **Centralized security:** Established identity providers such as Google and Microsoft can provide strong authentication mechanisms, account recovery, fraud detection, and security controls.

### c. Common Authentication Vulnerabilities

Reference:
- https://feifei.tw/authentication/

## B. Access Control

### a. Definition

#### I.

- Defines which users, identities, devices, services, or roles can access which resources and which operations they are allowed to perform.

### b. Common Access-Control Models

#### I. Role-Based Access Control (RBAC)

- 🤔. Permissions are assigned to roles, and users are assigned to roles. This simplifies permission management and improves consistency.
- 🤔. Examples include role-based authorization in enterprise applications and directory services.
- 🤔. **Correction:** Active Directory supports role/group-based authorization patterns, but AD is not itself “an RBAC system.” SELinux is primarily an example of mandatory access control (MAC), not RBAC.

#### II. Attribute-Based Access Control (ABAC)

- 🤔. Access decisions can depend on user attributes, resource attributes, requested actions, and environmental conditions such as device state or location.
- 🤔. ABAC allows more dynamic and fine-grained policy decisions.

#### III. Mandatory Access Control (MAC)

- 🤔. Access is determined by system-enforced policy rather than discretionary decisions by individual resource owners.
- 🤔. Common examples include security-label / multi-level-security systems and technologies such as SELinux.

#### IV. Discretionary Access Control (DAC)

- 🤔. Resource owners can control access permissions to their resources.
- 🤔. Classic Unix/Linux file permissions are a common example of DAC concepts.

## C. Hacking / Attack Methods

### a. Malware Attacks

- Malware includes viruses, worms, trojans, spyware, ransomware, and other malicious software or code. Attackers can use malware to steal information, disrupt systems, or extort victims.

### b. Phishing Attacks

- Attackers use email, SMS, websites, social media, or other communication channels to impersonate trusted entities and trick users into revealing credentials, financial information, or other sensitive data.

### c. DDoS Attacks (Distributed Denial of Service)

- The goal is to make a target system or service unavailable by overwhelming it with traffic, requests, or resource-exhausting activity.

#### I. UDP Flood

- Attackers send large volumes of UDP packets to consume bandwidth or processing capacity.

#### II. SYN Flood

- Attackers send large numbers of TCP SYN requests. If the target maintains large numbers of half-open connections, resources can be exhausted.

#### III. HTTP Flood

- Attackers generate a large volume of HTTP requests that consume server-side processing resources.

#### IV. ICMP Flood

- Attackers send a large number of ICMP packets, such as Echo Requests, to consume network or processing resources.

#### V. Slowloris

- A class of application-layer denial-of-service technique that attempts to keep many HTTP connections open using slow, incomplete requests.

#### VI. DNS Amplification / Reflection

- Attackers abuse improperly secured or misconfigured third-party DNS infrastructure to cause servers to send large responses toward a victim.
- The attacker can spoof the source address in some network conditions so that the DNS response is directed at the victim.
- The amplification effect means the response can be substantially larger than the request, allowing an attacker to produce significant traffic with a smaller amount of originating traffic.
- Proper source-address validation, such as BCP 38-style anti-spoofing controls, can help reduce reflection attacks.

#### VII. NTP Amplification

- Similar in principle to DNS amplification, attackers abuse vulnerable / misconfigured NTP servers so that responses are sent toward a spoofed source address.
- Historical attacks abused commands such as `monlist`; modern NTP deployments should disable vulnerable functionality and restrict unnecessary exposure.

#### VIII. SSDP Amplification

- Attackers abuse exposed SSDP/UPnP services as reflection/amplification infrastructure to direct traffic toward a victim.

#### IX. Botnets

- 🤔. Botnets are networks of compromised devices controlled by an attacker or criminal infrastructure.
- 🤔. They are strongly associated with DDoS, spam, credential attacks, malware distribution, and other large-scale operations.
- 🤔. A compromised host may run quietly for long periods and later receive commands from command-and-control infrastructure.
- 🤔. Because many botnet hosts are ordinary consumer or enterprise devices, attribution can be difficult.
- 🤔. Botnet access and DDoS-for-hire services have also become commercialized in criminal markets.

### d. Password and Credential Attacks

#### I. Dictionary Attack

- 🤔. **Method:** Try passwords from a list of common words, phrases, and previously observed passwords.
- 🤔. **Principle:** People often choose predictable passwords, and those patterns can appear in password dictionaries.
- 🤔. **Defense:**
  - 😄. Use long, unique passwords or passphrases.
  - 😄. Use MFA or phishing-resistant authentication.

#### II. Brute-Force Attack

- 🤔. **Method:** Systematically test large numbers of possible character combinations.
- 🤔. **Principle:** Given enough time and an unrestricted search space, exhaustive guessing can eventually find the correct password, but the time and cost can be prohibitive.
- 🤔. **Defense:**
  - 😄. Use sufficiently long passwords.
  - 😄. Apply rate limiting and login protection instead of relying only on account lockout.
  - 😄. Store passwords using a modern password-hashing scheme with salts, such as Argon2id, scrypt, or bcrypt where appropriate.

#### III. Credential Stuffing

- 🤔. **Method:** Use username/password pairs exposed from breaches of other services and try them against a different target service.
- 🤔. **Principle:** Password reuse allows a credential leaked from one service to remain useful elsewhere.
- 🤔. **Defense:**
  - 😄. Use unique passwords for different services.
  - 😄. Enable MFA or passkeys.
  - 😄. Detect anomalous login behavior and known compromised credentials.

#### IV. Phishing

- 🤔. **Method:** Use deceptive emails, websites, messages, or login pages to persuade users to reveal credentials.
- 🤔. **Principle:** Phishing exploits human trust and social engineering rather than requiring direct password cracking.
- 🤔. **Defense:**
  - 😄. Train users to recognize suspicious messages and login pages.
  - 😄. Use email filtering and anti-phishing controls.
  - 😄. Prefer phishing-resistant MFA such as FIDO2 / passkeys where possible.

#### V. Man-in-the-Middle (MITM) Attack

- 🤔. **Method:** An attacker positions themselves between two parties and attempts to intercept, observe, or manipulate communication.
- 🤔. **Principle:** The attacker may exploit weak encryption, certificate validation, network compromise, routing manipulation, or compromised endpoints.
- 🤔. **Defense:**
  - 😄. Use secure protocols such as HTTPS / TLS.
  - 😄. Validate certificates and TLS configuration.
  - 😄. Use strong authentication and secure endpoint/network configurations.

#### VI. Replay Attack

- 🤔. **Method:** Capture legitimate authentication or transaction data and replay it later.
- 🤔. **Principle:** The attacker does not necessarily need to recover the underlying secret if the captured message is still accepted by the target.
- 🤔. **Defense:**
  - 😄. Use nonces, timestamps, sequence numbers, challenge-response protocols, short-lived tokens, or other freshness mechanisms.

### e. Man-in-the-Middle Attacks

- A general attack category in which an attacker interferes with communication between parties to eavesdrop, modify, or impersonate communication.

### f. SQL Injection Attacks

- An application-security attack in which untrusted input is interpreted as SQL syntax, allowing unauthorized data access or modification.
- The standard defense is to use parameterized queries / prepared statements and appropriate input validation and authorization controls.

### g. Social Engineering Attacks

- Attacks that exploit human psychological and social characteristics to deceive, manipulate, impersonate, or persuade victims into performing unsafe actions or revealing information.

### h. Credential Reuse / Credential Stuffing

- Attackers use credentials leaked from one compromised site to attempt access to other services.
- The root issue is password reuse across systems.
- Users should use unique credentials for every service and change credentials promptly after a confirmed breach.

### i. Fake Wireless Access Point / Evil Twin

- A fake wireless access point can imitate the name of a legitimate Wi-Fi network in a hotel, café, airport, or other public location.
- If a victim connects to the fake network, the attacker may observe traffic, manipulate connections, or attempt additional attacks.
- Modern HTTPS/TLS protects the content of properly secured connections, so merely connecting to a malicious Wi-Fi network does not automatically reveal all encrypted traffic.

### j. Web Page Hijacking / Web Traffic Hijacking

- Users may be redirected to another website or shown modified web content because of DNS compromise, website compromise, malicious scripts, unauthorized configuration changes, or other attacks.
- Malicious content may contain false information, fake login pages, or malware-distribution mechanisms.

#### I. DNS Hijacking

- Attackers manipulate DNS responses or local DNS settings so that a legitimate domain resolves to an attacker-controlled destination.

#### II. Man-in-the-Middle (MITM)

- An attacker intercepts or modifies traffic between a user and a legitimate web service.

#### III. Cross-Site Scripting (XSS)

- Attackers inject or cause malicious JavaScript to execute in a victim's browser in the security context of a trusted web application.

##### 🤔. Stored XSS

- 😄. The malicious payload is stored by the target application, such as in a database, comment, forum post, or profile field.
- 😄. When another user views the affected content, the browser may execute the payload.
- 😄. Example: an attacker posts malicious script in a forum comment, and every user viewing that comment becomes a potential victim.

##### 🤔. Reflected XSS

- 😄. The malicious payload is sent to the server through a URL parameter, form field, or similar input and is reflected into the response without proper encoding.
- 😄. Attackers may distribute the malicious URL through phishing or other social-engineering channels.

##### 😄. Concrete example

- Assume a vulnerable forum has a search endpoint.
- 😄. **Attacker constructs a malicious link** using an unsafe query parameter.
- 😄. **Attacker distributes the link**, for example through a post, email, or message.
- 😄. **Victim clicks the link.**
- 😄. **Browser sends the request** to the legitimate forum.
- 😄. **Server reflects unsanitized input** into the returned HTML.
- 😄. **Browser parses the response** and executes the injected script because the application failed to encode untrusted input correctly.

> Example payloads are shown here conceptually rather than as a ready-to-use exploit.

##### 🤔. Why use a real trusted site's vulnerability rather than simply sending victims to an attacker's own website?

###### 😄. Using the target website's vulnerability (for example, reflected XSS)

- 😄. **Advantages:**
  - 😄. Greater credibility: a link pointing to a site the victim already trusts is more likely to be clicked.
  - 😄. The malicious code executes within the security context of the trusted origin, so it may gain capabilities that an unrelated malicious domain would not have.
  - 😄. It can be harder for victims to notice because the URL appears to belong to a legitimate site.
- 😄. **Disadvantages:**
  - 😄. The attacker must find and exploit a suitable vulnerability.
  - 😄. The attack stops working if the vulnerability is fixed.

###### 😄. Directing the victim to an attacker-controlled malicious server

- 😄. **Advantages:**
  - 😄. Full control over the malicious server and attack flow.
  - 😄. No dependency on a vulnerability in the victim's trusted website.
- 😄. **Disadvantages:**
  - 😄. The link or domain may appear suspicious.
  - 😄. Browsers, security products, DNS filtering, and reputation services may block it.
  - 😄. Infrastructure may be easier to identify and shut down.

##### 🤔. DOM-Based XSS

- 😄. The payload is handled and executed by client-side JavaScript through unsafe DOM manipulation, and the malicious input does not necessarily need to be reflected by the server.
- 😄. For example, data from a URL fragment or other browser-side input can become dangerous if page JavaScript inserts it into the DOM through an unsafe sink.
- 😄. The vulnerability is therefore fundamentally a client-side application-security issue.

#### IV. Malicious Redirection

- Attackers exploit unauthorized changes, vulnerable redirect logic, compromised websites, or other weaknesses to redirect users to attacker-controlled destinations.

#### V. Session Hijacking

- Attackers obtain session identifiers or other session credentials and use them to impersonate an authenticated user or manipulate an active session.

### k. CSRF (Cross-Site Request Forgery)

Reference:
- https://tech-blog.cymetrics.io/posts/jo/zerobased-cross-site-request-forgery/

#### I.

- CSRF is an attack in which an attacker causes a victim's browser to send an unintended request to a web application where the victim is already authenticated.
- 🤔. A useful distinction is:
  - **XSS abuses the user's trust in a website.**
  - **CSRF abuses the website's trust in the user's authenticated browser session.**

#### II. Basic flow

- 🤔. User visits and logs in to website A.
- 🤔. User's browser stores an authentication cookie or other session credential for A.
- 🤔. While still logged in to A, the user visits malicious website B.
- 🤔. B causes the browser to send a crafted request to A.
- 🤔. The browser may automatically attach cookies associated with A to the request.
- 😄. **Important:** B does **not necessarily obtain A's cookie value**. The classic CSRF problem is that the browser may automatically attach the valid A-session credential to a cross-site request.
- 😄. If A does not properly validate request origin, CSRF tokens, SameSite cookie policies, or other anti-CSRF mechanisms, A may mistakenly treat the request as legitimate.

### l. Replay Attack

Reference:
- https://www.zhihu.com/question/304363663

#### I.

- A replay attack is a network attack in which an attacker captures a previously valid communication message and later retransmits it to obtain unauthorized access or cause an unintended action.

#### II. Analogy

- 🤔. A sends B a letter: “Old friend, please transfer $100 to me. — A.” B obeys. An attacker copies the same letter and signature and sends it again to B, causing another $100 transfer. This illustrates a replay attack.
- 🤔. If an attacker intercepts the letter and changes its content to “Please transfer $10,000 to C,” that is closer to a **message-modification / MITM-style attack**, not a pure replay attack.

## D. Cryptographic Systems

## E. Certificate / Credential Management

### a. PKI (Public Key Infrastructure)

Reference:
- https://www.youtube.com/watch?v=AQDCe585Lnc&ab_channel=SimplyExplained

#### I. Core cryptographic technology

- PKI commonly uses public-key cryptography to establish identity and trust relationships and to support secure communication.
- 🤔. **Encryption:** In a typical public-key encryption scenario, the recipient's public key encrypts and the recipient's private key decrypts.
- 🤔. **Digital signatures:** The signer uses a private key to create a signature and others use the corresponding public key to verify it.
- 😄. Because the private key is supposed to be secret and cannot feasibly be derived from the public key, only the holder of the private key should be able to produce valid signatures—unless the key is compromised.
- 😄. A private key can provide strong cryptographic proof of possession, but by itself it does not tell you whether the associated public key belongs to a trusted organization or website.
- 😄. A **certificate** binds a public key to an identity or subject and is signed by a CA or another trust anchor.

#### II. Core idea: certificates establish a chain of trust

- PKI uses certificates to associate public keys with identities and establish a trust chain.

#### III. Certificates and Certificate Authorities (CAs)

- Certificates are issued by CAs (Certificate Authorities).
- 😄. Examples of public commercial CAs include DigiCert and GoDaddy. VeriSign's former certificate business became part of Symantec and later DigiCert; therefore “VeriSign” is best treated as a historical example rather than a current independent CA brand.

##### 🤔. Application

- HTTPS / TLS certificates are a major PKI application.

#### IV. Public/private key pairs

- Public/private key pairs can be generated by the subscriber or by a provider, depending on the protocol, enrollment process, and security requirements.

#### V. SSL/TLS

- HTTPS commonly uses TLS certificates to authenticate the server to the client.
- Without a valid trusted certificate, browsers may display security warnings; however, certificates are only one part of the TLS trust model.

#### VI. Root Trust

- Major operating systems and browsers ship with trusted root CA certificates.
- The browser can then validate a certificate chain back to a trusted root, assuming the chain and certificate policies are valid.

## F. Digital Envelope

> A digital envelope is primarily a **cryptographic design pattern**, not a single protocol or commercial product.

#### I. Typical use cases

- Used in secure email, file encryption, secure message exchange, and many cryptographic protocols that need efficient point-to-point or object-level encryption.

#### II. Technical implementation

- Combine symmetric and asymmetric cryptography:
  - Symmetric encryption efficiently protects the actual data.
  - Asymmetric cryptography protects or transports the symmetric content-encryption key.

#### III. Advantages

- Combines the speed of symmetric encryption with the key-management advantages of public-key cryptography.

#### IV. Examples

- Similar hybrid-encryption principles are used in many modern secure systems, including parts of TLS and some secure email / messaging systems.
- 😄. Therefore, it is inaccurate to say that ordinary people almost never use the underlying technique. Users may not see the term “digital envelope,” but hybrid cryptography is widely used beneath the applications they use.

## G. Full-Disk Encryption (FDE)

- FDE is widely used in organizations and personal devices to protect data at rest, especially if a device is lost or stolen.

### a. Basic Technology

#### I. Encryption / Decryption Process

- 🤔. **Writing data:** Plaintext → [encryption algorithm + encryption key] → ciphertext → disk storage
- 🤔. **Reading data:** Disk storage → ciphertext → [decryption algorithm + decryption key] → plaintext in memory / application

#### II. Key Technical Characteristics

##### 🤔. Transparent Encryption and Decryption

- 😄. Under normal operation, encryption and decryption are handled automatically by the operating system or storage subsystem.

##### 🤔. On-Demand Decryption / Runtime Access

- 😄. Data stored on the encrypted volume remains encrypted at rest. When authorized software accesses data, the system decrypts it as needed for processing in memory.

##### 🤔. Authentication

- 😄. Users may unlock encrypted storage using passwords, PINs, hardware-backed keys, security devices, or biometrics depending on the platform.

##### 🤔. Key Management

- 😄. Secure generation, storage, and protection of keys are essential.
- 😄. Technologies such as TPMs and HSMs can provide hardware-assisted key protection, depending on the system architecture.

#### III. Examples

- 🤔. **BitLocker (Windows):** Provides volume / device encryption and can protect operating-system and data volumes.
- 🤔. **FileVault (macOS):** Provides full-volume encryption using Apple's storage-security architecture.

### b. File-Level Encryption (FLE)

- Similar in cryptographic principle to FDE, but applied at the file or object level rather than necessarily encrypting an entire disk volume.

### c. Advantage

#### I.

- Data stolen from a device may remain unreadable if the encryption key remains protected and the device is not already unlocked.
- **Important:** FDE does not protect data from an attacker who has already gained authorized access to an unlocked operating system or application session.

## H. Basic Ways to Prevent Malware Threats

### a. Keep Software Updated

- Malware often exploits known vulnerabilities in outdated software. Regularly updating operating systems and applications reduces exposure to known vulnerabilities.

### b. Handle Links and Attachments Carefully

- Do not casually click unknown links or open unfamiliar attachments. Social engineering frequently uses these mechanisms as initial access vectors.

### c. User Security Training

- Train users to recognize suspicious email, websites, downloads, social-engineering attempts, and unusual prompts.

### d. Content Filtering

- Use DNS filtering, web filtering, email security, attachment scanning, and similar controls to reduce access to known malicious websites and content.

### e. Avoid Using Administrator Accounts for Daily Work

- Use standard user accounts for ordinary work when practical. Limiting privileges reduces the potential impact of some malware infections.

## I. Antivirus Software

> Original emphasis: analysis and detection of known threats, with each endpoint doing much of its own management.

### a. Signature Databases

- Antivirus products can use signatures to detect known malware. When files or processes match known indicators, the software can alert, block, quarantine, or remove them.

### b. Heuristic / Behavioral Analysis

- Modern endpoint security tools also use heuristics, behavior detection, reputation, sandboxing, and machine-learning techniques to identify variants and previously unseen threats.

## J. EDR (Endpoint Detection and Response)

> Original emphasis: detect and investigate threats, often with centralized management.

Reference:
- https://www.leyun.cloud/cc-142

### a. Behavioral Analysis

- EDR can analyze process activity, parent-child process relationships, command execution, persistence behavior, network connections, file operations, and other endpoint signals to identify suspicious activity.

#### I. Zero-Day Attack

- 🤔. A **zero-day vulnerability** is a vulnerability that is unknown to the party responsible for developing or defending the affected software at the time it is exploited, or for which no effective patch may yet exist.
- 🤔. A zero-day attack exploits such a vulnerability.
- 🤔. **Fileless attacks** are a different concept: they attempt to execute malicious logic without relying on a conventional malicious executable stored as a file on disk. Fileless techniques can use legitimate system tools, scripts, memory, or other mechanisms.
- 🤔. EDR can improve detection of suspicious behavior associated with some zero-day or fileless attacks, but it cannot guarantee prevention or detection of every zero-day attack.

### b. Threat-Intelligence Integration

- EDR can integrate internal and external threat intelligence to improve detection of emerging threats.

### c. Incident Investigation

- EDR can provide detailed telemetry and investigation / forensic capabilities that help security teams understand attack paths, affected systems, and likely impact.

### d. Automated Response

- EDR platforms can automate response actions such as isolating endpoints, terminating malicious processes, blocking network activity, or disabling compromised accounts, depending on the product.

### e. Central Management Architecture

- EDR systems commonly include a central management console that manages and monitors endpoint agents.

#### I. Central Management Console

- 🤔. **Function:** Centrally manages policy, detection, investigation, reporting, hunting, and response.
- 🤔. **Location:** May run in an organization's own data center or be delivered as a cloud service.

#### II. EDR Agent

- 🤔. **Function:** Installed on endpoint devices to monitor activity, collect telemetry, perform local detection, and execute security controls according to policy.
- 🤔. **Location:** Desktops, laptops, servers, and other protected endpoints.

#### III. How it works

##### 🤔. Data Collection and Monitoring

- 😄. Agents continuously monitor processes, files, network connections, authentication activity, and other endpoint events.

##### 🤔. Threat Detection

- 😄. Local engines can perform initial behavioral analysis and combine it with reputation, machine learning, signatures, and threat intelligence.
- 😄. Suspicious events and telemetry are sent to the central platform for correlation and deeper analysis.

##### 🤔. Centralized Analysis and Management

- 😄. The central platform aggregates data from many endpoints, correlates events, generates alerts, and provides investigation context to security teams.

##### 🤔. Policy Configuration and Distribution

- 😄. Security administrators configure policies centrally and distribute them to agents.

##### 🤔. Threat Response

- 😄. Automated or manual actions may include isolating endpoints, terminating malicious processes, blocking communications, or remediating persistence mechanisms.

#### IV. Advantages

##### 🤔. Centralized Management

- Security teams can manage many endpoints consistently and obtain broader visibility.

##### 🤔. Rapid Response

- Agents and central analytics can identify and respond to threats quickly.

##### 🤔. Operational Efficiency

- Automation and centralized management reduce repetitive manual work.

#### V. Disadvantages

##### 🤔. Cost

- EDR can be expensive in licensing, infrastructure, staffing, and operational complexity, especially at large scale.

## K. GCB (Government Configuration Baseline)

### a.

- Basically, GCB is a government-defined configuration baseline specifying how computers and systems should be configured to reduce security risks.
- Typical controls can include:
  - I. Password policies.
  - II. Access-control settings.
  - III. Firewall configuration.
  - IV. Patch / update management.
  - V. Logging and auditing.
  - VI. Unnecessary service and software restrictions.

### b. Example

- An organization may require employee workstations to be configured according to a government or organizational baseline such as GCB in order to reduce common attack surfaces.

## L. Traffic Anomaly Analysis

### a. Traffic Baseline

#### I. Build a Baseline

- Understand and record normal network traffic patterns, including sources, destinations, protocols, ports, volume, and typical timing.

#### II. Monitor Changes

- Continuously or periodically compare observed traffic with the normal baseline. Significant deviations may indicate anomalies or new activity.

### b. Traffic Pattern Analysis

#### I. Frequent Connection Requests

- Unusually large volumes of connection attempts may indicate scanning, brute-force activity, malware behavior, or DDoS activity.

#### II. Unusual Sources or Destinations

- Traffic from unknown or suspicious external sources, or unusual outbound traffic from an internal system, may indicate compromise, command-and-control activity, data exfiltration, or misconfiguration.

### c. Packet Capture

#### I.

- Use packet-capture and analysis tools such as Wireshark to inspect network traffic.

---

|#############################################################################################################|

# 5. Common Cybersecurity Terms and Concepts

## A. ISO/IEC 27001

### a. Explanation

#### I.

- ISO/IEC 27001 is an international standard specifying requirements for an **Information Security Management System (ISMS)**.
- It provides a systematic framework for identifying and managing information-security risks and protecting information through governance, processes, technology, people, and controls.
- It applies to organizations of different sizes and sectors.

#### II.

- ISO/IEC 27001 is a general international standard rather than a country-specific framework. Public-sector organizations, private enterprises, non-profits, and organizations of many sizes can implement an ISMS based on it.

### b. Main Objectives

#### I. Establish and Implement an Information Security Management System

- Define policies, processes, responsibilities, and controls needed to operate an effective ISMS.

#### II. Protect Information Assets

- Identify, assess, and protect information assets according to confidentiality, integrity, and availability requirements.

#### III. Manage Risk

- Assess and treat information-security risks using an organizational risk-management process.

#### IV. Comply with Laws and Regulations

- Ensure the organization's security controls and processes satisfy applicable legal, regulatory, contractual, and industry requirements.

#### V. Continual Improvement

- Monitor, audit, review, and improve the ISMS over time.

> ISO describes ISO/IEC 27001 as the best-known international standard for ISMS requirements and explicitly emphasizes confidentiality, integrity, availability, risk management, and continual improvement. citeturn805786search1

## B. NIST and CSF

### a. NIST

- NIST stands for the **National Institute of Standards and Technology**, a U.S. federal agency that develops measurement science, standards, and guidance across science and technology.
- In cybersecurity, NIST publishes widely used standards, frameworks, and guidance documents.

### b. CSF

- CSF stands for **Cybersecurity Framework**.
- NIST CSF provides a risk-oriented framework that helps organizations understand, assess, prioritize, communicate, and improve cybersecurity outcomes.
- It is designed to be adaptable across organizations of different sizes, sectors, and maturity levels.

> NIST CSF 2.0 explicitly states that it can be used by industry, government agencies, and other organizations regardless of size, sector, or maturity. citeturn805786search9turn805786search10

## C. SDLC (Secure SDLC)

- Secure SDLC means integrating security activities throughout the software development life cycle rather than waiting until the end of development.
- Typical activities can include security requirements, threat modeling, secure design, code review, dependency analysis, security testing, vulnerability management, secure deployment, and post-release monitoring.

Reference:
- https://ithelp.ithome.com.tw/articles/10305700

---

|#############################################################################################################|

# 6. Cybersecurity Trends

> Goal: understand the concepts and terminology rather than memorize every implementation detail.

References:
- https://www.ithome.com.tw/news/155119
- https://www.digiknow.com.tw/knowledge/6406f87a2b25d
- https://www.ithome.com.tw/pr/160526
- https://www.acsiacad.com/subdetail/1058
- https://www.cio.com.tw/hpe-aruba-networking-forecast-for-2024-network-security-five-trends/
- https://ec.ltn.com.tw/article/breakingnews/4517889
- https://www.trendmicro.com/content/dam/trendmicro/global/zh_tw/security-intelligence/threat-report/report/2024-security-prediction-tw-final.pdf

## A. AI

### a. NLP (Natural Language Processing)

#### I. Definition

- 🤔. NLP is the field of computing and AI concerned with processing, understanding, analyzing, and generating human language.
- 🤔. Common applications include machine translation, dialogue systems, text summarization, information extraction, classification, and question answering.

### b. Large Language Model (LLM) — one class of NLP approach

#### I. Definition

- 🤔. A **Large Language Model (LLM)** is a large neural language model trained on extensive data and computational resources. Modern LLMs are commonly based on Transformer architectures.

##### 😄. Very large parameter counts

- 😄. LLMs can contain billions or more parameters, allowing them to model complex statistical patterns in language.

##### 😄. Context sensitivity

- 😄. LLMs use surrounding context to predict and generate text, allowing them to model relationships among words and longer sequences.

##### 😄. General-purpose capability

- 😄. LLMs can support tasks such as generation, classification, translation, summarization, conversation, coding, and information extraction.

##### 😄. Large-scale pretraining

- 😄. LLMs are typically pretrained on large datasets so that they learn broad language patterns and representations.

##### 😄. Challenges and opportunities

- 😄. LLMs also introduce challenges such as hallucination, bias, security issues, privacy concerns, data contamination, evaluation difficulty, and high computational cost.

### c. Learning Paradigms

#### I. Unsupervised Learning

- 🤔. Training data does not provide explicit human-provided labels for every example.
- 🤔. The model attempts to discover patterns, structure, clusters, or useful representations from the data.

#### II. Supervised Learning

- 🤔. Each training example has an expected target or label.
- 🤔. The model learns a mapping from inputs to desired outputs.

#### III. Self-Supervised Learning

- 🤔. The training signal is generated from the data itself rather than requiring a manually labeled dataset for every example.
- 🤔. For language models, an example is predicting a masked or next token from surrounding context.
- 🤔. This allows extremely large amounts of unlabeled data to provide training signals.

### d. ChatGPT / GPT-style Models

#### I.

- ChatGPT is a conversational AI product that can be powered by large language models. GPT stands for **Generative Pre-trained Transformer**.

#### II. GPT architecture terminology

##### 🤔. Generative

- Produces new output such as text rather than only assigning a fixed label to existing input.

##### 🤔. Pre-trained

###### 😄.

- A model is first trained on large datasets so that it learns language patterns, representations, and statistical relationships.
- The training objective for a GPT-style language model commonly involves predicting the next token given previous tokens.

##### 🤔. Transformer

###### 😄.

- A neural-network architecture built around attention mechanisms.
- Self-attention allows each token representation to incorporate information from other positions in the input context.

###### 😄. Self-Attention

- Allows the model to assign different relevance weights to tokens in the current context.
- This helps the model represent relationships over long ranges within the available context window.

## B. Automated Worm Attacks

Reference:
- https://dq.yam.com/post/15982

### a.

- A **worm** is malware capable of self-propagation, often exploiting vulnerabilities or other mechanisms to spread without requiring the victim to manually copy it.
- Worms can automate large-scale exploitation of vulnerable systems and can spread rapidly.

## C. Difference Between Worms and Viruses

### a. Virus

- A computer virus is malicious code that attaches itself to another file, program, or executable environment and typically requires that host component to execute in order to activate and propagate.

### b. Worm

- A worm is self-contained malware that can replicate and spread between systems without necessarily requiring attachment to a host executable.
- Worms often exploit network or system vulnerabilities to propagate automatically.

## C. Blockchain Attacks — especially private blockchains

Reference:
- https://www.markreadfintech.com/p/905

### a. Potential Issues in Private Blockchains

#### I. Insufficient Number of Nodes

- Private blockchains may have a small validator set, which can reduce fault tolerance and increase concentration risk.
- If an attacker or malicious insider controls enough validators or infrastructure, consensus or availability may be affected, depending on the consensus protocol.

#### II. Centralized Management

- Private blockchains are often governed by a specific organization or consortium.
- Centralized administrative components can become high-value attack targets even if the ledger itself is distributed.

#### III. Reduced Decentralization

- Fewer independent participants can reduce the economic and organizational redundancy that public decentralized networks may provide.

#### IV. Security Depends on Actual Governance and Design

- It is not universally true that private blockchains have “lower security requirements.” Their security depends on the threat model, governance structure, consensus mechanism, identity controls, node security, and application design.

## D. Zero Trust Architecture (ZTA)

### a.

- 🤔. Zero Trust is a cybersecurity **model and strategy** based on removing implicit trust based solely on network location, ownership, or physical position.
- 🤔. Traditional perimeter-oriented security often assumes that internal traffic is more trustworthy than Internet traffic. Zero Trust challenges that assumption and focuses on protecting specific resources and transactions.
- 🤔. It can add authentication and authorization steps, potentially increasing operational friction, so organizations often balance security, usability, risk, and context.

#### I. Continuous Verification

- Zero Trust follows the principle often summarized as **“never trust, always verify.”**
- Each access request should be evaluated based on identity, device state, context, policy, and resource requirements rather than simply assuming that internal network location means trust.

#### II. Least Privilege

- Users and devices should receive only the access needed for their tasks.

#### III. Authentication and Authorization

- Verify the identity of users and devices and apply policy-based authorization before access is granted.

#### IV. Fine-Grained Access Control

- Resources and services can be divided into smaller security domains so that access policies can be applied more precisely.

#### V. Continuous Monitoring and Auditing

- Monitor user, device, application, and network behavior to detect abnormal activity and adjust access decisions.

#### VI. Network / Resource Segmentation

- Zero Trust emphasizes protecting individual resources and limiting lateral movement, not merely defending one outer network perimeter.

> NIST SP 800-207 defines Zero Trust Architecture around the absence of implicit trust based on network location or ownership, with authentication and authorization of users and devices before access to resources. citeturn805786search3turn805786search7

### b. Taiwan Government Zero Trust Architecture

- Taiwan's public-sector Zero Trust initiatives reference NIST's Zero Trust concepts while defining national implementation approaches.
- One proposed architecture uses a **Resource Portal-Based Deployment** model, with a policy / decision engine at the center.
- The original three core mechanisms can be summarized as:

#### I. Identity Verification

- Use strong authentication, potentially passwordless multi-factor authentication such as FIDO2-based technologies, to verify user identity.
- Can coexist with and synchronize with existing identity systems such as Active Directory.

#### II. Device Verification

- Verify that the device is managed by the organization and is in an acceptable security state.
- This is especially relevant to remote work and work-from-home environments.

#### III. Trust Inference / Policy Decision

- Evaluate user behavior, device state, and contextual signals to detect abnormal access and determine whether access should be granted.

## E. Software Supply Chain Attacks

### a. Basic Concept

- Organizations often rely on widely used software, standard solutions, open-source packages, development tools, vendors, and third-party services because they offer interoperability, documentation, and ecosystem support.
- However, those dependencies create a supply-chain risk: compromising one widely trusted component can affect many downstream organizations.

### b. Categories

#### I. Open-Source Dependency Injection / Package Compromise

- 🤔. **Method:** An attacker compromises a package, maintainer account, release process, or dependency and causes malicious code to be included in a version consumed by downstream developers.
- 🤔. **Example:** The 2018 `event-stream` incident demonstrated how a popular NPM dependency chain could be abused to distribute malicious code through a compromised package dependency.

#### II. Vendor Compromise

- 🤔. **Method:** Attackers compromise a software vendor's development, build, or distribution environment and inject malicious code into an otherwise legitimate software release.
- 🤔. **Example:** The 2017 CCleaner incident involved compromise of the software build / distribution process and resulted in tampered software reaching users.

#### III. Development Toolchain Attack

- 🤔. **Method:** Attackers compromise or replace developer tools, libraries, compilers, build systems, CI infrastructure, or related components so malicious code is inserted during the build process.
- 🤔. **Example:** XcodeGhost demonstrated the supply-chain risk associated with tampered development tools and the resulting applications built from them.

#### IV. Update Mechanism Attack

- 🤔. **Method:** Attackers compromise or manipulate software update infrastructure so malicious updates are distributed to legitimate users.
- 🤔. **Example:** The NotPetya outbreak involved compromise of the update mechanism associated with the Ukrainian accounting software M.E.Doc and contributed to widespread downstream impact.

### c. Prevention / Mitigation

#### I. Dependency Review and Monitoring

- 🤔. Regularly review and update third-party dependencies.
- 🤔. Use software-composition-analysis and dependency-management tools such as Snyk or Dependabot where appropriate.

#### II. Vendor Management

- 🤔. Assess vendors for security maturity, architecture, incident response, supply-chain controls, and compliance.
- 🤔. Use contracts that require timely vulnerability and incident notification.

#### III. Development Environment Security

- 🤔. Protect build servers, source repositories, developer workstations, credentials, package registries, and CI/CD systems.
- 🤔. Use code signing and build integrity mechanisms to establish software provenance.

#### IV. Multi-Layer Verification

- 🤔. Apply security checks across source control, dependency resolution, build, test, release, and distribution stages.
- 🤔. Integrate security testing into CI/CD workflows.

#### V. Secure Update Mechanisms

- 🤔. Use authenticated and integrity-protected update mechanisms, such as signed software releases.
- 🤔. Regularly review and harden the update infrastructure itself.

## F. SIM Swapping, Physical SIM, and eSIM

Reference:
- https://zh.wikipedia.org/zh-tw/SIM%E5%8D%A1%E4%BA%A4%E6%8F%9B%E6%94%BB%E6%93%8A
- Taiwan SIM-hijacking possibility / PUK discussion:
  - https://vocus.cc/article/643b9d80fd897800017d269f
- SIM theft news:
  - https://tw.news.yahoo.com/%E7%8D%A8-%E5%81%B7%E6%89%8B%E6%A9%9F%E7%9B%AE%E6%A8%99%E6%98%AFsim%E5%8D%A1-%E5%B0%8F%E9%A1%8D%E7%9B%9C%E5%88%B7-%E9%9B%A3%E6%B1%82%E5%84%9F-123700583.html
- https://www.ftvnews.com.tw/news/detail/2020A13S07M1

### Basic Idea

- SIM swapping is a social-engineering / account-takeover technique in which an attacker convinces a mobile carrier or otherwise causes a phone number to be transferred to a SIM/eSIM controlled by the attacker.
- Once the attacker controls the victim's mobile number, SMS-based password resets or one-time codes may become vulnerable.
- Physical SIM cards and eSIMs differ in implementation, but both can be targets of account-transfer fraud and carrier-account compromise.

## G. Advanced Persistent Threat (APT)

> **Correction:** APT means **Advanced Persistent Threat**, not “Advanced Persistent Thread.”

- Think of it somewhat like long-term intelligence operations: even after gaining some degree of access, an attacker may remain stealthy, gather information, expand access, and wait for the right opportunity instead of immediately causing obvious damage.

### a. Highly Specialized

- APT actors typically have substantial technical expertise, resources, infrastructure, and operational planning capabilities.

### b. Persistent

- APT activity may remain in an environment for a long period while attackers maintain access, gather intelligence, or prepare additional actions.

### c. Stealthy

- Attackers may use techniques designed to avoid detection and blend into normal organizational activity.

### d. Targeted

- APT campaigns are often directed at specific organizations, sectors, or strategic targets.
- Attackers may study the target's network architecture, employees, business processes, and technology stack.

### e. Multi-Stage

- APT campaigns often involve multiple stages such as initial access, persistence, privilege escalation, internal reconnaissance, lateral movement, credential theft, collection, command and control, and eventual objectives.

## H. Data Poisoning (especially for ML models)

Reference:
- The following article discusses a classic example involving Gmail spam filtering:
  - https://college.itri.org.tw/Home/InfoData/f6e19f2d-f81c-421c-bc36-ea6409ba0a5d/fc50f770-06c7-4748-a70b-7fd0a3d220

### Basic idea

- Data poisoning means deliberately manipulating training or input data so that a machine-learning model learns incorrect, biased, or attacker-chosen behavior.
- Poisoning can target training datasets, labels, data pipelines, feedback systems, or other sources of learning signals.

## G. DNSSEC

> Section label retained from the original notes even though it is the seventh item after H due to the original numbering.

### a. Basic Explanation

#### I.

- **DNSSEC (Domain Name System Security Extensions)** is a set of extensions to DNS that provides authentication and integrity for DNS data.
- Its purpose is to help protect against forged DNS responses and certain DNS cache-poisoning / spoofing attacks.
- DNSSEC uses digital signatures to establish that DNS data was authorized by the relevant DNS zone.

### b. Main Features and Functions

#### I. Digital Signatures

- DNSSEC uses cryptographic signatures to authenticate DNS data.
- DNS validators can use public keys to verify those signatures.

#### II. Chain of Trust

- DNSSEC establishes a **chain of trust** from a trust anchor, through the DNS hierarchy, using mechanisms such as DS and DNSKEY records.
- **Correction to the original note:** DNS records are not simply “signed by the private key of the parent node.” The zone signs its own authoritative DNS data; the hierarchy establishes trust through delegation records and cryptographic relationships.

#### III. Security

- DNSSEC can help prevent forged DNS responses by allowing validators to detect whether returned DNS data is authentic and has not been altered.
- DNSSEC does not encrypt DNS traffic. It provides authenticity and integrity, not confidentiality.

### c. Practical Deployment

#### I.

- Deploying DNSSEC requires support from authoritative DNS servers, domain registries / registrars where applicable, and validating resolvers / clients.
- More domain infrastructures support DNSSEC, but actual deployment and validation depend on the domain, DNS provider, registrar, and resolver environment.

---

## Overall Study Perspective

The material above can be divided into three broad layers:

1. **Information Management / Information Systems** — e-commerce, enterprise systems, cloud computing, backup, data governance, IT service management, performance, and organizational use of information.
2. **Security Management / Governance** — risk management, BCM, auditing, compliance, ISO 27001, NIST, SOC, cybersecurity governance, and third-party management.
3. **Security Technology / Threats** — authentication, access control, cryptography, PKI, endpoint security, malware, network attacks, web attacks, Zero Trust, supply-chain attacks, DNSSEC, and digital forensics.

Most of these three layers are internationally applicable. The major exceptions are items whose **legal authority, government classification, or public-sector implementation is explicitly tied to Taiwan**, such as the Taiwan Cyber Security Management Act, Taiwan government cybersecurity responsibility classifications, and Taiwan-specific government configuration requirements.
