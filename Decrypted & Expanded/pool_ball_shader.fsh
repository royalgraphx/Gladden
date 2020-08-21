mat3 xrot(float angle) {
    mat3 m;
    m[0] = vec3(1.0, 0.0, 0.0);
    m[1] = vec3(0.0, cos(angle), -sin(angle));
    m[2] = vec3(0.0, sin(angle), cos(angle));
    return m;
}

mat3 yrot(float angle) {
    mat3 m;
    m[0] = vec3(cos(angle), 0.0, -sin(angle));
    m[1] = vec3(0.0, 1.0, 0.0);
    m[2] = vec3(sin(angle), 0.0, cos(angle));
    return m;
}

mat3 zrot(float angle) {
    mat3 m;
    m[0] = vec3(cos(angle), -sin(angle),0.0);
    m[1] = vec3(sin(angle), cos(angle),0.0);
    m[2] = vec3(0.0, 0.0, 1.0);
    return m;
}

float intersectSphere(vec3 camera, vec3 ray, vec3 sphereOrigin, float sphereRadius) {
    float radiusSquared = sphereRadius * sphereRadius;
    float dt = dot(ray, sphereOrigin - camera);
    if (dt < 0.0) {
        return -1.0;
    }
    vec3 tmp = camera - sphereOrigin;
    tmp.x = dot(tmp, tmp);
    tmp.x = tmp.x - dt * dt;
    if (tmp.x >= radiusSquared) {
        return -1.0;
    }
    float distanceFromCamera = dt - sqrt(radiusSquared - tmp.x);
    return distanceFromCamera;
}



vec4 quat_from_axis_angle(vec3 axis, float angle)
{
    vec4 qr;
    float half_angle = (angle * 0.5) * 3.14159 / 180.0;
    qr.x = axis.x * sin(half_angle);
    qr.y = axis.y * sin(half_angle);
    qr.z = axis.z * sin(half_angle);
    qr.w = cos(half_angle);
    return qr;
}
vec4 axis_angle_from_quat(vec4 q1)
{

//   float angle = 2 * acos(qr.w);
//	return vec4(qr.x / sqrt(1-qr.w*qr.w),qr.y / sqrt(1-qr.w*qr.w),qr.z / sqrt(1-qr.w*qr.w),2 * acos(qr.w));

	float angle_rad = acos(q1.w) * 2.0;
    float angle_deg = angle_rad * 180.0 / 3.14159265359;
    float x = q1.x / sin(angle_rad/2.0);
    float y = q1.y / sin(angle_rad/2.0);
    float z = q1.z / sin(angle_rad/2.0);
	return vec4(x,y,z,angle_deg);
}
vec4 quat_conj(vec4 q)
{
    return vec4(-q.x, -q.y, -q.z, q.w);
}

vec4 quat_mult(vec4 q1, vec4 q2)
{
    vec4 qr;
    qr.x = (q1.w * q2.x) + (q1.x * q2.w) + (q1.y * q2.z) - (q1.z * q2.y);
    qr.y = (q1.w * q2.y) - (q1.x * q2.z) + (q1.y * q2.w) + (q1.z * q2.x);
    qr.z = (q1.w * q2.z) + (q1.x * q2.y) - (q1.y * q2.x) + (q1.z * q2.w);
    qr.w = (q1.w * q2.w) - (q1.x * q2.x) - (q1.y * q2.y) - (q1.z * q2.z);
    return qr;
}
vec3 rotate_vertex_position2(vec3 position, vec4 qr)
{
//    vec4 qr = quat_from_axis_angle(axis, angle);
    vec4 qr_conj = quat_conj(qr);
    vec4 q_pos = vec4(position.x, position.y, position.z, 0);
    
    vec4 q_tmp = quat_mult(qr, q_pos);
    qr = quat_mult(q_tmp, qr_conj);
    
    return vec3(qr.x, qr.y, qr.z);
}

vec3 rotate_vertex_position(vec3 position, vec3 axis, float angle)
{
    vec4 qr = quat_from_axis_angle(axis, angle);
    vec4 qr_conj = quat_conj(qr);
    vec4 q_pos = vec4(position.x, position.y, position.z, 0);
    
    vec4 q_tmp = quat_mult(qr, q_pos);
    qr = quat_mult(q_tmp, qr_conj);
    
    return vec3(qr.x, qr.y, qr.z);
}

