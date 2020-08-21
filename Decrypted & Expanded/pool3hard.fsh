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
    if (val.g > val.b && val.g > val.r){
        vec3 col = rgb2hsv(vec3(val.r,val.g,val.b));
        
        
        
        if (col.x >= 0.1 && col.x <= 0.48){
            /*         //col.z = 0.0;
             col.z *= 0.3;
             vec3 col2 = hsv2rgb(vec3(col.x,col.y,col.z));
             
             gl_FragColor = vec4(col2.r,col2.g,col2.b,val.a);
             */   }else{
                 
                 col.x = -0.02;
                 col.y *= 0.8;
                 col.z *= 1.6;
                 
                 
                 vec3 col2 = hsv2rgb(vec3(col.x,col.y,col.z));
                 
                 gl_FragColor = vec4(col2.r,col2.g,col2.b,val.a);
             }
        
        
    }else{
        //gl_FragColor = vec4(val.r,val.g,val.b,val.a);
        vec3 col = rgb2hsv(vec3(val.r,val.g,val.b));
        //col.
        
        /*if (col.x >= 0.05 && col.x <= 0.55){
	        col.y = 0.0;
	        col.z *= 0.5;
	        if (col.x >= 0.1 && col.x <= 0.3){
         col.z *= 0.3;
	        }
	        col.x = 0.56;
         
   	     vec3 col2 = hsv2rgb(vec3(col.x,col.y,col.z));
	        gl_FragColor = vec4(col2.r,col2.g,col2.b,val.a);
         
         }else{
         col.z *= 0.65;
         col.y *= 0.25;
         
         //   col.x = 0.56;
         
   	     vec3 col2 = hsv2rgb(vec3(col.x,col.y,col.z));
	        gl_FragColor = vec4(col2.r,col2.g,col2.b,val.a);
         
         }*/
        
        //col.z *= 1.0;
        //col.y *= 0.70;
        
        //   col.x = 0.56;
        
        vec3 col2 = hsv2rgb(vec3(col.x,col.y,col.z));
        gl_FragColor = vec4(col2.r,col2.g,col2.b,val.a);
        
        
        
        //	gl_FragColor = val;
    }
    
    //gl_FragColor = vec4(1,1,1,1);
    //gl_FragColor = vec4((val.r+(u_tint.r*val.a-val.r)*u_tint.a),(val.g+(u_tint.g*val.a-val.g)*u_tint.a),(val.b+(u_tint.b*val.a-val.b)*u_tint.a),val.a)*v_color_mix;
    
}

