Windows PowerShell
Copyright (C) Microsoft Corporation. All rights reserved.

Try the new cross-platform PowerShell https://aka.ms/pscore6

PS C:\Users\VASAVI XEROX> docker ps
CONTAINER ID   IMAGE          COMMAND                  CREATED              STATUS          PORTS     NAMES
ba5b70796d28   nginx:alpine   "/docker-entrypoint.…"   About a minute ago   Up 54 seconds   80/tcp    user-service.4.w61oizunhlcyvhz14oy7eboue
8c97baa6b2bc   nginx:latest   "/docker-entrypoint.…"   About a minute ago   Up 54 seconds   80/tcp    transaction-service.3.v10s5zcv27a81vp3tdbc5x9tq
7b7ce99b8bb1   nginx:alpine   "/docker-entrypoint.…"   About a minute ago   Up 55 seconds   80/tcp    user-service.2.yvw8zqayhkqwpmkd2sg3qo24f
ecf1795effe2   nginx:alpine   "/docker-entrypoint.…"   About a minute ago   Up 56 seconds   80/tcp    user-service.1.opoqfcdp6woyzf9frj4jywa6a
66366c709fb7   nginx:latest   "/docker-entrypoint.…"   About a minute ago   Up 55 seconds   80/tcp    transaction-service.4.vci523edwtzgk2rmxjjsagbo3
dc21d712c293   nginx:latest   "/docker-entrypoint.…"   About a minute ago   Up 54 seconds   80/tcp    transaction-service.1.toiavbd416l24ootzbm3fvs9b
cb65c9e3eda3   nginx:alpine   "/docker-entrypoint.…"   About a minute ago   Up 55 seconds   80/tcp    user-service.5.v7fjea22gsex1vssviyayncev
f2d1759200b2   nginx:alpine   "/docker-entrypoint.…"   About a minute ago   Up 57 seconds   80/tcp    user-service.3.erlc5chcm7aslyrmyf8qxvx2y
805fb785ab14   nginx:latest   "/docker-entrypoint.…"   About a minute ago   Up 57 seconds   80/tcp    notification-service.1.qmxo5gaqgdjmv5ug8dsvqtgo6
a22050c9289e   nginx:latest   "/docker-entrypoint.…"   About a minute ago   Up 57 seconds   80/tcp    fraud-service.2.tqare7swe6eo7daikrb50s9q8
97b7dec83089   nginx:latest   "/docker-entrypoint.…"   About a minute ago   Up 57 seconds   80/tcp    notification-service.2.lcan1kdkgqo5aqf90nofnijhm
d84d6708c005   nginx:latest   "/docker-entrypoint.…"   About a minute ago   Up 57 seconds   80/tcp    fraud-service.1.g86lqpsevk31jes7peh8p4qry
db910c4a8f09   nginx:latest   "/docker-entrypoint.…"   About a minute ago   Up 57 seconds   80/tcp    transaction-service.2.ykogz9tkhrp0fpgx1tipxxakp
PS C:\Users\VASAVI XEROX> docker volume create db_data
db_data
PS C:\Users\VASAVI XEROX> docker volume create app_data
app_data
PS C:\Users\VASAVI XEROX> docker network create --driver bridge app_network
972c2fb2f7d92b8914ef9d027996d384e351f30a719987088101bb54dfadf8a2
PS C:\Users\VASAVI XEROX> docker run -d --name my_postgres --network app_network -e POSTGRES_USER=myuser -e POSTGRES_PASSWORD=mypassword -e POSTGRES_DB=mydb -v db_data:/var/lib/postgresql/data postgres:latest
>>
Unable to find image 'postgres:latest' locally
latest: Pulling from library/postgres
1014e14b3351: Pull complete
f0d70120d9e2: Pull complete
2433c366ca00: Pull complete
a585c5f82f15: Pull complete
eed0ac863490: Pull complete
af60ce4418c9: Pull complete
f5af7533693a: Pull complete
203b16f56a7d: Pull complete
9a68d6020eab: Pull complete
edd90ab5059f: Pull complete
f69a7c424b50: Pull complete
dd6d7b9d8ba8: Pull complete
751039babae5: Pull complete
Digest: sha256:073e7c8b84e2197f94c8083634640ab37105effe1bc853ca4d5fbece3219b0e8
Status: Downloaded newer image for postgres:latest
9842481b35484c55e55fb4a345a18f98efe6da09d03b1bb20e04a1a11dca2816
PS C:\Users\VASAVI XEROX> notepad Dockerfile
PS C:\Users\VASAVI XEROX> rm Dockerfile
>>
rm : Cannot find path 'C:\Users\VASAVI XEROX\Dockerfile' because it does not exist.
At line:1 char:1
+ rm Dockerfile
+ ~~~~~~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (C:\Users\VASAVI XEROX\Dockerfile:String)
    [Remove-Item], ItemNotFoundException
    + FullyQualifiedErrorId : PathNotFound,Microsoft.PowerShell.Commands.RemoveItemComm
   and

PS C:\Users\VASAVI XEROX> mkdir backend


    Directory: C:\Users\VASAVI XEROX


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
d-----        16-10-2025     18:55                backend


