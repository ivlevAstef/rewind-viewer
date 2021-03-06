//
// Created by valdemar on 14.10.17.
//

#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>

#include <string>

/**
 * Class representing ShaderProgram
 */
class Shader {
public:
    Shader(const std::string &vertex_shader_path, const std::string &fragment_shader_path);
    ~Shader();

    void use();

    GLuint id() const;

    GLint uniform(const std::string &name);

    void set_mat4(const std::string &name, const glm::mat4 &v);
    void set_mat4(const std::string &name, float *pv);
    void set_vec3(const std::string &name, const glm::vec3 &v);
    void set_vec2(const std::string &name, const glm::vec2 &v);
    void set_float(const std::string &name, float val);
    void set_int(const std::string &name, GLint val);

    void bind_uniform_block(const std::string &name, GLuint binding_point);

private:
    GLuint program_ = 0;
};




