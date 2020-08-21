float random(float x) {
    return fract(sin(x) * 10000.0);
}

float noise(vec2 p) {
    return random(p.x + p.y * 10000.0);
}

vec2 sw(vec2 p) { return vec2(floor(p.x), floor(p.y)); }
vec2 se(vec2 p) { return vec2(ceil(p.x), floor(p.y)); }
vec2 nw(vec2 p) { return vec2(floor(p.x), ceil(p.y)); }
vec2 ne(vec2 p) { return vec2(ceil(p.x), ceil(p.y)); }

float smoothNoise(vec2 p) {
    
    vec2 interp = smoothstep(0.0, 1.0, fract(p));
    float s = mix(noise(sw(p)), noise(se(p)), interp.x);
    float n = mix(noise(nw(p)), noise(ne(p)), interp.x);
    return mix(s, n, interp.y);
    
}

float fractalNoise(vec2 p) {
    
//    float x = 0.0f;
//    x += smoothNoise(p      );
   // x += smoothNoise(p * 2.0f ) / 2.0f;
  //  x += smoothNoise(p * 4.0f ) / 4.0f;
//    x += smoothNoise(p * 8.0f ) / 8.0f;
//    x += smoothNoise(p * 16.0f) / 16.0f;
//    x /= 1.9375f;//1.0f + 1.0f/2.0f + 1.0f/4.0f + 1.0f/8.0f + 1.0f/16.0f;
    return smoothNoise(p * 2.0) / 2.0;
    
}

float movingNoise(vec2 p,float time) {
    
    float x = fractalNoise(p + time);
    float y = fractalNoise(p - time);
    return fractalNoise(p + vec2(x, y));
    
}

// call this for water noise function
float nestedNoise(vec2 p,float time) {
    
  //  float x = movingNoise(p,time);
//    float y = movingNoise(p + 100.0f,time);
    return movingNoise(p + vec2(p.x, p.y),time);
    
}

void main(void) {
    vec2 uv = vec2(v_tex_coord.x-u_time/19.0+u_x,v_tex_coord.y) / vec2(1.0,1.0);
    float n = movingNoise(uv * 9.0,u_time*1.2);
    
    gl_FragColor = vec4(mix(vec3(0.16,0.47,0.8), vec3(0.22,0.54,0.91), n), 0.9);
    //gl_FragColor = vec4(0.29,0.71,1.0,1.0);
    
    

    
}