PS C:\Users\VASAVI XEROX> cd backend/
PS C:\Users\VASAVI XEROX\backend> notepad Dockerfile
PS C:\Users\VASAVI XEROX\backend> docker build -t flask-backend ./backend
[+] Building 0.0s (0/0)                                             docker:desktop-linux
ERROR: failed to build: unable to prepare context: path "./backend" not found
PS C:\Users\VASAVI XEROX\backend> cd..
PS C:\Users\VASAVI XEROX> docker build -t flask-backend ./backend
[+] Building 0.2s (1/1) FINISHED                                    docker:desktop-linux
 => [internal] load build definition from Dockerfile                                0.1s
 => => transferring dockerfile: 2B                                                  0.0s
ERROR: failed to build: failed to solve: failed to read dockerfile: open Dockerfile: no such file or directory
PS C:\Users\VASAVI XEROX> cd backend/
PS C:\Users\VASAVI XEROX\backend> docker build -t flask-backend .
>>
[+] Building 0.1s (1/1) FINISHED                                    docker:desktop-linux
 => [internal] load build definition from Dockerfile                                0.0s
 => => transferring dockerfile: 2B                                                  0.0s
ERROR: failed to build: failed to solve: failed to read dockerfile: open Dockerfile: no such file or directory
PS C:\Users\VASAVI XEROX\backend> dir


    Directory: C:\Users\VASAVI XEROX\backend


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
-a----        16-10-2025     18:56            132 Dockerfile.txt


PS C:\Users\VASAVI XEROX\backend> rename-file Dockerfile.txt Dockerfile
rename-file : The term 'rename-file' is not recognized as the name of a cmdlet,
function, script file, or operable program. Check the spelling of the name, or if a
path was included, verify that the path is correct and try again.
At line:1 char:1
+ rename-file Dockerfile.txt Dockerfile
+ ~~~~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (rename-file:String) [], CommandNotFoundE
   xception
    + FullyQualifiedErrorId : CommandNotFoundException

PS C:\Users\VASAVI XEROX\backend> Rename-Item Dockerfile.txt Dockerfile
>>
PS C:\Users\VASAVI XEROX\backend> dir


    Directory: C:\Users\VASAVI XEROX\backend


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
-a----        16-10-2025     18:56            132 Dockerfile


[+] Building 14.2s (9/9) FINISHED                                   docker:desktop-linux
 => [internal] load build definition from Dockerfile                                0.1s
 => => transferring dockerfile: 171B                                                0.0s
 => [internal] load metadata for docker.io/library/python:3.10-slim                 3.3s
 => [auth] library/python:pull token for registry-1.docker.io                       0.0s
 => [internal] load .dockerignore                                                   0.1s
 => => transferring context: 2B                                                     0.0s
 => [1/4] FROM docker.io/library/python:3.10-slim@sha256:621488956f7e14ca249420e37  7.4s
 => => resolve docker.io/library/python:3.10-slim@sha256:621488956f7e14ca249420e37  0.1s
 => => sha256:50942d41387aef5ae8d0f6edc09bd9cd73a38f6524751d5f2f57998d 249B / 249B  1.4s
 => => sha256:d388ad611dd588e3ed77ab1b3b5a2b97fbf2b962822c734d64 13.82MB / 13.82MB  5.9s
 => => sha256:c72c567266265eaf3c81cecf291e32dc35cb03f44a34cc37c4bb 4.25MB / 4.25MB  2.8s
 => => extracting sha256:c72c567266265eaf3c81cecf291e32dc35cb03f44a34cc37c4bb2c3f1  0.9s
 => => extracting sha256:d388ad611dd588e3ed77ab1b3b5a2b97fbf2b962822c734d646642d8a  1.1s
 => => extracting sha256:50942d41387aef5ae8d0f6edc09bd9cd73a38f6524751d5f2f57998dd  0.0s
 => [internal] load build context                                                   0.2s
 => => transferring context: 171B                                                   0.0s
 => [2/4] WORKDIR /app                                                              0.2s
 => [3/4] COPY . .                                                                  0.1s
 => ERROR [4/4] RUN pip install -r requirements.txt                                 2.9s
------
 > [4/4] RUN pip install -r requirements.txt:
2.414 ERROR: Could not open requirements file: [Errno 2] No such file or directory: 'requirements.txt'
2.662
2.662 [notice] A new release of pip is available: 23.0.1 -> 25.2
2.662 [notice] To update, run: pip install --upgrade pip
------
Dockerfile:5
--------------------
   3 |     WORKDIR /app
   4 |     COPY . .
   5 | >>> RUN pip install -r requirements.txt
   6 |     CMD ["python", "app.py"]
   7 |
--------------------
ERROR: failed to build: failed to solve: process "/bin/sh -c pip install -r requirements.txt" did not complete successfully: exit code: 1
PS C:\Users\VASAVI XEROX\backend> docker run -d --name my_backend --network app_network -e DB_HOST=my_postgres -e DB_USER=myuser -e DB_PASSWORD=mypassword -e DB_NAME=mydb -v app_data:/app/data flask-backend
>>
Unable to find image 'flask-backend:latest' locally
docker: Error response from daemon: pull access denied for flask-backend, repository does not exist or may require 'docker login'

