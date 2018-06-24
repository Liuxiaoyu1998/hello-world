//温度 temperature
/*
1		摄氏度(℃) 
33.8	华氏度(℉)
274.15	开氏度(K)
0.8	列氏度(°Re)
493.47	兰氏度(°R)
*/
units[2] = {1, 33.8, 274.15, 0.8, 493.47};

vector<string> temperature_name;
vector<double> temperature_mul;
//符号
temperature_name.push_back("摄氏度(℃)"); temperature_name.push_back("华氏度(℉)"); temperature_name.push_back("开氏度(K)");
temperature_name.push_back("列氏度(°Re)"); temperature_name.push_back("兰氏度(°R)");

temperature_mul.pushback(1); temperature_mul.pushback(33.8); temperature_mul.pushback(274.15);
temperature_mul.pushback(0.8); temperature_mul.pushback(493.47);


//功率 power
units[0] = {1, 1, 1, 0.0013596, 0.000239, 0.001, 0.001341, 0.7375621, 0.0009478, 0.1019716};

vector<string> power_name;
vector<double> power_mul;
power_name.push_back("w"); power_name.push_back("J/s"); power_name.push_back("N.m/s"); 
power_name.push_back("ps"); power_name.push_back("kcal/s"); power_name.push_back("kw"); 
power_name.push_back("hp"); power_name.push_back("ft·lb/s"); power_name.push_back("Btu/s"); 
power_name.push_back("kg.m/s");

power_mul.push_back(1); power_mul.push_back(1); power_mul.push_back(1); 
power_mul.push_back(0.0013596); power_mul.push_back(0.000239); power_mul.push_back(0.001); 
power_mul.push_back(0.001341); power_mul.push_back(0.7375621); power_mul.push_back(0.0009478); 
power_mul.push_back(0.1019716); 

//压强 pressure 
units[1] = {1, 0.01, 0.01, 0.001, 0.00001, 0.000001, 0.0075006, 0.0002953,
			 0.000145, 0.0000098692, 0.0208854, 0.0000102, 0.1019716};
			
vector<string> pressure_name;
vector<double> pressure_mul;

pressure_name.push_back("pa"); pressure_name.push_back("hpa"); pressure_name.push_back("mbar"); 
pressure_name.push_back("kpa"); pressure_name.push_back("bar"); pressure_name.push_back("MPa"); 
pressure_name.push_back("mmHg"); pressure_name.push_back("inHg"); pressure_name.push_back("psi"); 
pressure_name.push_back("atm"); pressure_name.push_back("psf"); pressure_name.push_back("kgf/cm2"); 
pressure_name.push_back("kgf/m2"); 

pressure_mul.push_back(1); pressure_mul.push_back(0.01); pressure_mul.push_back(0.01); 
pressure_mul.push_back(0.001); pressure_mul.push_back(0.00001); 
pressure_mul.push_back(0.000001); pressure_mul.push_back(0.0075006); 
pressure_mul.push_back(0.0002953); pressure_mul.push_back(0.000145); pressure_mul.push_back(0.0000098692); 
pressure_mul.push_back(0.0208854); pressure_mul.push_back(0.0000102); pressure_mul.push_back(0.1019716); 


//体积 volume
vector<string> volume_name;
vector<double> volume_mul;

volume_name.push_back("m3"); volume_name.push_back("l"); volume_name.push_back("ml"); 
volume_name.push_back("cm3"); volume_name.push_back("dm3"); volume_name.push_back("dl"); 
volume_name.push_back("cl"); volume_name.push_back("hl"); volume_name.push_back("ul"); 
volume_name.push_back("mm3"); volume_name.push_back("cu_in"); volume_name.push_back("cu_yd"); 
volume_name.push_back("cu_ft"); volume_name.push_back("uk_gal"); volume_name.push_back("us_gal"); 
volume_name.push_back("uk_loz"); volume_name.push_back("us_loz"); 

volume_mul.push_back(1); volume_mul.push_back(1000); volume_mul.push_back(1000000); 
volume_mul.push_back(1000000); volume_mul.push_back(1000); volume_mul.push_back(10000); 
volume_mul.push_back(100000); volume_mul.push_back(10); volume_mul.push_back(1000000000); 
volume_mul.push_back(1000000000); volume_mul.push_back(61023.8445022); volume_mul.push_back(1.3079528); 
volume_mul.push_back(35.3147248); volume_mul.push_back(219.9691573); volume_mul.push_back(264.1720524); 
volume_mul.push_back(35198.873636); volume_mul.push_back(34164.6737274); 

//速度 velocity
vector<string> velocity_name;
vector<double> velocity_mul;

velocity_name.push_back("m/s"); velocity_name.push_back("km/h"); velocity_name.push_back("km/s");
velocity_name.push_back("mach"); velocity_name.push_back("in/s"); velocity_name.push_back("c"); 
velocity_name.push_back("mile/h"); 

velocity_mul.push_back(1); velocity_mul.push_back(3.6); velocity_mul.push_back(0.001); 
velocity_mul.push_back(0.0029386); velocity_mul.push_back(39.370079); velocity_mul.push_back(0.0000000033356); 
velocity_mul.push_back(2.236936); 
