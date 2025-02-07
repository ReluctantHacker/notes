# short history
Before we talk about **World Wide Web** which is the main topic we are gonna discuss later, we have to learn some history to fully understand the whole story.

ARPAnet(since 1969 to 1989), the first operational packet-switching network and the precursor of Internet. It connected four universities in the United States and allowed researchers to share resources and communicate. However, with advanced networks came using advanced protocol and technology, ARPAnet slowly merged into Internet and finally got shutdown. [reference](https://www.techtarget.com/searchnetworking/definition/ARPANET)

The goal of Internet(or ARPAnet) is simple: **Shareing Information**. This is a also the goal of all the technology based on Internet including following techs before World Wide Web:

  * **Email(since 1971)**: Ray Tomlinson sent the first email in 1971, using the @ symbol to separate the user from the host. This innovation revolutionized communication by allowing messages to be sent between different computers on the ARPANET2. Of course, in that time, there were no TCP/IP, so the host address is not IP by follow other protocol.
  * **Newsgroups and BBS(Bulletin Board Systems, since 1979)**: Newsgroups allowed users to post messages and share information on various topics. BBS were similar, providing a platform for users to upload and download files and messages.
  * **File Transfer Protocol(FTP, since 1971)**: It was the standard network protocol for transferring files between computers. Users could upload and download files to and from remote servers.
  * **Telnet**: Allowed users to log into remote computers and access their files and resources directly.

Of course, it's not all, I just pick ones that are famous. However, they are not user-friendly enough. [reference](https://superuser.com/questions/1647212/what-protocol-is-used-for-downloading-files) So, in 1989, Tim Berners-Lee proposed the idea World Wide Web(alongside the HTTP) while working at CERN. And it became the most used network sharing methods nowaday. The Web has become the world's dominant information systems platform. It is the primary tool that billions of people worldwide use to interact with the Internet

It's so overwhelming utilized that even your mobile payment is done based on HTTPS because most modern banking systems are web-based. Almost every Application(mobile or not) that has anything to do with sharing or transferring information discretely(not continuously) through Internet is done through HTTP/S. Of course, games, phone calls, and video calls are contiuous, may not use HTTP/s. 


World Wide Web is constructed by Tim Lee in 1989 with two main elements:
  * **HTML(Hypertext Markup Language)**: Hypertext is just text that has link function to redirect to other website.
  * **HTTP(Hypertext Transfer Protocol)**: Transfer Hpertext from server to client.

Later, in 1990, Tim created first browser and web server. In that time, basically, a browser is a tool that can render the HTML code to usersa nd HTTP is just a protocol that manage to transfer HTML code from web server to client's browser to be rendered. 

However, very soon, image tag joined the web, including GIF1987) and JPEG(1992). 

In 1995, Javascript was introduced. Enabled interactive and dynamic behavior on web pages.

Introduced in 1996, CSS allowed web developers to separate content from presentation. This made it easier to style and layout web pages, improving their visual design and consistency.

The came of image tag means that HTTP is not just for HTML code anymore but also for image data. CSS and javascript are not HTML code, either. This means HTTP can transfer not just HTML code but support other languages as well. More and more other type of resource got supported by web-based structure since this days. And more and more web servers and client browsers came join into World Wide Web, make it a huge complicated application network now.

# HTTP/s
There are two basic rules in HTTP/s:
  - **Stateless and not Connection-Oriented**: Every pair of request and reponse are independent. **Stateful** means two informations sending between two end points has dependent relationship. **Connection-Oriented** means two end points occupy one communication line. It's like Connection-Oriented is "Telephone System", But Non-Connection-Oriented is "Mail system".
  - **One-direction requests**: Server could not send messages to your clients without the clients first sending a request to the server.

The purpose of these two rules in Tim's time is simple. First, web servers don't need to 'Remember' the clients because all the webs is "static" in that time. Clients don't need to login or share information as well. And, of course, web servers are set for clients to view. When clients want some information from website, they just use browser to request the information and render to read. This is exactly "Mail System" situation. Clients request and servers give.

Of course, dynamic websites are main this day. Servers do need to remember clients and clients do neet to share their information as well. There are tons of way to acomplish this which we will talk about later.

Let's learn the structure of HTTP first. Mostly, HTTP is based on TCP(but sometimes not, and more and more). The abstract logics are as hollow:



example code:
Server code:
```python
import socket

# Create a TCP/IP socket
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Bind the socket to the port
server_address = ('localhost', 80)
server_socket.bind(server_address)

# Listen for incoming connections
server_socket.listen(1)

print("Server is listening on port 80...")

while True:
    # Wait for a connection
    connection, client_address = server_socket.accept()
    
    try:
        # Receive the data in small chunks
        data = connection.recv(1024)
        print('Received request:', data.decode())
        
        # Send response back to the client
        response = b'HTTP/1.0 200 OK\n\nHello, World!'
        connection.sendall(response)
    finally:
        # Clean up the connection
        connection.close()

```

Client code:
```
import socket

# Create a TCP/IP socket
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connect the socket to the server's port
server_address = ('localhost', 80)
client_socket.connect(server_address)

try:
    # Send request to the server
    request = b'GET /index.html HTTP/1.0\n\n'
    client_socket.sendall(request)
    
    # Receive the response from the server
    response = client_socket.recv(1024)
    print('Received response:', response.decode())
finally:
    # Clean up the connection
    client_socket.close()
```

oh my god, the logic is incredibly simple!? so it's all about sockets?

the server is basically just doing two things, Listening and clearning up connection!! Is this real the original http?