Run 'docker run --help' for more information
[+] Building 4.1s (8/8) FINISHED                                    docker:desktop-linux
 => [internal] load build definition from Dockerfile                                0.2s
 => => transferring dockerfile: 171B                                                0.1s
 => [internal] load metadata for docker.io/library/python:3.10-slim                 1.0s
 => [internal] load .dockerignore                                                   0.0s
 => => transferring context: 2B                                                     0.0s
 => [1/4] FROM docker.io/library/python:3.10-slim@sha256:621488956f7e14ca249420e37  0.1s
 => => resolve docker.io/library/python:3.10-slim@sha256:621488956f7e14ca249420e37  0.1s
 => [internal] load build context                                                   0.0s
 => => transferring context: 32B                                                    0.0s
 => CACHED [2/4] WORKDIR /app                                                       0.0s
 => CACHED [3/4] COPY . .                                                           0.0s
 => ERROR [4/4] RUN pip install -r requirements.txt                                 2.6s
------
 > [4/4] RUN pip install -r requirements.txt:
2.146 ERROR: Could not open requirements file: [Errno 2] No such file or directory: 'requirements.txt'
2.396
2.396 [notice] A new release of pip is available: 23.0.1 -> 25.2
2.396 [notice] To update, run: pip install --upgrade pip
------
Dockerfile:5
--------------------
   3 |     WORKDIR /app
   4 |     COPY . .
   5 | >>> RUN pip install -r requirements.txt
   6 |     CMD ["python", "app.py"]
   7 |
--------------------
ERROR: failed to build: failed to solve: process "/bin/sh -c pip install -r requirements.txt" did not complete successfully: exit code: 1
[+] Building 3.6s (8/8) FINISHED                                    docker:desktop-linux
 => [internal] load build definition from Dockerfile                                0.0s
 => => transferring dockerfile: 171B                                                0.0s
 => [internal] load metadata for docker.io/library/python:3.10-slim                 0.9s
 => [internal] load .dockerignore                                                   0.0s
 => => transferring context: 2B                                                     0.0s
 => [1/4] FROM docker.io/library/python:3.10-slim@sha256:621488956f7e14ca249420e37  0.1s
 => => resolve docker.io/library/python:3.10-slim@sha256:621488956f7e14ca249420e37  0.0s
 => [internal] load build context                                                   0.0s
 => => transferring context: 32B                                                    0.0s
 => CACHED [2/4] WORKDIR /app                                                       0.0s
 => CACHED [3/4] COPY . .                                                           0.0s
 => ERROR [4/4] RUN pip install -r requirements.txt                                 2.5s
------
 > [4/4] RUN pip install -r requirements.txt:
2.052 ERROR: Could not open requirements file: [Errno 2] No such file or directory: 'requirements.txt'
2.283
2.283 [notice] A new release of pip is available: 23.0.1 -> 25.2
2.283 [notice] To update, run: pip install --upgrade pip
------
Dockerfile:5
--------------------
   3 |     WORKDIR /app
   4 |     COPY . .
   5 | >>> RUN pip install -r requirements.txt
   6 |     CMD ["python", "app.py"]
   7 |
--------------------
ERROR: failed to build: failed to solve: process "/bin/sh -c pip install -r requirements.txt" did not complete successfully: exit code: 1
PS C:\Users\VASAVI XEROX\backend> cd "C:\Users\VASAVI XEROX\backend"
>>
PS C:\Users\VASAVI XEROX\backend> echo Flask > requirements.txt
PS C:\Users\VASAVI XEROX\backend> echo psycopg2-binary >> requirements.txt
PS C:\Users\VASAVI XEROX\backend> Flask
>> psycopg2-binary
>>
Flask : The term 'Flask' is not recognized as the name of a cmdlet, function, script
file, or operable program. Check the spelling of the name, or if a path was included,
verify that the path is correct and try again.
At line:1 char:1
+ Flask
+ ~~~~~
    + CategoryInfo          : ObjectNotFound: (Flask:String) [], CommandNotFoundExcepti
   on
    + FullyQualifiedErrorId : CommandNotFoundException

psycopg2-binary : The term 'psycopg2-binary' is not recognized as the name of a cmdlet,
function, script file, or operable program. Check the spelling of the name, or if a
path was included, verify that the path is correct and try again.
At line:2 char:1
+ psycopg2-binary
+ ~~~~~~~~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (psycopg2-binary:String) [], CommandNotFo
   undException
    + FullyQualifiedErrorId : CommandNotFoundException

PS C:\Users\VASAVI XEROX\backend> dir requirements.txt
>>


    Directory: C:\Users\VASAVI XEROX\backend


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
-a----        16-10-2025     19:05             50 requirements.txt


[+] Building 11.7s (10/10) FINISHED                                 docker:desktop-linux
 => [internal] load build definition from Dockerfile                                0.0s
 => => transferring dockerfile: 171B                                                0.0s
 => [internal] load metadata for docker.io/library/python:3.10-slim                 1.7s
 => [auth] library/python:pull token for registry-1.docker.io                       0.0s
 => [internal] load .dockerignore                                                   0.0s
 => => transferring context: 2B                                                     0.0s
 => [1/4] FROM docker.io/library/python:3.10-slim@sha256:621488956f7e14ca249420e37  0.0s
 => => resolve docker.io/library/python:3.10-slim@sha256:621488956f7e14ca249420e37  0.0s
 => [internal] load build context                                                   0.0s
 => => transferring context: 127B                                                   0.0s
 => CACHED [2/4] WORKDIR /app                                                       0.0s
 => [3/4] COPY . .                                                                  0.1s
 => [4/4] RUN pip install -r requirements.txt                                       6.4s
 => exporting to image                                                              3.0s
 => => exporting layers                                                             2.1s
 => => exporting manifest sha256:cb8e187381abdfe7debfc40f6116b5d6a365c7fb0632b214d  0.0s
 => => exporting config sha256:869c49e511e7ccf1a30493d8a26a0ff90a16cc68e86bfdce7e4  0.0s
 => => exporting attestation manifest sha256:0080a5bf00f3c5dbc1e4049d2e82ff60de598  0.1s
 => => exporting manifest list sha256:abce2a5cc8dd1b236b11831c0d05ae2babc960f6ae47  0.0s
 => => naming to docker.io/library/flask-backend:latest                             0.0s
 => => unpacking to docker.io/library/flask-backend:latest                          0.7s
