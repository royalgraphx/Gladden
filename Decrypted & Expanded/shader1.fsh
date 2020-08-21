void main(void) {
    
	vec4 val = texture2D(u_texture, v_tex_coord);
	
	gl_FragColor = vec4((val.r+(u_tint.r*val.a-val.r)*u_tint.a),(val.g+(u_tint.g*val.a-val.g)*u_tint.a),(val.b+(u_tint.b*val.a-val.b)*u_tint.a),val.a)*v_color_mix;
	
}
