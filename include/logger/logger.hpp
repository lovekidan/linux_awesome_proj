#ifndef LOGGER
#define LOGGER

class logger
{
public:
	static logger* get_instance();
	void log(char* message);

private:
	logger();
	~logger();
	
};
#endif