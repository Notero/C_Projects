📁 File System Project – mycp

A simplified version of the Unix cp command using low-level system calls.

🔧 Usage
./mycp source_file target_file

✅ Requirements
Use only these system calls: open(), read(), write(), close(), stat(), exit(), perror()

Exit codes:
3 – Incorrect number of arguments
4 – stat() fails (e.g. file doesn’t exist)
5 – Source is not a regular file
EXIT_FAILURE – Any other syscall error

🛠️ Build & Run
make
./mycp a.txt b.txt

]

🧪 Testing
wget https://www.cs.ucf.edu/~gazzillo/teaching/cop3402spring25/files/fs_public_tests.tar
tar -xvf fs_public_tests.tar
bash tests/01-noargs.sh $(realpath mycp)
echo $? # should match expected exit code



