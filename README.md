# ProblemSet7
Fermions or Bosons, that is the question!

If you are reading this, you are probably wondering how to use the program I wrote for
Problem set 7! Wow, it must suck not being a C++ programmer! Fear not, the instructions are
Contained in the riddle below, assuming you are using the MacOS environment: 

To translate this logic from source to machine,
You must parse the instructions hidden between.

First, summon the builder the macOS knows,
Using standard gravity, plus-plus to close.
Next, state the dilemma of masses combined,
Exactly as written, with no spaces to find.
Conclude with the dot and the trio of text,
That marks the evolution of C coming next.

String them together with one space to part,
Then press return for the eigenstates to start.




If you do not feel like decrypting this, the instructions are below. If you are not using MacOS to try and compile this program, look online on how to compile a C++ program from the terminal/commandprompt command line. 



######SPOILERS BELOW#########












To compile the program, navigate to the folder containing the C++ program, MultibodyProblem.cpp, then right click on the folder directory at the bottom of the finder and click "Open in Terminal". Any terminal instance will work, it does not have to be opened this way, the only important part is that the directory is properly set to the location of the C++ file. When correctly navigated, run the following command: g++ MultibodyProblem.cpp, and allow the system to compile the file. Then, when it is done, a new file named a.out should be in the directory. Write into the command line ./a.out, running the new object file created. This will print to the terminal the Boson linear combination. If you would like to see the Fermions, open the file with a text editor, reassign the variable responsible for printing boson/fermion states "IsBoson = true" to "IsBoson = false", which should be at the top of the page. SAVE, RECOMPILE with G++, and rerun ./a.out and you will now see the new print statement. If you are lazy, check the two other text files to see what the program prints. 
