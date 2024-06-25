# Add the executable
add_executable(LogicSimulator main.cpp Node.cpp Gate.cpp Simulator.cpp)

# Include directories
target_include_directories(LogicSimulator PRIVATE ${CMAKE_SOURCE_DIR}/include)

install(
	TARGETS LogicSimulator
)