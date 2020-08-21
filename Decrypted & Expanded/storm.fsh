float rand(vec2 p){
    p+=.2127+p.x+.3713*p.y;
    vec2 r=4.789*sin(789.123*(p));
    return fract(r.x*r.y);
}

float sn(vec2 p){
    vec2 i=floor(p-.5);
    vec2 f=fract(p-.5);
    f = f*f*f*(f*(f*6.0-15.0)+10.0);
    float rt=mix(rand(i),rand(i+vec2(1.,0.)),f.x);
    float rb=mix(rand(i+vec2(0.,1.)),rand(i+vec2(1.,1.)),f.x);
    return mix(rt,rb,f.y);
}

void main(void)
{
    
    vec3 clouds = vec3(59/255.0,119/255.0,151/255.0);//mix(vec3(59/255.0,119/255.0,151/255.0),vec3(19/255.0,21/255.0,51/255.0),f);//vec3(59/255.0,119/255.0,151/255.0);//
    float bam = sn(vec2(u_time*4.5));
    
    
    //moon -= smoothstep(0.93,0.956,1.-length(uv-moonp2));
    //moon = clamp(moon, 0., 1.);
    //moon += 0.3*smoothstep(0.80,0.956,1.-length(uv-moonp));
    
    //clouds+= pow(1.-length(uv-moonp),1.7)*0.3;
    
    //clouds*=0.8;
    if (bam > 0.95){
        vec2 uv = v_tex_coord;//texture2D(u_texture, v_tex_coord).xy;//fragCoord.xy / iResolution.y;
        
        //uv+=iMouse.xy/ iResolution.xy;
        
        vec2 p=uv.xy*vec2(3.,4.3);
        
        float newT = u_time*0.4 + sn(vec2(u_time*1.))*0.1;
        p.x-=u_time*0.0;
        
        p.y*=1.3;
        
        
        float f3=
        .5*sn(p)
        +.25*sn(2.04*p+newT*1.1)
        -.125*sn(4.03*p-u_time*0.3);
/*        +.0625*sn(8.02*p-u_time*0.5)
        +.03125*sn(16.01*p+u_time*0.6)+
        .019*sn(18.02*p);*/
        
        //float f4 = f2*smoothstep(0.0,1.,uv.y);
   
        
        float lightning = sn((f3)+vec2(pow(bam,6.)));

        lightning *= smoothstep(0.0,1.,uv.y+0.5);

        lightning = smoothstep(0.76,1.,lightning);
        lightning=lightning*2.;
        clouds += lightning ;// +0.2;
    }
    
    
    //vec3 painting = (clouds );
    
    //float r=1.-length(max(abs(gl_FragCoord.xy / iResolution.xy*2.-1.)-.5,0.));
    //painting*=r;
    
    gl_FragColor = vec4(clouds, 1.);
    //gl_FragColor = vec4(0,0,0,1);
}
