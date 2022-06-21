
# StrSplit - by Kvc
## Description
Strings in Batch tend to be difficult to handle, especially for newer programmers. That is why many people use external plugins to avoid the hassle. This plugin created by ***KVC*** Breaks the string into parts from the given delimiter.

Author: Kvc

## Usage
Call StrSplit [delimiter] [string]

Example: 
`StrSplit <"delimiter"> <"dataString">`

Let’s say you have a string that contains a large amount of data in one line, such as a path variable. Typically, your path variable would look something like this:
`C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files (x86)\Intel\Intel(R) Management Engine Components\DAL;C:\Program Files\Intel\Intel(R) MComponents\IPT;C:\WINDOWS\System32\OpenSSH\;C:\ProgramData\chocolatey\bin;C:\Users\Zeek\Desktop\tcc;C:\Progra;c:\users\zeek\appdata\local\programs\python\python37\Scripts;C:\Program Files\dotnet\;C:\Program Files\CMake\bin;C:\Program Files\Git\cmd;C:\Program Files (x86)\LLVM\bin;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\WINDOWS\System32\OpenSSH\;C:\cygwin64\bin\java;C....`

This is quite a mess. Especially when you are trying to debug a program that needs to use the system path. We can use the StrSplit plugin to quickly generate a clean and separated list of the items in our path. The syntax of the StrSplit command is as follow:

`EXAMPLE: StrSplit ";" "%path%"`
With this in mind, we can get our needed result in just one call to the plugin:

![Anim12-2](https://user-images.githubusercontent.com/82807654/174771982-be750afb-dfc5-409a-ab12-1f2d94ee2ac4.gif)

As you can see, we used the semicolon which separates each path variable in the string. Thus, each instance is one of the system path variables, and we get the multi-line result we were looking for. Another example of the power of plugins in Batch.

Article- https://batch-man.com/string-functions-by-kvc/

Video- https://www.youtube.com/watch?v=7sa5LMnbsfU