PS C:\Users\VASAVI XEROX\backend> docker run -d --name my_backend --network app_network -e DB_HOST=my_postgres -e DB_USER=myuser -e DB_PASSWORD=mypassword -e DB_NAME=mydb -v app_data:/app/data flask-backend
>>
6e0e6a3c6d9919389db12c2ddf84abe6ea0025c62e71fc235bc85ef899549a02
PS C:\Users\VASAVI XEROX\backend> mkdir frontend
>>


    Directory: C:\Users\VASAVI XEROX\backend


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
d-----        16-10-2025     19:07                frontend


PS C:\Users\VASAVI XEROX\backend> cd ..
PS C:\Users\VASAVI XEROX> cd frontend/
cd : Cannot find path 'C:\Users\VASAVI XEROX\frontend\' because it does not exist.
At line:1 char:1
+ cd frontend/
+ ~~~~~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (C:\Users\VASAVI XEROX\frontend\:String)
   [Set-Location], ItemNotFoundException
    + FullyQualifiedErrorId : PathNotFound,Microsoft.PowerShell.Commands.SetLocationCom
   mand

PS C:\Users\VASAVI XEROX> mkdir frontend


    Directory: C:\Users\VASAVI XEROX


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
d-----        16-10-2025     19:08                frontend


PS C:\Users\VASAVI XEROX> dir .\frontend\index.html
>>
dir : Cannot find path 'C:\Users\VASAVI XEROX\frontend\index.html' because it does not
exist.
At line:1 char:1
+ dir .\frontend\index.html
+ ~~~~~~~~~~~~~~~~~~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (C:\Users\VASAVI...tend\index.html:String
   ) [Get-ChildItem], ItemNotFoundException
    + FullyQualifiedErrorId : PathNotFound,Microsoft.PowerShell.Commands.GetChildItemCo
   mmand

PS C:\Users\VASAVI XEROX> cd frontend/
PS C:\Users\VASAVI XEROX\frontend> notepad index.html
PS C:\Users\VASAVI XEROX\frontend> dir


    Directory: C:\Users\VASAVI XEROX\frontend


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
-a----        16-10-2025     19:10            176 index.html


PS C:\Users\VASAVI XEROX\frontend> docker run -d --name my_nginx --network app_network -v ${PWD}/frontend:/usr/share/nginx/html:ro -p 8088:80 nginx:latest
Unable to find image 'nginx:latest' locally
latest: Pulling from library/nginx
Digest: sha256:3b7732505933ca591ce4a6d860cb713ad96a3176b82f7979a8dfa9973486a0d6
Status: Downloaded newer image for nginx:latest
8e7bfb55f2595c70dc76127deb9d4d8681c3015ba2d642e5e6faebbc53e8926d
PS C:\Users\VASAVI XEROX\frontend> New-Item -Path . -Name "docker-compose.yml" -ItemType "File"
>>


    Directory: C:\Users\VASAVI XEROX\frontend


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
-a----        16-10-2025     19:13              0 docker-compose.yml


PS C:\Users\VASAVI XEROX\frontend> notepad docker-compose.yml
PS C:\Users\VASAVI XEROX\frontend> cd ..
PS C:\Users\VASAVI XEROX> docker logs my_backend
python: can't open file '/app/app.py': [Errno 2] No such file or directory
PS C:\Users\VASAVI XEROX> dir app.py
>>
dir : Cannot find path 'C:\Users\VASAVI XEROX\app.py' because it does not exist.
At line:1 char:1
+ dir app.py
+ ~~~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (C:\Users\VASAVI XEROX\app.py:String) [Ge
   t-ChildItem], ItemNotFoundException
    + FullyQualifiedErrorId : PathNotFound,Microsoft.PowerShell.Commands.GetChildItemCo
   mmand

PS C:\Users\VASAVI XEROX> cd backend/
PS C:\Users\VASAVI XEROX\backend> notepad app.py
PS C:\Users\VASAVI XEROX\backend> docker build -t flask-backend .
>>
[+] Building 11.3s (10/10) FINISHED                                 docker:desktop-linux
 => [internal] load build definition from Dockerfile                                0.1s
 => => transferring dockerfile: 171B                                                0.0s
 => [internal] load metadata for docker.io/library/python:3.10-slim                 1.8s
 => [auth] library/python:pull token for registry-1.docker.io                       0.0s
 => [internal] load .dockerignore                                                   0.0s
 => => transferring context: 2B                                                     0.0s
 => [1/4] FROM docker.io/library/python:3.10-slim@sha256:621488956f7e14ca249420e37  0.1s
 => => resolve docker.io/library/python:3.10-slim@sha256:621488956f7e14ca249420e37  0.0s
 => [internal] load build context                                                   0.0s
 => => transferring context: 325B                                                   0.0s
 => CACHED [2/4] WORKDIR /app                                                       0.0s
 => [3/4] COPY . .                                                                  0.1s
 => [4/4] RUN pip install -r requirements.txt                                       5.8s
 => exporting to image                                                              3.1s
 => => exporting layers                                                             1.8s
 => => exporting manifest sha256:96bc5a7f8032ea82badbccf92ce39ece2a9a2330735f1fde3  0.1s
 => => exporting config sha256:3f9b28f0e929015ccd3d7cdec5bff8939f8b3bd38fe1eca9be7  0.1s
 => => exporting attestation manifest sha256:95b5c9278c79efd8949e7676b97a7b673c88c  0.2s
 => => exporting manifest list sha256:18dbae8b0e0e24535edef6ce6307891133859fb95dce  0.0s
 => => naming to docker.io/library/flask-backend:latest                             0.0s
 => => unpacking to docker.io/library/flask-backend:latest                          0.9s
