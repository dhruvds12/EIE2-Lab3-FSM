#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f *.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace f1_lights.sv --exe clktick_tb_challenge.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vf1_lights.mk Vf1_lights

# run executable simulation file
echo "\nRunning simulation"
obj_dir/Vf1_lights
echo "\nSimulation completed"