void main(void) {
    /*float x = 2.0 * (v_tex_coord.x - 0.5);
    float y = 2.0 * (v_tex_coord.y - 0.5);
    float r = sqrt(x * x + y * y);
    
    float d = r ? asin(r) / r : 0.0;
    float x2 = d * x;
    float y2 = d * y;

    float time = 0.5;
	float pi = 3.14159265359;
	float x3 = mod(x2 / (1.0 * pi) + 0.5 +u_time/u_time, 1.0f);
	float y3 = mod(y2 / (1.0 * pi) + 0.5 +u_time/10, 1.0f);//y2 / (2.0 * pi) + 0.5;

    if (r <= 1.0)
        gl_FragColor = texture2D(u_texture, vec2(x3, y3));
    else
        gl_FragColor = vec4(0,0,0,0);*/

    vec3 spherePosition = vec3(0.0, 0.0, 0.0);
    float sphereRadius = 0.98;
    vec3 cameraPosition = vec3(0.0, 0.0,-5.0);
    
    vec2 uv = 2.0*(v_tex_coord-0.5);
    vec3 pixelPosition = vec3(uv.x / 1.0, uv.y /1.0, 0.0);
    
    vec3 ray = pixelPosition - cameraPosition;  // Generate a ray
    ray = normalize(ray);
    
    //ray = ray * xrot(u_rotation.x) * yrot(u_rotation.y)* zrot(u_rotation.z);
    //cameraPosition = cameraPosition * xrot(u_rotation.x) * yrot(u_rotation.y) * zrot(u_rotation.z);
	vec3 v_rotation = u_rotation;//vec3(mod(u_rotation.x,360.0),mod(u_rotation.y,360.0),mod(u_rotation.z,360.0));
//	cameraPosition = rotate_vertex_position(cameraPosition,normalize(v_rotation),length(v_rotation));
//	vec3 dif = vec3(0.0, 0.0,-5.0)-cameraPosition
//	ray = ray + dif;
//	
	//v_rotation += vec3(mod(u_time*100,360.0),0.0f,0.0f);
	//cameraPosition = u_rotation;

	//vec4 q1 = quat_from_axis_angle(normalize(vec3(1,0,0.0f)), u_time*1000);
	//vec4 q2 = quat_from_axis_angle(normalize(v_rotation),length(v_rotation));
	//vec4 q3 = quat_mult(q1,q2);
	//vec4 res = axis_angle_from_quat(q3);
//	q3 = quat_from_axis_angle(vec3(res.x,res.y,res.z),res.w);
	
	//cameraPosition = rotate_vertex_position(cameraPosition,normalize(vec3(1,0,0.0f)),u_time*10);
	//ray = rotate_vertex_position(ray,normalize(vec3(1,0,0.0f)),u_time*10);
	if (!(v_rotation.x == 0.0 && v_rotation.y == 0.0 && v_rotation.z == 0.0)){
	    ray = rotate_vertex_position(ray,normalize(v_rotation),length(v_rotation));
	    cameraPosition = rotate_vertex_position(cameraPosition,normalize(v_rotation),length(v_rotation));

	    //ray = rotate_vertex_position(ray,normalize(vec3(res.x,res.y,res.z)),res.w);
	    //cameraPosition = rotate_vertex_position(cameraPosition,normalize(vec3(res.x,res.y,res.z)),res.w);
	    //ray = rotate_vertex_position2(ray,q3);
	    //cameraPosition = rotate_vertex_position2(cameraPosition,q3);
		
	}


    float distance = intersectSphere(cameraPosition, ray, spherePosition, sphereRadius);
    
    if (distance > 0.0) {
        vec3 pointOfIntersection = cameraPosition + ray * distance;
        vec3 normal = normalize(pointOfIntersection - spherePosition);
        
        float u = 0.5 + atan(normal.z, normal.x) / (3.1415926 * 2.0);
        float v = 0.5 - asin(normal.y) / -3.1415926;
        gl_FragColor = texture2D(u_texture, vec2(fract(u), fract(v)));
    }
    else {
        gl_FragColor = vec4(0.0, 0.0, 0.0, 0.0);
    }

}


