void main(void){
    float res = v_tex_coord.x;
    
    vec2 uv = vec2(res,v_tex_coord.y);//gl_FragCoord.xy / vec2(300,300.0);//v_tex_coord;//;
    vec4 val = texture2D(u_texture, uv);
    gl_FragColor = val*v_color_mix;
}
