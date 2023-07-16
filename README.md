TreeLine Experiments
===

A simple repository that gets you started with [TreeLine](https://github.com/mitdbg/treeline).

Run the following commands for a simple TreeLine based Hello, World! example.

## Building the binary

```sh
cmake -B build
cmake --build build
```

The successful completion of the above command will build a binary in the `build` folder with the
name `tl`.

## Executing the binary

Executing the binary by running the following command will create a folder `tdb` in the
current directory which is an instance of the TreeLine database.

```
./build/tl
```
