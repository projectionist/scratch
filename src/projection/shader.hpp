#pragma once

#include <string>
#include <GLES2/gl2.h>

namespace projection {
  class shader {
    char *src;
    std::string path;
  public:
    explicit shader(std::string path);
    ~shader();
    // delete the copy/move ctor/assign
    // shader(const shader&) = delete;
    // shader& operator=(shader&) = delete;
    // shader(const shader&&) = delete;
    // shader& operator=(shader&&) = delete;
    // void reload();
    // GLuint get();
  };
}
