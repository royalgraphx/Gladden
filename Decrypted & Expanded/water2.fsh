


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
    
    gl_FragColor = texture2D(u_texture, mo(p));
    
    //gl_FragColor = vec4(1,1,1,1);
}