PS C:\Users\VASAVI XEROX\backend> docker rm -f my_backend
my_backend
PS C:\Users\VASAVI XEROX\backend> docker run -d --name my_backend --network app_network -e DB_HOST=my_postgres -e DB_USER=myuser -e DB_PASSWORD=mypassword -e DB_NAME=mydb -v app_data:/app/data flask-backend
6a9beb8f1d6d2c2cc078a0516f20e19a1784dae392faf11cc754123780fef985
PS C:\Users\VASAVI XEROX\backend> docker logs my_backend
 * Serving Flask app 'app'
 * Debug mode: off
WARNING: This is a development server. Do not use it in a production deployment. Use a production WSGI server instead.
 * Running on all addresses (0.0.0.0)
 * Running on http://127.0.0.1:5000
 * Running on http://172.19.0.4:5000
Press CTRL+C to quit
PS C:\Users\VASAVI XEROX\backend> docker exec -it my_backend bash
root@6a9beb8f1d6d:/app# docker exec -it my-postgres psql -U myuser -d mydb -c "\dt"
bash: docker: command not found
root@6a9beb8f1d6d:/app# exit
exit
PS C:\Users\VASAVI XEROX\backend> cd..
PS C:\Users\VASAVI XEROX> vim docker-compose.yml
vim : The term 'vim' is not recognized as the name of a cmdlet, function, script file,
or operable program. Check the spelling of the name, or if a path was included, verify
that the path is correct and try again.
At line:1 char:1
+ vim docker-compose.yml
+ ~~~
    + CategoryInfo          : ObjectNotFound: (vim:String) [], CommandNotFoundException
    + FullyQualifiedErrorId : CommandNotFoundException

PS C:\Users\VASAVI XEROX> notepad docker-compose.yml
PS C:\Users\VASAVI XEROX> dir


    Directory: C:\Users\VASAVI XEROX


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
d-----        27-10-2024     11:45                .cache
d-----        16-10-2025     18:59                .docker
d-----        28-04-2025     20:55                .eclipse
d-----        28-04-2025     20:55                .p2
d-----        27-04-2025     11:41                .vscode
d-r---        27-04-2025     12:26                3D Objects
d-----        16-10-2025     19:16                backend
d-r---        23-10-2024     16:00                Contacts
d-r---        16-10-2025     18:12                Desktop
d-r---        10-08-2025     18:06                Documents
d-r---        24-09-2025     10:21                Downloads
d-----        28-04-2025     20:44                eclipse
d-----        28-04-2025     20:57                eclipse-workspace
d-r---        23-10-2024     16:00                Favorites
d-----        16-10-2025     19:13                frontend
d-r---        23-10-2024     16:00                Links
d-r---        23-10-2024     16:00                Music
d-r---        20-02-2025     16:40                OneDrive
d-r---        19-02-2025     14:39                Pictures
d-r---        23-10-2024     16:00                Saved Games
d-r---        23-10-2024     16:01                Searches
d-r---        04-02-2025     16:56                Videos
-a----        17-01-2025     13:09           2932 Desktop.csv
-a----        16-10-2025     19:21            847 docker-compose.yml
-a----        16-10-2025     18:54            132 Dockerfile.txt


PS C:\Users\VASAVI XEROX> docker stack deploy -c stack.yml my_app
>>
open stack.yml: The system cannot find the file specified.
PS C:\Users\VASAVI XEROX> dir stack.yml
>>
dir : Cannot find path 'C:\Users\VASAVI XEROX\stack.yml' because it does not exist.
At line:1 char:1
+ dir stack.yml
+ ~~~~~~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (C:\Users\VASAVI XEROX\stack.yml:String)
   [Get-ChildItem], ItemNotFoundException
    + FullyQualifiedErrorId : PathNotFound,Microsoft.PowerShell.Commands.GetChildItemCo
   mmand

PS C:\Users\VASAVI XEROX> ^C
PS C:\Users\VASAVI XEROX> docker-compose up --build -d
>>
time="2025-10-16T19:24:15+05:30" level=warning msg="C:\\Users\\VASAVI XEROX\\docker-compose.yml: the attribute `version` is obsolete, it will be ignored, please remove it to avoid potential confusion"
[+] Running 8/8
 ✔ Network vasavixerox_app_network   Created                                        0.1s
 ✔ Volume vasavixerox_db_data        Created                                        0.0s
 ✔ Volume vasavixerox_app_data       Created                                        0.0s
 ✔ Container vasavixerox-backend-3   Started                                        2.8s
 ✔ Container vasavixerox-backend-2   Started                                        3.9s
 ✔ Container vasavixerox-backend-1   Started                                        4.5s
 ✔ Container vasavixerox-db-1        Started                                        2.7s
 ✔ Container vasavixerox-frontend-1  Started                                        4.7s
