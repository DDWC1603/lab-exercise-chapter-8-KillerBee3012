#include <iostream>
using namespace std;


class Log
{
	
	public:
	
	//use array or enum
	enum Level {LevelError=0,LevelWarning,LevelInfo}
	    
	private:
		
		int m_LogLevel=LogLevelInfo;
		
	public:
		void setLevel (int Level)
		{
			m_Loglevel=Level;
		}
		
		void Error (const char* message)
		{
			if (m_LogLevel>=LogLevelError)
			cout<< "[ERROR]: "<<message<<endl;
			
		}
		
		void Warn (const char* message)
		
		{
			if (m_LogLevel>=LogLevelWarning)
			cout<<"[WARNING]:"<<message<<endl;
		}
		
		void Info (const char* message)
		
		{
			if (m_LogLevel>=LogLevelInfo)
			cout<< "[INFO}: "<<message<<endl;
			
		}
		
};


int main()

{
	
	Log oLog;
	oLog.setLevel(oLog.LogLevelWarning);
	oLog.Warn("Hello!!!");
	
	std::cin.get();
	
}
