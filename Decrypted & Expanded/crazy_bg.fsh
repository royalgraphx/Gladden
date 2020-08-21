vec3 rgb2hsv(vec3 c)
{
    vec4 K = vec4(0.0, -1.0 / 3.0, 2.0 / 3.0, -1.0);
    vec4 p = mix(vec4(c.bg, K.wz), vec4(c.gb, K.xy), step(c.b, c.g));
    vec4 q = mix(vec4(p.xyw, c.r), vec4(c.r, p.yzx), step(p.x, c.r));
    
    float d = q.x - min(q.w, q.y);
    float e = 1.0e-10;
    return vec3(abs(q.z + (q.w - q.y) / (6.0 * d + e)), d / (q.x + e), q.x);
}

vec3 hsv2rgb(vec3 c)
{
    vec4 K = vec4(1.0, 2.0 / 3.0, 1.0 / 3.0, 3.0);
    vec3 p = abs(fract(c.xxx + K.xyz) * 6.0 - K.www);
    return c.z * mix(K.xxx, clamp(p - K.xxx, 0.0, 1.0), c.y);
}

void main(void) {
    
    vec4 val = texture2D(u_texture, v_tex_coord);

        vec3 col = rgb2hsv(vec3(val.r,val.g,val.b));
        
        
    
                 
                 col.x = 0.0;
                 col.y *= 0.85;
                 col.z *= 1.8;
                 
                 
                 vec3 col2 = hsv2rgb(vec3(col.x,col.y,col.z));
                 
                 gl_FragColor = vec4(col2.r,col2.g,col2.b,val.a);
    
    //gl_FragColor = vec4(1,1,1,1);
    //gl_FragColor = vec4((val.r+(u_tint.r*val.a-val.r)*u_tint.a),(val.g+(u_tint.g*val.a-val.g)*u_tint.a),(val.b+(u_tint.b*val.a-val.b)*u_tint.a),val.a)*v_color_mix;
    
}

