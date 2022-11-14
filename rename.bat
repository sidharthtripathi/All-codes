@ECHO OFF
PUSHD .
FOR /R %%d IN (.) DO (
cd "%%d"
IF EXIST *.txt (
REN *.txt *.cpp
)
)
POPD