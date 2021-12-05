# apprenticeship-2021_11_11-edu-modulo_and_flags
2021-11-11 CET
This was an easy day, as we learned about using the modulo operator and flags.



Each of the files here are technically version 2

 - file names were suffixed with "alpha", part of my early chronological versioning scheme.
 - fixed the comments at the bottom of both .cpp files in accordance to filename changes;
   - 1_modulo.cpp also still contained a "name meaning: " line the bottom comment, which now has been removed

 - 2_flags.cpp had a completely redundant "using std::string" line (lol)

 - all functions I had defined were defined in the .cpp files, as I wanted to avoid using header files since they weren't part of our lessons at this point. I now put them in a header file, using and slightly modifying my current template, and included that in both .cpp files.

 - instead of assigning restartOperator the return value of the queryRestartProgram function, I only executed the function, so the do-while loops couldn't actually be looped in both .cpp files. I fixed this.
