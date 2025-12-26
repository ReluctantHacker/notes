# Docker command commands
- **Simple start up**: With docker-compose.yaml and Dockcerfile, you can use docker-compose command to create and images and corresponding container. This command below would automatically create and run the container. "-p" option is short for "--project-name" option, which you can specify the project name or if without this option, docker would automatically use "current folder" as your image name's prefix, for example the current folder name is "test_folder", the service name in your docker-compose is "test_service", then the image's name would be "test_folder_test_service". If you want to replace "test_folder" you can use "--project-name" option.
```
docker-compose -p project_name up -d
```

- **Without cache**: Sometimes you would need if you don't want docker remember the previous build. This command below would create image without previous memory. And then you can use "docker-compose up -d" to start and run the container. (You have to have one Dockerfile to make build work)
```
docker-compose -p project_name build --no-cache
```

1. docker run -itd -p xxxx:xxxx --name=container_name image_name		||| for running container
2. docker exec -ti -u root container_name bash					||| for running bash from current host terminal 
to docker container bash
3. docker cp <filename> <containter-name>:/path/to/file/in/container		||| for copy file from host terminal to docker container
terminal
4. docker cp <containter>:/path/to/file/in/containter . 			||| for copy file from docker container(path you specified)
to the host terminal current path.
5. docker-compose -f my-docker-compose.yml up -d				||| use docker-compose to create images(and container if 
you spencified) and some settings about images
6. docker ps									||| show the containers that are running
7. docker ps --filter "status=exited"						||| show the containers that are stopped to run
8. docker stop <container-id>							||| stop the container that is running
9. docker rm <container-id>							||| remove the container
10. docker images								||| show every images 
11. docker rmi myImage:tag							||| remove image you want to delete


# Docker-Desktop for windows
Windows now use "WSL(windows subsystem for linux)" which is built-in to deal with linux subsystems. Before wsl existed, if you want to run linux, you had to install a full virtual machine(like VirtualBox, VMWare, or Hyper-V). Docker on Windows used **Docker Toolbox (with VirtualBox)** or later Docker for Windows(with Hyper-V) to host a Linux VM, because Docker Engine was orignally Linux-only.

Microsoft introduced WSL in Windows 10.
 - WSL1 (2016) → a compatibility layer that translated Linux system calls into Windows calls (no real Linux kernel).
 - WSL2 (2019) → a lightweight VM with a real Linux kernel, built into Windows using Hyper‑V technology.

Now we can install Linux distros (Ubuntu, Debian, Alpine, etc.) directly from the Microsoft Store, and they run side‑by‑side with Windows without needing a separate VM manager. 

In short, we can see WSL is like an engine that can deal with virtual Linux in Windows. You can set many virtual linuxes through it if you want. For example, I personally install a Ubuntu which is the most famous one through wsl and use it as my coding-development subsystem on Windows.

In 2016, Docker introduced Docker for Windows/Mac (later renamed Docker Desktop) to replace Toolbox. Instead of making developers install and manage their own VM, Docker Desktop handled it automatically with a built-in Hyper-V.

In 2019, WSL2 came up, and Docker Desktop integrated with it on Windows, so the VM became a WSL distribution(you would see it as docker-desktop). This gave better performance, tighter integration, and removed the need for developers to set up virtualization manually.

So, if you install a ubuntu window subsystem through WSL, and then install Docker-Desktop. You would find that WSL handles two linux subsystem. through a command:
```
C:\Users\user>wsl --list --verbose
  NAME              STATE           VERSION
* Ubuntu            Running         2
  docker-desktop    Running         2
```

It means there are two linux subsystem handled and run through WSL. The * symbol means the default one which you would see if you type "wsl" in command line", it would automatically go into the default one's terminal. 

So now, docker-desktop is the one linux subsystem that runs Docker! If you want to see some docker log, settings, configs, you need to go that one linux:
```
wsl -d docker-desktop
```
"-d" means **distribution**, of course you can type this below to go to dev subsystem if you want but you can directly type "wsl" if it's already the default one:
```
wsl -d Ubuntu
```
