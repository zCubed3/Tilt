#version 330 core

#ifdef VERTEX
layout(location = 0) in vec3 _vertex;
layout(location = 1) in vec3 _normal;

out vec3 vert_position;
out vec3 normal;

uniform mat4 MANTA_MATRIX_M;
uniform mat4 MANTA_MATRIX_V;
uniform mat4 MANTA_MATRIX_P;
uniform mat4 MANTA_MATRIX_M_IT;

void main() {
  mat4 mMVP = MANTA_MATRIX_P * MANTA_MATRIX_V * MANTA_MATRIX_M;
  gl_Position = mMVP * vec4(_vertex, 1.0);  

  vert_position = (MANTA_MATRIX_M * vec4(_vertex, 1.0)).xyz;  
  normal = (MANTA_MATRIX_M_IT * vec4(_normal, 1.0)).xyz;
}

#endif

#ifdef FRAGMENT
layout(location = 4) out vec4 out_emission;

in vec3 vert_position;
in vec3 normal;

uniform samplerCube MANTA_CUBEMAP_ENVIRONMENT;

uniform vec3 MANTA_CAMERA_POSITION;

void main() {
    vec3 direction = normalize(vert_position - MANTA_CAMERA_POSITION);

    out_emission = texture(MANTA_CUBEMAP_ENVIRONMENT, direction);
}

#endif
