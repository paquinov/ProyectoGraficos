#version 450

in vec2 coord2d;
uniform float t;

void main(void){
	vec2 new_coord = coord2d + t;
    gl_Position = vec4(new_coord, 0, 1);
}
