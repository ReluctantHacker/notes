docker command commands

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
