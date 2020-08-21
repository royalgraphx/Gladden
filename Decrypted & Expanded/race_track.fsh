void main(void) {
    int stripe = 8;//int(u_path_length) / 150.0;
    int h = int(v_path_distance) / stripe % 2;
    gl_FragColor = float4(h);
}