PS C:\Users\VASAVI XEROX> docker-compose down -v
>>
time="2025-10-16T19:24:26+05:30" level=warning msg="C:\\Users\\VASAVI XEROX\\docker-compose.yml: the attribute `version` is obsolete, it will be ignored, please remove it to avoid potential confusion"
[+] Running 8/8
 ✔ Container vasavixerox-frontend-1  Removed                                        0.5s
 ✔ Container vasavixerox-db-1        Removed                                        0.5s
 ✔ Container vasavixerox-backend-1   Removed                                       10.6s
 ✔ Container vasavixerox-backend-2   Removed                                       10.6s
 ✔ Container vasavixerox-backend-3   Removed                                       10.7s
 ✔ Volume vasavixerox_db_data        Removed                                        0.2s
 ✔ Volume vasavixerox_app_data       Removed                                        0.1s
 ✔ Network vasavixerox_app_network   Removed                                        0.5s
PS C:\Users\VASAVI XEROX> docker swarm init
>>
Error response from daemon: This node is already part of a swarm. Use "docker swarm leave" to leave this swarm and join another one.
PS C:\Users\VASAVI XEROX> docker swarm leave --force
Node left the swarm.
PS C:\Users\VASAVI XEROX> ^C
PS C:\Users\VASAVI XEROX> docker swarm init
Swarm initialized: current node (pm03kavwi6m48usseejmphl82) is now a manager.

To add a worker to this swarm, run the following command:

    docker swarm join --token SWMTKN-1-0lhoobiff5x5psjwnbrgksmt5aq8ui33guggfg5btg6hvnj070-1evrfde2jkdpwrchnvt0d70ey 192.168.65.3:2377

To add a manager to this swarm, run 'docker swarm join-token manager' and follow the instructions.
PS C:\Users\VASAVI XEROX> Rename-Item -Path docker-compose.yml -NewName stack.yml
>>
PS C:\Users\VASAVI XEROX> dir


    Directory: C:\Users\VASAVI XEROX


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
d-----        27-10-2024     11:45                .cache
d-----        16-10-2025     18:59                .docker
d-----        28-04-2025     20:55                .eclipse
d-----        28-04-2025     20:55                .p2
d-----        27-04-2025     11:41                .vscode
d-r---        27-04-2025     12:26                3D Objects
d-----        16-10-2025     19:16                backend
d-r---        23-10-2024     16:00                Contacts
d-r---        16-10-2025     18:12                Desktop
d-r---        10-08-2025     18:06                Documents
d-r---        24-09-2025     10:21                Downloads
d-----        28-04-2025     20:44                eclipse
d-----        28-04-2025     20:57                eclipse-workspace
d-r---        23-10-2024     16:00                Favorites
d-----        16-10-2025     19:13                frontend
d-r---        23-10-2024     16:00                Links
d-r---        23-10-2024     16:00                Music
d-r---        20-02-2025     16:40                OneDrive
d-r---        19-02-2025     14:39                Pictures
d-r---        23-10-2024     16:00                Saved Games
d-r---        23-10-2024     16:01                Searches
d-r---        04-02-2025     16:56                Videos
-a----        17-01-2025     13:09           2932 Desktop.csv
-a----        16-10-2025     18:54            132 Dockerfile.txt
-a----        16-10-2025     19:21            847 stack.yml


