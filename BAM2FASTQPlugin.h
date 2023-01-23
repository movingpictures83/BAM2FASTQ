#ifndef BAM2FASTQPLUGIN_H
#define BAM2FASTQPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class BAM2FASTQPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BAM2FASTQ";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
