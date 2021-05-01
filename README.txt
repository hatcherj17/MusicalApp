//END USER
Install with Musical App Setup.msi
-Run Musical App from the Start Menu
-Play Music :)


//THESE INSTRUCTIONS BELOW ARE FOR DEVS ONLY ENDUSERS DO NOT NEED TO DO THIS BELOW
//DEVELOPER INSTRUCTIONS
How to get it to run on date 4/8/2021
To get it to run with visual studio on Windows 10 Visual Studio first install
--Check .NET desktop development
--Check Desktop development with C++
--under Desktop development with C++ Installation Details
----Check C++/CLR support for v142 build tools during Visual Studio installation
or
--Open Visual Studio Installer
--Click either more box and select modify or select modify
----Check .NET desktop development 
----Check Desktop development with C++
----under Desktop development with C++ Installation Details
------Check C++/CLR support for v142 build tools during Visual Studio installation

if this still dont work close ( MyForm.h [Design] ) tab and reopen
the ability to see the form should now be possible


< To Get Microsoft Visual Studio Installer Projects >
--in Visual Studio, choose Extensions > Manage Extensions. Under the Extensions and Updates 
dialog, select the Online tab and type Microsoft Visual Studio Installer Projects in the 
search box. Hit Enter, select Microsoft Visual Studio <version> Installer Projects,
and click Download. Choose to run and install the extension, then restart Visual Studio.


**********************************************************************************************
*---This is required to edit the installation msi and so that all the .DLLs that are used from * 
*   visual studio get installed for systems that dont have Visual Studio vX.X.X installed.   *
**********************************************************************************************