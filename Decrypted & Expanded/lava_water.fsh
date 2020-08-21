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





vec2 mo(vec2 m){
    return (vec2(mod(m.x,1.0),mod(m.y,1.0)));
}

void main(void){
    float amp = 1.2;
    //vec4 tint_color = vec4(0.16,0.47,0.8, 0.0)
    float time = u_time;//mod(u_time,1.0);
    vec2 uv = vec2(v_tex_coord.x+u_x,v_tex_coord.y);//gl_FragCoord.xy / vec2(300,300.0);//v_tex_coord;//;
    vec2 p = uv + mo(-(texture2D(u_texture, mo((uv*0.3) +(vec2(time*0.04, 0)))).xy)*amp +
                     (texture2D(u_texture, uv*0.3-vec2(time*0.05, 0)).xy)*amp);
    //vec2 p = uv + (texture2D(iChannel0, vec2(-iGlobalTime*0.01, 0)).xy)*amp;
    //uv + mo((vec2(.5)-texture2D(iChannel0, uv1).xy)*amp);
    
    vec4 val = texture2D(u_texture, mo(p));
    
    vec3 col = rgb2hsv(vec3(val.r,val.g,val.b));
    col.x -= 116.0/255.0;
    col.y -= 0.0;
    col.z += 0.217;
    vec3 col2 = hsv2rgb(vec3(col.x,col.y,col.z));
    
    gl_FragColor = vec4(col2.r,col2.g,col2.b,val.a);
    
    //gl_FragColor =
    
    //gl_FragColor = vec4(1,1,1,1);
}