PS C:\Users\VASAVI XEROX> code stack.yml
>>
PS C:\Users\VASAVI XEROX> docker stack deploy -c stack.yml my_app
>>
Since --detach=false was not specified, tasks will be created in the background.
In a future release, --detach=false will become the default.
Creating network my_app_app_network
Creating service my_app_backend
Creating service my_app_frontend
Creating service my_app_db
PS C:\Users\VASAVI XEROX> docker stack ls
>> docker stack services my_app
>> docker service ls
>> docker service ps my_app_backend
>>
NAME      SERVICES
my_app    3
ID             NAME              MODE         REPLICAS   IMAGE                  PORTS
krwbwp116lwg   my_app_backend    replicated   3/3        flask-backend:latest
784plgitj4sr   my_app_db         replicated   1/1        postgres:latest
a91fhks2vf16   my_app_frontend   replicated   1/1        nginx:latest           *:8080->80/tcp
ID             NAME              MODE         REPLICAS   IMAGE                  PORTS
krwbwp116lwg   my_app_backend    replicated   3/3        flask-backend:latest
784plgitj4sr   my_app_db         replicated   1/1        postgres:latest
a91fhks2vf16   my_app_frontend   replicated   1/1        nginx:latest           *:8080->80/tcp
ID             NAME               IMAGE                  NODE             DESIRED STATE   CURRENT STATE            ERROR     PORTS
hyhy9e5wteej   my_app_backend.1   flask-backend:latest   docker-desktop   Running         Running 12 seconds ago
nk1ri9ot4h57   my_app_backend.2   flask-backend:latest   docker-desktop   Running         Running 11 seconds ago
75xhfb4qabra   my_app_backend.3   flask-backend:latest   docker-desktop   Running         Running 12 seconds ago
PS C:\Users\VASAVI XEROX> docker stack services my_app
ID             NAME              MODE         REPLICAS   IMAGE                  PORTS
krwbwp116lwg   my_app_backend    replicated   3/3        flask-backend:latest
784plgitj4sr   my_app_db         replicated   1/1        postgres:latest
a91fhks2vf16   my_app_frontend   replicated   1/1        nginx:latest           *:8080->80/tcp
PS C:\Users\VASAVI XEROX> docker service ls
ID             NAME              MODE         REPLICAS   IMAGE                  PORTS
krwbwp116lwg   my_app_backend    replicated   3/3        flask-backend:latest
784plgitj4sr   my_app_db         replicated   1/1        postgres:latest
a91fhks2vf16   my_app_frontend   replicated   1/1        nginx:latest           *:8080->80/tcp
PS C:\Users\VASAVI XEROX> docker service ps my_app_backend
ID             NAME               IMAGE                  NODE             DESIRED STATE   CURRENT STATE            ERROR     PORTS
hyhy9e5wteej   my_app_backend.1   flask-backend:latest   docker-desktop   Running         Running 42 seconds ago
nk1ri9ot4h57   my_app_backend.2   flask-backend:latest   docker-desktop   Running         Running 42 seconds ago
75xhfb4qabra   my_app_backend.3   flask-backend:latest   docker-desktop   Running         Running 42 seconds ago
PS C:\Users\VASAVI XEROX> docker service scale my_app_backend=5
>>
my_app_backend scaled to 5
overall progress: 5 out of 5 tasks
1/5: running
2/5: running
3/5: running
4/5: running
5/5: running
verify: Service my_app_backend converged
PS C:\Users\VASAVI XEROX> docker stack rm my_app
>>
Removing service my_app_backend
Removing service my_app_db
Removing service my_app_frontend
Removing network my_app_app_network
PS C:\Users\VASAVI XEROX> docker ps
CONTAINER ID   IMAGE                  COMMAND                  CREATED              STATUS              PORTS                                     NAMES
07db79cab299   flask-backend:latest   "python app.py"          23 seconds ago       Up 22 seconds                                                 my_app_backend.4.h0kk6qz0tbif7mni4o4zn5jpb
6546bbba4229   flask-backend:latest   "python app.py"          23 seconds ago       Up 22 seconds                                                 my_app_backend.5.y1nfg6msne43ym79fnpcx6sxe
691095f8a055   flask-backend:latest   "python app.py"          About a minute ago   Up About a minute                                             my_app_backend.2.nk1ri9ot4h57j1s514jduqz3m
14e2ded8589c   flask-backend:latest   "python app.py"          About a minute ago   Up About a minute                                             my_app_backend.1.hyhy9e5wteejyr3kc1o2wzvr2
ccfce363d48a   flask-backend:latest   "python app.py"          About a minute ago   Up About a minute                                             my_app_backend.3.75xhfb4qabrauarwi0olqndl0
6a9beb8f1d6d   flask-backend          "python app.py"          14 minutes ago       Up 14 minutes                                                 my_backend
8e7bfb55f259   nginx:latest           "/docker-entrypoint.…"   20 minutes ago       Up 20 minutes       0.0.0.0:8088->80/tcp, [::]:8088->80/tcp   my_nginx
9842481b3548   postgres:latest        "docker-entrypoint.s…"   39 minutes ago       Up 39 minutes       5432/tcp                                  my_postgres
PS C:\Users\VASAVI XEROX> docker ps -a
CONTAINER ID   IMAGE                  COMMAND                  CREATED              STATUS              PORTS                                     NAMES
07db79cab299   flask-backend:latest   "python app.py"          29 seconds ago       Up 28 seconds                                                 my_app_backend.4.h0kk6qz0tbif7mni4o4zn5jpb
6546bbba4229   flask-backend:latest   "python app.py"          29 seconds ago       Up 28 seconds                                                 my_app_backend.5.y1nfg6msne43ym79fnpcx6sxe
691095f8a055   flask-backend:latest   "python app.py"          About a minute ago   Up About a minute                                             my_app_backend.2.nk1ri9ot4h57j1s514jduqz3m
14e2ded8589c   flask-backend:latest   "python app.py"          About a minute ago   Up About a minute                                             my_app_backend.1.hyhy9e5wteejyr3kc1o2wzvr2
ccfce363d48a   flask-backend:latest   "python app.py"          About a minute ago   Up About a minute                                             my_app_backend.3.75xhfb4qabrauarwi0olqndl0
6a9beb8f1d6d   flask-backend          "python app.py"          14 minutes ago       Up 14 minutes                                                 my_backend
8e7bfb55f259   nginx:latest           "/docker-entrypoint.…"   20 minutes ago       Up 20 minutes       0.0.0.0:8088->80/tcp, [::]:8088->80/tcp   my_nginx
9842481b3548   postgres:latest        "docker-entrypoint.s…"   39 minutes ago       Up 39 minutes       5432/tcp                                  my_postgres
PS C:\Users\VASAVI XEROX> history

  Id CommandLine
  -- -----------
   1 docker ps
   2 docker volume create db_data
   3 docker volume create app_data
   4 docker network create --driver bridge app_network
   5 docker run -d --name my_postgres --network app_network -e POSTGRES_USER=myuser -...
   6 notepad Dockerfile
   7 rm Dockerfile...
   8 mkdir backend
   9 cd backend/
  10 notepad Dockerfile
  11 docker build -t flask-backend ./backend
  12 cd..
  13 docker build -t flask-backend ./backend
  14 cd backend/
  15 docker build -t flask-backend ....
  16 dir
  17 rename-file Dockerfile.txt Dockerfile
  18 Rename-Item Dockerfile.txt Dockerfile...
  19 dir
  20 docker build -t flask-backend .
  21 docker run -d --name my_backend --network app_network -e DB_HOST=my_postgres -e ...
  22 docker build -t flask-backend ....
  23 docker build -t flask-backend .
  24 cd "C:\Users\VASAVI XEROX\backend"...
  25 echo Flask > requirements.txt
  26 echo psycopg2-binary >> requirements.txt
  27 Flask...
  28 dir requirements.txt...
  29 docker build -t flask-backend ....
  30 docker run -d --name my_backend --network app_network -e DB_HOST=my_postgres -e ...
  31 mkdir frontend...
  32 cd ..
  33 cd frontend/
  34 mkdir frontend
  35 dir .\frontend\index.html...
  36 cd frontend/
  37 notepad index.html
  38 dir
  39 docker run -d --name my_nginx --network app_network -v ${PWD}/frontend:/usr/shar...
  40 New-Item -Path . -Name "docker-compose.yml" -ItemType "File"...
  41 notepad docker-compose.yml
  42 cd ..
  43 docker logs my_backend
  44 dir app.py...
  45 cd backend/
  46 notepad app.py
  47 docker build -t flask-backend ....
  48 docker rm -f my_backend
  49 docker run -d --name my_backend --network app_network -e DB_HOST=my_postgres -e ...
  50 docker logs my_backend
  51 docker exec -it my_backend bash
  52 cd..
  53 vim docker-compose.yml
  54 notepad docker-compose.yml
  55 dir
  56 docker stack deploy -c stack.yml my_app...
  57 dir stack.yml...
  58 docker-compose up --build -d...
  59 docker-compose down -v...
  60 docker swarm init...
  61 docker swarm leave --force
  62 docker swarm init
  63 Rename-Item -Path docker-compose.yml -NewName stack.yml...
  64 dir
  65 code stack.yml...
  66 docker stack deploy -c stack.yml my_app...
  67 docker stack ls...
  68 docker stack services my_app
  69 docker service ls
  70 docker service ps my_app_backend
  71 docker service scale my_app_backend=5...
  72 docker stack rm my_app...
  73 docker ps
  74 docker ps -a


