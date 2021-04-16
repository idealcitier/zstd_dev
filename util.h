#pragma once

#include <string>

const int DEFAULTCOMPRESSLEVEL = 5;

class Util {
 public:
  // if return code not 0 is error
  static int CompressString(const std::string& src, std::string& dst,
                            int compressionlevel = DEFAULTCOMPRESSLEVEL);

  // if return code not 0 is error
  static int DecompressString(const std::string& src, std::string& dst);

  // if return code not 0 is error
  static int StreamDecompressString(const std::string& src, std::string& dst,
                                    int compressionlevel = DEFAULTCOMPRESSLEVEL);

  // if return code not 0 is error
  static int StreamCompressString(const std::string& src, std::string& dst,
                                  int compressionlevel = DEFAULTCOMPRESSLEVEL);
};

