void main(void){
    //float time = u_time;//mod(u_time,1.0);
    //float res = v_tex_coord.x-u_time*(u_x);
    float res = v_tex_coord.x-u_x;
    
    if (res < 0.0){
        res = 1.0-mod(-res,1.0);
    }else{
        res = mod(res,1.0);
    }
    vec2 uv = vec2(res,v_tex_coord.y);//gl_FragCoord.xy / vec2(300,300.0);//v_tex_coord;//;
    vec4 val = texture2D(u_texture, uv);
    gl_FragColor = val*v_color_mix;
}