PS C:\Users\VASAVI XEROX> code stack.yml
>>
PS C:\Users\VASAVI XEROX> docker run -d --name my_nginx --network app_network -v ${PWD}/frontend:/usr/share/nginx/html:ro -p 8088:80 nginx:latest
>>
docker: Error response from daemon: Conflict. The container name "/my_nginx" is already in use by container "8e7bfb55f2595c70dc76127deb9d4d8681c3015ba2d642e5e6faebbc53e8926d". You have to remove (or rename) that container to be able to reuse that name.

Run 'docker run --help' for more information
PS C:\Users\VASAVI XEROX> docker rm -f my_nginx
>>
my_nginx
PS C:\Users\VASAVI XEROX> docker run -d --name my_nginx --network app_network -v ${PWD}/frontend:/usr/share/nginx/html:ro -p 8088:80 nginx:latest
>>
39572e8b550cbe19f109ee7be3d90eab70636242981b639ec67bac214cc897d5
PS C:\Users\VASAVI XEROX> docker ps
>>
CONTAINER ID   IMAGE             COMMAND                  CREATED          STATUS          PORTS                                     NAMES
39572e8b550c   nginx:latest      "/docker-entrypoint.…"   3 minutes ago    Up 3 minutes    0.0.0.0:8088->80/tcp, [::]:8088->80/tcp   my_nginx
6a9beb8f1d6d   flask-backend     "python app.py"          28 minutes ago   Up 28 minutes                                             my_backend
9842481b3548   postgres:latest   "docker-entrypoint.s…"   53 minutes ago   Up 53 minutes   5432/tcp                                  my_postgres
PS C:\Users\VASAVI XEROX> docker logs my_backend
>>
 * Serving Flask app 'app'
 * Debug mode: off
WARNING: This is a development server. Do not use it in a production deployment. Use a production WSGI server instead.
 * Running on all addresses (0.0.0.0)
 * Running on http://127.0.0.1:5000
 * Running on http://172.19.0.4:5000
Press CTRL+C to quit
PS C:\Users\VASAVI XEROX> docker run -d --name my_backend --network app_network -p 5000:5000 -e DB_HOST=my_postgres -e DB_USER=myuser -e DB_PASSWORD=mypassword -e DB_NAME=mydb flask-backend
>>
docker: Error response from daemon: Conflict. The container name "/my_backend" is already in use by container "6a9beb8f1d6d2c2cc078a0516f20e19a1784dae392faf11cc754123780fef985". You have to remove (or rename) that container to be able to reuse that name.

Run 'docker run --help' for more information
PS C:\Users\VASAVI XEROX> docker rm -f my_backend
>>
my_backend
PS C:\Users\VASAVI XEROX> docker run -d --name my_backend --network app_network -p 5000:5000 -e DB_HOST=my_postgres -e DB_USER=myuser -e DB_PASSWORD=mypassword -e DB_NAME=mydb flask-backend
>>
fb6fcc0fa4d62910e940e37cb96b3e38aded6c371386882332ace315c2aa7e70
PS C:\Users\VASAVI XEROX>
