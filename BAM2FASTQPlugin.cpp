#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BAM2FASTQPlugin.h"

void BAM2FASTQPlugin::input(std::string file) {
 inputfile = file;
}

void BAM2FASTQPlugin::run() {}

void BAM2FASTQPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "bamToFastq";
myCommand += " ";
myCommand += "-i";
myCommand += " ";
myCommand += inputfile + " ";
myCommand += "-fq";
myCommand += " ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<BAM2FASTQPlugin> BAM2FASTQPluginProxy = PluginProxy<BAM2FASTQPlugin>("BAM2FASTQ", PluginManager::getInstance());
