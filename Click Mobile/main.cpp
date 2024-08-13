#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;
void delay(int milliseconds)
{
    long pause;
    clock_t now,then;
    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
    now = clock();
}
void intro()
{
    cout<<setw(50)<<"    //////////////////////"<<endl;
    cout<<setw(49)<<"   //     Welcome      //"<<endl;
    cout<<setw(48)<<"  //       To         //"<<endl;
    cout<<setw(47)<<" //   CLICK MOBILE   //"<<endl;
    cout<<setw(46)<<"//////////////////////"<<endl;
}
class build
{
public:
    string OS;
    string ver;
    string UI;
    float length,width,thickness,weight;
    string sim;
    string colors;
    build():OS("unknown"),UI("unknown"),length(0.0),width(0.0),thickness(0.0),weight(0.0),sim("unknown"),colors("unknown")
    {}
    ~build()
    {}
};
class processor
{
public:
    string CPU;
    string chipset;
    string GPU;
    processor():CPU("unknown"),chipset("unknown"),GPU("unknown")
    {}
    ~processor()
    {}
};
class display
{
public:
    string technology;
    float d_size;
    string resolution;
    string protection;
    string extra_features;
    display():technology("unknown"),d_size(0.0),resolution("unknown"),protection("unknown"),extra_features("unknown")
    {}
    ~display()
    {}
};
class memory
{
public:
    string built_in;
    string ram;
    string card;
    memory():built_in("unknown"),ram("0"),card("unknown")
    {}
    ~memory()
    {}
};
class camera
{
public:
    string main;
    string features;
    string c_front;
    camera():main("unknown"),features("unknown"),c_front("unknown")
    {}
    ~camera()
    {}
};
class connectivity
{
public:
    string wlan;
    string bluetooth;
    string gps;
    string usb;
    string nfc;
    string data;
    connectivity():wlan("unknown"),bluetooth("unknown"),gps("unknown"),usb("unknown"),nfc("unknown"),data("unknown")
    {}
    ~connectivity()
    {}
};
class features
{
public:
    string sensors;
    string audio;
    string browser;
    string messaging;
    string games;
    string torch;
    string extra_feature;
    features():sensors("unknown"),audio("unknown"),browser("unknown"),messaging("unknown"),games("unknown"),torch("unknown"),extra_feature("unknown")
    {}
    ~features()
    {}
};
class cell_func
{
    string fmassage;
    string fnumber;
public:
    cell_func():fmassage("No massage"),fnumber("xxxx-xxxxxxx")
    {}
    void call()
    {
        char e;
        cout<<"Enter the number on which you want to make a call to : ";
        cin.ignore(1,'\n');
        getline(cin,fnumber);
        system("CLS");
        cout<<fnumber<<endl;
        cout<<"Calling...."<<endl;
        delay(5000);
        system("CLS");
        cout<<"Call has been connected"<<endl;
        delay(2000);
        system("CLS");
        cout<<"Call is ongoing"<<endl;
        cout<<"press E to end the call : ";
        cin.ignore(0,'\n');
        cin>>e;
        while(e=='e'&&e=='E')
        {
            cout<<"press E to end the call : ";
            cin.ignore(0,'\n');
            cin>>e;
        }
        system("CLS");
        cout<<"call has been ended"<<endl;
    }
    void massage()
    {
        cout<<"Enter the number on which you want to send massage to : ";
        cin.ignore(1,'\n');
        getline(cin,fnumber);
        cout<<fnumber<<endl;
        cout<<"Write a massage you want to send"<<endl;
        cout<<"massage : ";
        cin.ignore(0,'\n');
        getline(cin,fmassage);
        cout<<"The massage is being send....."<<endl;
        delay(2000);
        system("CLS");
        cout<<"The massage has been sent successfully to : "<<fnumber<<endl;
    }
    ~cell_func()
    {}
};
class cellphone:public cell_func
{
    string brand;
    string m_name;
    build b;
    string frequency;
    processor p;
    display d;
    memory m;
    camera c;
    connectivity con;
    features fea;
    string b_capacity;
    double price_in_pkr,price_in_usd;
    string ratings;
public:
    cellphone():brand("unknown"),m_name("umknown"),frequency("unknown"),b_capacity("unknown"),price_in_pkr(0.0),price_in_usd(0.0),ratings("unknown")
    {}
    void cell_set_data(string brand,string m_name,string OS,string ver,string UI,float length,float width,float thickness,float weight,string sim,string colors,string frequency,string CPU,string chipset,string GPU,string technology,float d_size,string resolution,string protection,string d_extra_features,string built_in,string ram,string card,string main,string features,string c_front,string wlan,string bluetooth,string gps,string usb,string nfc,string data,string sensors,string audio,string browser,string messaging,string games,string torch,string f_extra_feature,string b_capacity,float price_in_pkr,float price_in_usd,string ratings)
    {
        this->brand=brand;
        this->m_name=m_name;
        b.OS=OS;
        b.ver=ver;
        b.UI=UI;
        b.length=length;
        b.width=width;
        b.thickness=thickness;
        b.weight=weight;
        b.sim=sim;
        b.colors=colors;
        this->frequency=frequency;
        p.CPU=CPU;
        p.chipset=chipset;
        p.GPU=GPU;
        d.technology=technology;
        d.d_size=d_size;
        d.resolution=resolution;
        d.protection=protection;
        d.extra_features=d_extra_features;
        m.built_in=built_in;
        m.ram=ram;
        m.card=card;
        c.main=main;
        c.features=features;
        c.c_front=c_front;
        con.wlan=wlan;
        con.bluetooth=bluetooth;
        con.gps=gps;
        con.usb=usb;
        con.nfc=nfc;
        con.data=data;
        fea.sensors=sensors;
        fea.audio=audio;
        fea.browser=browser;
        fea.messaging=messaging;
        fea.games=games;
        fea.torch=torch;
        fea.extra_feature=f_extra_feature;
        this->b_capacity=b_capacity;
        this->price_in_pkr=price_in_pkr;
        this->price_in_usd=price_in_usd;
        this->ratings=ratings;
    }
    void nameprice_show_data()
    {
        cout<<m_name<<endl;
        cout<<"  "<<price_in_pkr<<" PKR"<<endl;
        cout<<"  "<<price_in_usd<<" $"<<endl;
    }
    void spec_show_data()
    {
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<m_name<<" detailed specifications"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Build"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"OS : "<<b.OS<<" "<<b.ver<<endl;
        cout<<"UI : "<<b.UI<<endl;
        cout<<"Dimensions : "<<b.length<<" x "<<b.width<<" x "<<b.thickness<<" mm"<<endl;
        cout<<"Weight : "<<b.weight<<" g"<<endl;
        cout<<"Sim : "<<b.sim<<endl;
        cout<<"Colors : "<<b.colors<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Frequency"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Frequency bands : "<<frequency<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Processor"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"CPU : "<<p.CPU<<endl;
        cout<<"Chipset : "<<p.chipset<<endl;
        cout<<"GPU : "<<p.GPU<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Display"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Technology : "<<d.technology<<endl;
        cout<<"Size : "<<d.d_size<<" Inches"<<endl;
        cout<<"Resolution : "<<d.resolution<<" Pixels"<<endl;
        cout<<"Protection : "<<d.protection<<endl;
        cout<<"Extra features : "<<d.extra_features<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Memory"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Built-in : "<<m.built_in<<endl;
        cout<<"RAM : "<<m.ram<<endl;
        cout<<"Card : "<<m.card<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Camera"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Main : "<<c.main<<endl;
        cout<<"Features : "<<c.features<<endl;
        cout<<"Front : "<<c.c_front<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Connectivity"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"WLAN : "<<con.wlan<<endl;
        cout<<"Bluetooth : "<<con.bluetooth<<endl;
        cout<<"GPS : "<<con.gps<<endl;
        cout<<"USB : "<<con.usb<<endl;
        cout<<"NFC : "<<con.nfc<<endl;
        cout<<"Data : "<<con.data<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Features"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Sensors : "<<fea.sensors<<endl;
        cout<<"Audio : "<<fea.audio<<endl;
        cout<<"Browser : "<<fea.browser<<endl;
        cout<<"Messaging : "<<fea.messaging<<endl;
        cout<<"Games : "<<fea.games<<endl;
        cout<<"Torch : "<<fea.torch<<endl;
        cout<<"Extra : "<<fea.extra_feature<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Battery"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Capacity : "<<b_capacity<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Price"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Price in PKR: "<<price_in_pkr<<" "<<"Price in USD: $"<<price_in_usd<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Ratings"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Average Ratings is : "<<ratings<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
    }
    ~cellphone()
    {}
    bool nsearch(string x)
    {
        if (x==m_name)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool bsearch(string x)
    {
        if (x==brand)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool osearch(string x)
    {
        if (x==b.OS)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool rsearch(string x)
    {
        if (x==m.ram)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool prsearch(double a, double b)
    {
        if (a<=price_in_pkr&&b>=price_in_pkr)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool pusearch(double a, double b)
    {
        if (a<=price_in_usd&&b>=price_in_usd)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    int c,ycheck=0;
    bool s;
    char select,ge;
    string a,ram,prange,mname,mname2,bname,OSname;
    cellphone cell[100];
    cell[1].cell_set_data("APPLE","IPHONE 13 PRO MAX","IOS","15","N/A",160.8,78.1,7.7,240,"Dual SIM","Graphite, Gold, Silver, Sierra Blue","2G, 3G, 4G, 5G","Hexa-core(2 x 3.22 GHz Avalanche + 4x X.X GHz Blizzard","Apple A15 Bionic (5 nm)","Apple GPU (5-core graphics)","Super Retina XDR OLED Touchscreen, Multitouch",6.7,"1284 x 2778 Pixels (~457 PPI)","Scratch-resistant ceramic glass, oleophobic coating","120Hz, HDR10, Dolby Vision, 1000 nits (HBM), 1200 nits (peak)","128/256/512GB Built-in, 1TB, NVMe ","6","No","Quad Camera: 12 MP, f/1.5, 26mm (wide), dual pixel PDAF, sensor-shift\nOIS + 12 MP, f/2.8, 77mm (telephoto), PDAF, OIS, 3x optical zoom + 2 MP,\nf/1.8, 13mm, (ultrawide), PDAF + TOF 3D LiDAR scanner (depth), dual-LED\ndual-tone flash","(HDR + photo/panorama), Video (4K@24/30/60fps,\n1080p@30/60/120/240fps, 10‑bit HDR, Dolby Vision HDR (up to 60fps),\nProRes, Cinematic mode, stereo sound rec.)","Dual 12 MP, f/2.2, 23mm (wide), 1/3.6 SL 3D, (depth/biometrics\nsensor)@24/25/30/60fps, 1080p@30/60/120fps, gyro-EIS), HDR, Video\n(4K@24/25/30/60fps, 1080p@30/60/120fps, gyro-EIS)","Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, hotspot ","v5.0 with A2DP, LE","Yes + A-GPS support, & GLONASS, GALILEO, QZSS","Lightning, USB 2.0","No","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps, 4G LTE-A, 5G, (EV-DO Rev.A 3.1 Mbps)","Accelerometer, Barometer, Compass, Face ID, Gyro, Proximity ","Lightning to 3.5 mm headphone jack adapter, MP3/WAV/AAX+/AIFF/Apple\nLossless player, MP4/H.264 player, Speaker Phone","Yes","iMessage, SMS (threaded view), MMS, Email, Push Email ","Built-in + Downloadable","Yes","Glass front + Gorilla Glass), Glass back + Gorilla Glass), stainless steel\nframe, Scratch-resistant ceramic glass, oleophobic coating, Wide color\ngamut, True-tone, Siri natural language commands and dictation, Ultra\nWideband (UWB) support ","(Li-ion Non removable), 4352 mAh",367599,1827,"4.5 stars");
    cell[2].cell_set_data("SAMSUNG","SAMSUNG GALAXY A73","ANDROID","12 OS","OneUI 4.1",163.7,76.1,7.6,181,"Hybrid Dual SIM, Dual Standby, (Nano-SIM)","Gray, Mint, White","2G, 3G, 4G, 5G","Octa-core (4 x 2.4 GHz Kryo 670 + 4 x 1.8 GHz Kryo 670)","Qualcomm SM7325 Snapdragon 778G 5G (6 nm)","Adreno 642L","Super AMOLED Plus Capacitive touchscreen, Multitouch",6.7,"1080 x 2400 Pixels (~393 PPI)","Corning Gorilla Glass 5 ","120Hz, 800 nits (HBM)","256GB Built-in","8","microSD Card, (supports up to 1TB)","Quad Camera: 108 MP, f/1.8, (wide), PDAF, OIS + 12 MP, f/2.2, (ultrawide)\n+ 5 MP, f/2.4, (macro) + 5 MP, f/2.4, (depth), LED Flash ","panorama, HDR, Video (4K@30fps, 1080p@30/60fps; gyro-EIS)","32 MP, f/2.2, 26mm (wide), 1/2.8, HDR, Video (4K@30fps, 1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, hotspot ","v5.0 with A2DP, LE","Yes + A-GPS support & Glonass, BDS, GALILEO, BDS","USB Type-C 2.0, USB On-The-Go","Yes","GPRS, EDGE, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable","Accelerometer, gyro, proximity, compass, Fingerprint (under display,\noptical)","Speaker Phone","HTML 5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","IP67 dust/water resistant (up to 1m for 30 mins), Active noise cancellation\nwith dedicated mic, Photo/video editor, Document viewer","(Li-Po Non removable), 5000 mAh",122999,611,"3.7 Stars");
    cell[3].cell_set_data("HUAWEI","HUAWEI NOVA 9","HARMONY","OS 2.0","EMUI 12",160,73.7,7.8,175,"Dual Sim, Dual Standby (Nano-SIM)","Starry Blue, Black, Green, Violet","2G, 3G, 4G, 5G","Octa-core (4 x 2.4 GHz Kryo 670 + 4 x 1.8 GHz Kryo 670)","Qualcomm SM7325 Snapdragon 778G 4G (6 nm) ","Adreno 642L","OLED Capacitive Touchscreen, Multitouch",6.57,"1080 x 2340 Pixels (~392 PPI)","Corning Gorilla Glass","120Hz, HDR10","128GB Built-in, UFS","8","No","Quad Camera: 50 MP, f/1.9, 23mm (wide), PDAF + 8 MP, f/2.2, (ultrawide)\n+ 2 MP, f/2.4, (depth) + 2 MP, f/2.4, (macro), LED Flash ","Geo-tagging, touch focus, face detection, HDR, panorama, Video (4K,\n1080p, 720p@960fps, gyro-EIS) ","32 MP, f/2.0, (wide), HDR, Video (4K@30fps, 1080p@30fps,\n720p@240fps, gyro-EIS)","Wi-Fi 802.11 a/b/g/n/a/6, dual-band, Wi-Fi Direct, hotspot","v5.2 with A2DP, LE","Yes + A-GPS. Up to tri-band: GLONASS (3), BDS (3), GALILEO (2), QZSS\n(2), NavIC","USB Type-C 2.0, USB On-The-Go ","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable","Accelerometer, Compass, Fingerprint (under display, optical), Gyro,\nProximity","MP4/H.264 player, MP3/eAAC+/WAV/Flac player, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable ","Yes","No Google Play Services, Photo/video editor, Document editor ","(Li-Po Non removable), 4300 mAh",107999,537,"4.4 stars");
    cell[4].cell_set_data("XIAOMI","XIAOMI REDMI 10C","ANDROID","11 OS","MIUI 13",169.6,76.6,8.3,190,"Dual Sim, Dual Standby (Nano-SIM)","Black, Blue, Green","2G, 3G, 4G","Octa-core (4 x 2.4 GHz Kryo 265 Gold + 4 x 1.9 GHz Kryo 265 Silver)","Qualcomm SM6225 Snapdragon 680 4G (6 nm)","Adreno 610","IPS LCD Capacitive Touchscreen, 16M Colors, Multitouch",6.71,"720 x 1650 Pixels (~268 PPI)","Corning Gorilla Glass","N/A","128GB Built-in, UFS 2.2","4","microSDXC (dedicated slot)","Dual Camera: 50 MP, f/1.8, 26mm (wide), PDAF + 2 MP, f/2.4, (depth), LED\nFlash","Phase detection, geo-tagging, touch focus, face detection, HDR, panorama,\nVideo (1080p@30fps)","5 MP, f/2.2, Video (1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot","v5.0 with A2DP, LE","Yes + A-GPS support & Glonass, BDS","USB Type-C 2.0, USB On-The-Go","Yes","GPRS, EDGE, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A","Accelerometer, Fingerprint (rear mounted), Proximity","3.5mm Audio Jack, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","built-in + downloadable","Yes","NFC (market dependent), Photo/video editor, Document viewer","(Li-Po Non removable), 5000 mAh",32999,164,"2.8 stars");
    cell[5].cell_set_data("OPPO","OPPO F21 PRO 5G","ANDROID","12 OS","ColorOS 12.1",159.9,73.2,7.5,173,"Dual Sim, Dual Standby (Nano-SIM)","Rainbow Spectrum, Cosmic Black","2G, 3G, 4G, 5G","Octa-core (2 x 2.2 GHz Kryo 660 Gold + 6 x 1.7 GHz Kryo 660 Silver)","Qualcomm SM6375 Snapdragon 695 5G (6 nm)","Adreno 619","AMOLED Capacitive Touchscreen, Multitouch",6.43,"1080 x 2400 Pixels (~409 PPI)","Schott Xensation glass","430 nits (typ), 600 nits (HBM)","128GB Built-in, UFS 2.2","8","microSDXC","Triple Camera: 64 MP, f/1.7, 26mm (wide), 1/2.0, PDAF + 2 MP, f/3.3,\n(microscope) + 2 MP, f/2.4, (depth), LED Flash","Phase detection, Geo-tagging, touch focus, face detection, HDR,\npanorama, Video (1080p@30fps, gyro-EIS)","16 MP, f/2.4, 27mm (wide), HDR, panorama, Video (1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot","v5.1 with A2DP, LE, apt-X HD","Yes + A-GPS support, & GLONASS, GALILEO, QZSS","USB Type-C 2.0, USB On-The-Go","No","GPRS, Edge, 3G (HSPA 42.2/11.5 Mbps), 4G LTE-A, 5G capable","Accelerometer, Compass, Fingerprint (under display, optical), Gyro,\nProximity","3.5mm Audio Jack, MP4/H.264/FLAC player, MP3/eAAC+/WAV player,\nSpeaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","RGB ring lights around the cameras (notifications, charging progress),\nIPX4, dust and water resistant, Document editor, Photo/video editor","(Li-Po Non removable), 4500 mAh",84999,422,"4.4 stars");
    cell[6].cell_set_data("APPLE","IPHONE 13 PRO","IOS","15, upgradable to iOS 15.3","N/A",146.7,71.5,7.7,204,"Dual Sim, Dual Standby or eSIM (Nano-SIM)","Graphite, Gold, Silver, Sierra Blue","2G, 3G, 4G, 5G","Hexa-core (2 x 3.22 GHz Avalanche + 4 x X.X GHz Blizzard)","Apple A15 Bionic (5 nm)","Apple GPU (5-core graphics)","Super Retina XDR OLED Capacitive Touchscreen, Multitouch",6.1,"1170 x 2532 Pixels (~457 PPI)","Scratch-resistant ceramic glass, oleophobic coating","120Hz, HDR10, Dolby Vision, 1000 nits (HBM), 1200 nits (peak), Scratch-\nresistant ceramic glass, oleophobic coating, Wide color gamut, True-tone","128/256/512GB Built-in, 1TB, NVMe","6","No","Quad Camera: 12 MP, f/1.5, 26mm (wide), 1.9Âµm, dual pixel PDAF,\nsensor-shift OIS + 12 MP, f/2.8, 77mm (telephoto), PDAF, OIS, 3x optical\nzoom + 12 MP, f/1.8, 13mm, (ultrawide), PDAF + TOF 3D LiDAR scanner\n(depth), dual-LED dual-tone flash","HDR (photo/panorama), Video (4K@24/30/60fps,\n1080p@30/60/120/240fps, 10â€‘bit HDR, Dolby Vision HDR (up to 60fps),\nProRes, Cinematic mode, stereo sound rec.)","Dual 12 MP, f/2.2, 23mm (wide), 1/3.6 SL 3D, (depth/biometrics sensor),\nHDR, Video (4K@24/25/30/60fps, 1080p@30/60/120fps, gyro-EIS)","Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, hotspot","v5.0 with A2DP, LE","Yes + A-GPS support, & GLONASS, GALILEO, QZSS","Lightning, USB 2.0","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable, EV-DO Rev.A 3.1 Mbps","Accelerometer, Barometer, Compass, Face ID, Gyro, Proximity","Lightning to 3.5 mm headphone jack adapter, MP3/WAV/AAX+/AIFF/Apple Lossless player, MP4/H.264 player, Speaker Phone","Yes","iMessage, SMS (threaded view), MMS, Email, Push Email","Built-in + Downloadable ","Yes","Glass front + Gorilla Glass), Glass back + Gorilla Glass), Stainless steel\nframe, IP68 dust/water resistant (up to 6m for 30 mins) Apple Pay (Visa,\nMasterCard, AMEX certified), Siri natural language commands and\ndictation, Ultra Wideband (UWB) suppor","(Li-ion Non removable), 3095 mAh0",355999,1769,"3.5 stars");
    cell[7].cell_set_data("APPLE","IPHONE 12 PRO MAX","IOS","14.1","N/A",160.8,78.1,7.4,228,"Dual Sim, Dual Standby (Nano-SIM)","Silver, Graphite, Gold, Pacific Blue","2G, 3G, 4G, 5G","Hexa-core (2 x 3.1 GHz Firestorm + 4 x 1.8 GHz Icestorm)","Apple A14 Bionic (5 nm)","Apple GPU (4-core graphics)","Super Retina XDR OLED Capacitive Touchscreen, 16M Colors, Multitouch",6.7,"1284 x 2778 Pixels (~457 PPI)","Scratch-resistant glass, oleophobic coating","HDR10, 800 nits (typ), 1200 nits (peak), Dolby Vision, Wide color gamut,\nTrue-tone","128/256/512GB Built-in","6","No","Quad Camera: 12 MP, f/1.6, 26mm (wide), dual pixel PDAF, Sensor-shift\nOIS + 12 MP, f/2.2, 65mm (telephoto), 1/3.4, PDAF, OIS, 2.5x optical zoom\n+ 12 MP, f/2.4, 13mm (ultrawide), 1/3.6 + TOF 3D LiDAR scanner (depth),\nQuad-LED dual-tone flash","Geo-tagging, touch focus, face/smile detection, HDR (photo/panorama),\nVideo (4K@24/30/60fps, 1080p@30/60/120/240fps, HDR, Dolby Vision\nHDR (up to 60fps), stereo sound rec.)","Dual 12 MP, f/2.2, 23mm (wide), 1/3.6 + SL 3D, (depth/biometrics sensor),\nHDR, Video (4K@24/30/60fps, 1080p@30/60/120fps, gyro-EIS)","Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, hotspot","v5.0 with A2DP, LE","Yes + A-GPS support, & GLONASS, GALILEO, QZSS","Lightning, USB 2.0","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable, EV-DO\nRev.A 3.1 Mbps)","Accelerometer, Barometer, Compass, Face ID, Gyro, Proximity","Lightning to 3.5 mm headphone jack adapter, MP3/WAV/AAX+/AIFF/Apple\nLossless player, MP4/H.264 player, Speaker Phone","HTML5 (Safari)","iMessage, SMS (threaded view), MMS, Email, Push Email","Built-in + Downloadable","Yes","Glass front + Gorilla Glass), Glass back + Gorilla Glass), Stainless steel\nframe, IP68 dust/water resistant (up to 6m for 30 mins), Apple Pay (Visa,\nMasterCard, AMEX certified), Siri natural language commands and\ndictation","(Li-ion Non removable), 3687 mAh",235999,1759,"4.2 stars");
    cell[8].cell_set_data("APPLE","IPHONE 12 PRO","IOS","14.1","N/A",146.7,71.5,7.4,189,"Dual Sim, Dual Standby or eSIM (Nano-SIM)","Silver, Graphite, Gold, Pacific Blue","2G, 3G, 4G, 5G","Hexa-core (2 x 3.1 GHz Firestorm + 4 x 1.8 GHz Icestorm)","Apple A14 Bionic (5 nm)","Apple GPU (4-core graphics)","Super Retina XDR OLED Capacitive Touchscreen, 16M Colors, Multitouch",6.1,"1170 x 2532 Pixels (~457 PPI)","Scratch-resistant glass, oleophobic coating","HDR10, 800 nits (typ), 1200 nits (peak), Dolby Vision, Wide color gamut,\nTrue-tone","128/256/512GB Built-in","6","No","Quad Camera: 12 MP, f/1.6, 26mm (wide), dual pixel PDAF, OIS + 12 MP,\nf/2.0, 52mm (telephoto), 1/3.4, PDAF, OIS, 2x optical zoom + 12 MP, f/2.4,\n13mm (ultrawide), 1/3.6 + TOF 3D LiDAR scanner (depth, dual-LED dual\n-tone flash","phase detection, OIS, 2x optical zoom, Geo-tagging, , touch focus,\nface/smile detection, HDR (photo/panorama), Video (4K@24/30/60fps,\n1080p@30/60/120/240fps, 10â€‘bit HDR, Dolby Vision HDR (up to 60fps),\nstereo sound rec.)","Dual 12 MP, f/2.2, 23mm (wide), 1/3.6 + SL 3D, (depth/biometrics sensor),\nHDR, Video (4K@24/30/60fps, 1080p@30/60/120fps, gyro-EIS)","Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, hotspot","v5.0 with A2DP, LE","Yes + A-GPS support, & GLONASS, GALILEO, QZSS","Lightning, USB 2.0","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable, EV-DO\nRev.A 3.1 Mbps","Accelerometer, Compass, Face ID, Gyro, Proximity","Lightning to 3.5 mm headphone jack adapter, MP3/WAV/AAX+/AIFF/Apple\nLossless player, MP4/H.264 player, Speaker Phone","HTML5 (Safari)","iMessage, SMS (threaded view), MMS, Email, Push Email","Built-in + Downloadable","Yes","Glass front + Gorilla Glass), Glass back + Gorilla Glass), Stainless steel\nframe, IP68 dust/water resistant (up to 6m for 30 mins) Apple Pay (Visa,\nMasterCard, AMEX certified), Siri natural language commands and\ndictation, Voice memo/command/dial, Document editor","(Li-ion Non removable), 2815 mAh",220899,1646," 4.3 stars");
    cell[9].cell_set_data("APPLE","IPHONE 11 PRO MAX","IOS","13","N/A",157.5,77.4,8.1,226,"Dual Sim, Dual Standby (Nano-SIM)","Space Gray, Silver, Gold, Midnight Green","2G, 3G, 4G","N/A","Apple A13 (7 nm+)","N/A","Super Retina XDR OLED Capacitive Touchscreen, 16M Colors, Multitouch",6.5,"1242 x 2688 Pixels (~456 PPI)","Scratch-resistant glass","oleophobic coating, 800 nits, Dolby Vision, HDR10, Wide color, gamut,\nTrue-tone, 120 Hz touch-sensing","64/256/512GB Built-in","4","No","Triple Camera: 12 MP, f/1.8, 26mm (wide), 1/2.55, PDAF, OIS + 12 MP,\nf/2.4, 52mm (telephoto), 1/3.4, PDAF, OIS, 2x optical zoom + 12 MP,\n(ultrawide), Quad-LED dual-tone flash","phase detection, OIS, 2x optical zoom, Geo-tagging, touch focus,\nface/smile detection, HDR (photo/panorama), Video (2160p@24/30/60fps,\n1080p@30/60/120/240fps)","Dual 12 MP + TOF 3D camera, HDR, Video (2160p@24/30/60fps,\n1080p@30/60/120fps, gyro-EIS)","Wi-Fi 802.11 a/b/g/n/ac, dual-band, hotspot","v5.0 with A2DP, LE","Yes + A-GPS support, & GLONASS, GALILEO, QZSS","2.0, proprietary reversible connector","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G (LTE-A 1.6 Gbps DL, EV-DO Rev.A 3.1 Mbps)","Accelerometer, Face ID, Barometer, Compass, Gyro, Proximity","Lightning to 3.5 mm headphone jack adapter, MP3/WAV/AAX+/AIFF/Apple Lossless player, MP4/H.264 player, Speaker Phone","HTML5 (Safari)","iMessage, SMS (threaded view), MMS, Email, Push Email","Built-in + Downloadable","Yes","Dolby Atmos, Dolby Digital Plus, Apple pencil support, Frost Glass design,\nActive noise cancellation with dedicated mic, Siri natural language\ncommands and dictation, IP68 dust/water resistant (up to 4m for 30 mins),\nApple Pay (Visa, MasterCard, AMEX certified), Google Maps,\nAudio/video/photo editor, Apple Pay + Visa, MasterCard, AMEX certified),\nVoice memo/command/dial, Document editor","(Li-ion Non removable), 3500 mAh",226599,1689,"4 stars");
    cell[10].cell_set_data("SAMSUNG","SAMSUNG GALAXY S22 ULTRA","ANDROID","12 OS","OneUI 4.1",163.3,77.9,8.9,228,"Dual SIM, dual stand-by (2 Nano-SIMs + eSIM)","Phantom Black, White, Burgundy, Green, Graphite, Red, Sky Blue","2G, 3G, 4G, 5G","Octa-core (1 x 3.00 GHz Cortex-X2 + 3 x 2.40 GHz Cortex-A710 + 4 x 1.70\nGHz Cortex-A510)","Qualcomm SM8450 Snapdragon 8 Gen 1 (4 nm)","Adreno 730","Dynamic AMOLED 2X Capacitive Touchscreen, 1B Colors, Multitouch",6.8,"1440 x 3080 Pixels (~500 PPI)","Corning Gorilla Glass Victus+","120Hz, HDR10+, 1750 nits (peak), Always-on display","128/256/512GB Built-in, UFS 3.1","12","No","Quad Camera: 108 MP, f/1.8, 24mm (wide), 1/1.33, Dual Pixel PDAF,\nLaser AF, OIS + 10 MP, f/4.9, 230mm (periscope telephoto), 1/3.52, dual\npixel PDAF, OIS, 10x optical zoom + 10 MP, f/2.4, 70mm (telephoto),\n1/3.52, dual pixel PDAF, OIS, 3x optical zoom + 12 MP, f/2.2, 13mm,\n(ultrawide), 1/2.55, dual pixel PDAF, Super Steady video, LED Flash","Geo-tagging, touch focus, face/smile detection, Auto HDR, panorama,\nVideo (8K@24fps, 4K@30/60fps, 1080p@30/60/240fps, 720p@960fps,\nHDR10+, stereo sound rec., gyro-EIS)","40 MP, f/2.2, 26mm (wide), 1/2.82, PDAF, Dual video call, Auto-HDR,\nVideo (4K@30/60fps, 1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac/6e, dual-band, Wi-Fi Direct, hotspot","v5.2 with A2DP, LE","Yes + A-GPS support & Glonass, BDS, GALILEO","USB Type-C 3.2, USB On-The-Go","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A (CA), 5G capable","Accelerometer, Barometer, Compass, Fingerprint (under display,\nultrasonic), Gyro, Proximity","32-bit/384kHz audio Tuned by AKG, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Glass front + Gorilla Glass Victus), Glass back + Gorilla Glass Victus),\naluminum frame, IP68 dust/water resistant (up to 1.5m for 30 mins), Armour\naluminum frame with tougher drop and scratch resistance (advertised),\nStylus, 2.8ms latency (Bluetooth integration, accelerometer, gyro),\nSamsung DeX, Samsung Wireless DeX (desktop experience support),\nBixby natural language commands and dictation Samsung Pay (Visa,\nMasterCard certified), Ultra Wideband (UWB) support","(Li-ion Non removable), 5000 mAh",314999,1565,"4.4 stars");
    cell[11].cell_set_data("SAMSUNG","SAMSUNG GALAXY S21 ULTRA","ANDROID","11 OS","One UI 3.5",165.1,75.6,8.9,227,"Dual Sim, Dual Standby, eSIM (Nano-SIM)","Phantom Black, Phantom Silver","2G, 3G, 4G, 5G","Octa-core (1 x 2.9 GHz Cortex-X1 + 3 x 2.80 GHz Cortex-A78 + 4 x 2.2\nGHz Cortex-A55)","Exynos 2100 (5 nm)","Mali-G78 MP14","Dynamic AMOLED 2X Capacitive Touchscreen, 16M Colors, Multitouch",6.8,"1440 x 3200 Pixels (~516 PPI)","Corning Gorilla Glass Victus","Always-on display, 120Hz, HDR10+, 1500 nits (peak)","256GB Built-in","12","No","Quad Camera: 108 MP (2nd gen), f/1.8, 26mm (wide), 1/1.33, PDAF,\nLaser AF, OIS + 10 MP, f/4.9, 240mm (periscope telephoto), 1/3.24, dual\npixel PDAF, OIS, 10x optical zoom + 10 MP, f/2.4, 70mm (telephoto),\n1/3.24, dual pixel PDAF, OIS, 3x optical zoom + 12 MP, f/2.2, 13mm\n(ultrawide), 1/2.55, dual pixel PDAF, Super Steady video, LED Flash","Geo-tagging, touch focus, face/smile detection, Auto HDR, panorama,\nVideo (8K@24fps, 4K@30/60fps, 1080p@30/60/240fps, 720p@960fps,\nHDR10+, stereo sound rec., Gyro-EIS)","40 MP, f/2.2, 26mm (wide), 1/2.8","Wi-Fi 802.11 a/b/g/n/ac/6e, dual-band, Wi-Fi Direct, hotspot","v5.2 with A2DP, LE","Yes + A-GPS support & Glonass, BDS, GALILEO","USB Type-C 3.2, USB On-The-Go","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A (CA), 5G capable","Accelerometer, Barometer, Compass, Fingerprint (under display,\nultrasonic), Gyro, Proximity","32-bit/384kHz audio, MP4/DivX/XviD/WMV/H.265 player,\nMP3/WAV/WMA/eAAC+/FLAC player, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Glass front + Gorilla Glass Victus), Glass back (Gorilla Glass), Aluminum\nframe, Active noise cancellation with dedicated mic, Samsung Pay (Visa,\nMasterCard certified), IP68 dust/water resistant (up to 1.5m for 30 mins),\nStylus support, Samsung DeX, Samsung Wireless DeX (desktop\nexperience support), ANT+, Bixby natural language commands and\ndictation, Document viewer, Photo/video editor","(Li-Po Non removable), 5000 mAh",242999,1811,"4.3 stars");
    cell[12].cell_set_data("SAMSUNG","SAMSUNG GALAXY A23","ANDROID","12 OS","OneUI 4.1",164.5,76.9,8.4,195,"Dual Sim, Dual Standby (Nano-SIM)","Black, White, Peach, Blue","2G, 3G, 4G","Octa-core (4 x 2.4 GHz Kryo 265 Gold+ 4 x 1.9 GHz Kryo 265 Silver)","Qualcomm SM6225 Snapdragon 680 4G (6 nm)","Adreno 610","PLS LCD Capacitive Touchscreen, 16M Colors, Multitouch",6.6,"1080 x 2408 Pixels (~400 PPI)","Corning Gorilla Glass 5","60Hz","128GB Built-in","6","microSD Card, (supports up to 1TB)","Quad Camera: 50 MP, f/1.8, (wide), PDAF + 5 MP, f/2.2, (ultrawide), 1/5 +\n2 MP, f/2.4, (macro) + 2 MP, f/2.4, (depth), LED Flash","Geo-tagging, touch focus, face detection, panorama, HDR, Video\n(1080p@30fps)","8 MP, f/2.2, (wide), Video (1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot","v5.1 with A2DP, LE","Yes + A-GPS support & Glonass, BDS","USB Type-C 2.0","No","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A","Accelerometer, Compass, FingerPrint (side mounted), Gyro, Virtual\nproximity sensing","3.5mm Audio Jack, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","NFC (region dependent), Glass front + Gorilla Glass 5), Plastic frame, Plastic back, Photo/video editor, Document viewer","(Li-Po Non removable), 5000 mAh",51999,258,"4.4 stars");
    cell[13].cell_set_data("SAMSUNG","SAMSUNG GALAXY M52","ANDROID","11 OS","One UI 3.1",164.2,76.4,7.4,173,"Hybrid Dual SIM, Dual Standby, (Nano-SIM)","Icy Blue, Blazing Black, White","2G, 3G, 4G, 5G","Octa-core (4 x 2.4 GHz Kryo 670 + 4 x 1.8 GHz Kryo 670)","Qualcomm Snapdragon 778G 5G (6 nm)","Adreno 642L","Super AMOLED Plus Capacitive Touchscreen, Multitouch",6.7,"1080 x 2400 Pixels (~393 PPI)","N/A","120Hz","128GB Built-in","8","microSDXC (uses shared SIM slot)","Triple Camera: 64 MP, f/1.8, 26mm (wide), PDAF + 12 MP, f/2.2,\n(ultrawide) + 5 MP, f/2.4, (macro), LED Flash","touch focus, face detection, panorama, HDR, Video (4K@30fps,\n1080p@30fps)","	32 MP, f/2.5, (wide), Video (1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, hotspot","v5.0 with A2DP, LE","Yes + A-GPS support & Glonass, BDS, GALILEO, BDS, QZSS","USB Type-C 2.0, USB On-The-Go","No","GPRS, EDGE, 3G (HSPA 42.2/5.76 Mbps), 4G LTE, 5G capable","Accelerometer, Compass, Fingerprint (side mounted), Gyro, Virtual\nproximity sensing","3.5mm Audio Jack, MP3/WAV/WMA/eAAC+/FLAC player,\nMP4/WMV/H.265 player, Speaker Phone","HTML5","	SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Active noise cancellation with dedicated mic, ANT+ support, Photo/video\neditor, Document viewer","(Li-ion Non removable), 5000 mAh",82999,412,"2 stars");
    cell[14].cell_set_data("HUAWEI","HUAWEI P30 PRO","ANDROID","9.0 (Pie)","EMUI 8.1",158,73.4,8.4,192,"Dual Sim, Dual Standby (Nano-SIM)","Aurora, Amber Sunrise, Breathing Crystal, Black","2G, 3G, 4G","Octa-core (2 x 2.6 GHz Cortex-A76 + 2 x 1.92 GHz Cortex-A76 + 4 x 1.8\nGHz Cortex-A55)","HiSilicon Kirin 980 (7 nm)","Mali-G76 MP10","OLED Capacitive Touchscreen, 16M Colors, Multitouch",6.5,"1080 x 2340 Pixels (~398 PPI)","N/A","DCI-P3","256GB Built-in","8","Nano Memory Card, (supports upto 256GB) (Uses SIM 2)","Quad Camera: 40 MP, f/1.6, 27mm (wide), 1/1.7, PDAF, OIS + 20 MP,\nf/2.2, 16mm (ultrawide), 1/2.7, PDAF + Periscope 8 MP, f/3.4, 125mm\n(telephoto), 1/4, 5x optical zoom, OIS, PDAF + TOF 3D camera, dual-LED\ndual-tone flash","OIS, Leica optics, phase detection, Geo-tagging, touch focus, face\ndetection, HDR, panorama, Video (2160p@30fps, 1080p@60fps,\n1080p@30fps (gyro-EIS), 720p@960fps)","32 MP, f/2.0, (wide), HDR, Video (1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac, dual-band, DLNA, Wi-Fi Direct, hotspot","v5.0 with A2DP, LE","Yes + dual-band A-GPS with GLONASS, BDS, GALILEO, QZSS","3.1, Type-C 1.0 reversible connector","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G (LTE-A Cat21 1400/200\nMbps)","Face ID, Accelerometer, Compass, Fingerprint (under display), Gyro,\nProximity","32-bit/384kHz audio, 3.5mm Audio Jack, MP3/eAAC+/WAV/Flac player,\nXviD/MP4/H.265 player, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Dolby Atmos sound, IP68 dust/water resistant (up to 2m for 30 mins),\nActive noise cancellation with dedicated mic, Document viewer,\nPhoto/video editor","(Li-Po Non removable), 4200 mAh",157600,783,"4.4 stars");
    cell[15].cell_set_data("HUAWEI","HUAWEI Y7A","ANDROID","10.0 OS","EMUI 10.1",165.7,76.9,9.3,206,"Hybrid Dual SIM, Dual Standby, (Nano-SIM)","Midnight Black, Brush Gold, Crush Green","2G, 3G, 4G","Octa-core (4 x 2.0 GHz Cortex-A73 + 4 x 1.7 GHz Cortex-A53)","Kirin 710A (14 nm)","Mali-G51 MP4","IPS LCD Capacitive Touchscreen, 16M Colors, Multitouch",6.7,"1080 x 2400 Pixels (~395 PPI)","N/A","N/A","64/128GB Built-in","4","microSD Card, (supports up to 1TB) (uses shared SIM slot)","Quad Camera: 48 MP, f/1.8, 26mm (wide), 1/2.0, PDAF + 8 MP, f/2.4,\n(ultrawide) + 2 MP, f/2.4, (macro) + 2 MP, f/2.4, (depth), LED Flash","Geo-tagging, touch focus, face detection, HDR, panorama, Video\n(4K@30fps, 1080p@30fps)","8 MP, f/2.0, HDR, Video (1080p@30fps)","Wi-Fi 802.11 b/g/n, Wi-Fi Direct, hotspot","v5.1 with A2DP, LE ","Yes + A-GPS support & Glonass","2.0, Type-C 1.0 reversible connector, USB On-The-Go","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A","Accelerometer, Compass, Fingerprint (rear mounted), Proximity","3.5mm Audio Jack, MP4/H.264 player, MP3/eAAC+/WAV/Flac player,\nSpeaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Active noise cancellation with dedicated mic, Photo/video editor, Document\neditor","(Li-Po Non removable), 5000 mAh",35999,179,"3.2 stars");
    cell[16].cell_set_data("HUAWEI","HUAWEI NOVA 8 PRO","ANDROID","10.0 OS","EMUI 11",163.3,74.1,7.9,184,"Dual Sim, Dual Standby (Nano-SIM)","Black, Blue, Green, White","2G, 3G, 4G, 5G","Octa-core (1 x 2.58 GHz Cortex-A76 & 3x2.40 GHz Cortex-A76 + 4 x 1.84\nGHz Cortex-A55)","Kirin 985 5G (7 nm)","Mali-G77 (8-core)","OLED Capacitive Touchscreen, 1B Colors, Multitouch",6.7,"1080 x 2676 Pixels (~429 PPI)","Corning Gorilla Glass","HDR10, 120Hz","128/256GB Built-in, UFS","8","No","Quad Camera: 64 MP, f/1.8, 26mm (wide), PDAF + 8 MP, f/2.4, 17mm\n(ultrawide) + 2 MP, f/2.4, (depth) + 2 MP, f/2.4, (macro), LED Flash","Geo-tagging, touch focus, face detection, HDR, panorama, Video (4K,\n1080p, 720p@960fps, gyro-EIS)","Dual 16 MP, f/2.0, (wide) + 32 MP, f/2.4, (ultrawide)","Wi-Fi 802.11 a/b/g/n/a/6, dual-band, Wi-Fi Direct, hotspot","v5.2 with A2DP, LE","Yes + dual-band A-GPS with GLONASS, BDS, GALILEO, QZSS, NavIC","USB Type-C 2.0, USB On-The-Go","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable","Accelerometer, Compass, Fingerprint (under display, optical), Gyro, Proximity","MP4/H.264 player, MP3/eAAC+/WAV/Flac player, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Active noise cancellation with dedicated mic, Photo/video editor,\nDocument editor","(Li-Po Non removable), 4000 mAh",97999,730,"3.5 stars");
    cell[17].cell_set_data("HUAWEI","HUAWEI MATE 20 PRO","ANDROID","9.0 (Pie)","EMUI 9.0",157.8,72.3,8.6,189,"Dual Sim, Dual Standby (Nano-SIM)","Emerald Green, Midnight Blue, Twilight, Pink Gold, Black","2G, 3G, 4G","Octa-core (2 x 2.6 GHz Cortex-A76 + 2 x 1.92 GHz Cortex-A76 + 4 x 1.8\nGHz Cortex-A55)","HiSilicon Kirin 980 (7 nm)","Mali-G76 MP10","AMOLED Capacitive Touchscreen, 16M Colors, Multitouch",6.4,"1440 x 3120 Pixels (~538 PPI)","Corning Gorilla Glass (unspecified version)","HDR10 compliant","128GB Built-in","6","nanoSD Card, (supports up to 256GB) (uses SIM 2 slot)","Tripple Camera 40 MP, (f/1.8, 27mm (wide), 1/1.7, OIS, PDAF/Laser AF) +\n20 MP (B/W, f/2.2, 16mm (wide), 1/2.7, OIS, PDAF/Laser AF) + 8 MP,\n(f/2.4, 80mm (telephoto), 1/4, 3x optical zoom, OIS, PDAF/Laser AF), dual-LED\ndual-tone flash","Leica optics, Geo-tagging, Phase detection, Panorama, HDR, Video\n(2160p@30fps, 1080p@60fps, 1080p@30fps (gyro-EIS), 720p@960fps)","24 MP, f/2.0, 26mm (wide), HDR, Video (1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot","v5.0 with A2DP, LE","Yes + A-GPS support & Glonass, BDS, GALILEO","3.1, Type-C 1.0 reversible connector; USB Host","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G (LTE-A (3CA) Cat18 1200/150 Mbps)","Accelerometer, Barometer, Compass, Face ID, Fingerprint (Under display), Gyro, Proximity","Type-C to 3.5 mm headphone jack adapter, 32-bit/384kHz audio, MP3/eAAC+/WAV/Flac player, DivX/XviD/MP4/H.265/WMV player, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Front/back glass + aluminum frame, IP68 dust/water resistant (up to 2m for\n30 mins), Active noise cancellation with dedicated mic, Document viewer,\nPhoto/video editor","4200 mAh (Li-Po, Non removable)",119999,894,"4.8 stars");
    cell[18].cell_set_data("XIAOMI","XIAOMI 12 PRO","ANDROID","12 OS","MIU1 13",163.6,74.6,8.2,204,"Dual Sim, Dual Standby (Nano-SIM)","Gray, Blue, Purple, Green","2G, 3G, 4G, 5G","Octa-core (1 x 3.00 GHz Cortex-X2 + 3 x 2.50 GHz Cortex-A710 + 4 x 1.80\nGHz Cortex-A510)","Qualcomm SM8450 Snapdragon 8 Gen1 (4 nm)","Adreno 730","LTPO AMOLED Capacitive Touchscreen, 1B Colors, Multitouch",6.7,"1440 x 3200 Pixels (~521 PPI)","Corning Gorilla Glass Victus","120Hz, Dolby Vision, HDR10+, 1000 nits (HBM), 1500 nits (peak)","128/256GB Built-in, UFS 3.1","12","No","Triple Camera: 50 MP, f/1.9, 24mm (wide), 1/1.28, Dual Pixel PDAF, OIS +\n50 MP, f/1.9, 48mm (telephoto), PDAF, 2x optical zoom + 50 MP, f/2.2,\n(ultrawide), dual-LED dual-tone flash","Geo-tagging, touch focus, face detection, HDR, panorama, Video\n(8K@24fps (HDR), 4K@30/60fps (HDR10+), 1080p@30/120/240/960fps,\n720p@1920fps, gyro-EIS)","32 MP, f/2.5, 26mm (wide), HDR, panorama, Video (1080p@30/60fps,\n720p@120fps, HDR10+)","Wi-Fi 802.11 a/b/g/n/ac/6 or 6e (market dependent), dual-band, Wi-Fi\nDirect, hotspot","v5.2 with A2DP, LE","A-GPS support Up to tri-band: GLONASS (1), BDS (3), GALILEO (2),\nQZSS (2), NavIC","USB Type-C 2.0, USB On-The-Go","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbp), LTE-A, 5G capable","Accelerometer, Barometer, color spectrum, Compass, Fingerprint (under\ndisplay, optical),, Gyro, Virtual proximity sensing","24-bit/192kHz audio, Tuned by Harman Kardon, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","NFC, (market dependent), Photo/video editor, Document viewer","(Li-Po Non removable), 4600 mAh",208999,1039,"1 stars");
    cell[19].cell_set_data("XIAOMI","XIAOMI 12","ANDROID","12 OS","MIU1 13",152.7,69.9,8.2,179,"Dual Sim, Dual Standby (Nano-SIM)","Gray, Blue, Purple, Green","2G, 3G, 4G, 5G","Octa-core (1 x 3.00 GHz Cortex-X2 + 3 x 2.50 GHz Cortex-A710 + 4 x 1.80\nGHz Cortex-A510)","Qualcomm SM8450 Snapdragon 8 Gen 1 (4 nm)","Adreno 730","AMOLED Capacitive Touchscreen, 1B, Multitouch",6.28,"1080 x 2400 Pixels (~419 PPI)","Corning Gorilla Glass Victus","120Hz, Dolby Vision, HDR10+, 1100 nits (peak)","128/256GB Built-inUFS 3.1","8","No","Triple Camera: 50 MP, f/1.9, 26mm (wide), 1/1.56, PDAF, OIS + 13 MP,\nf/2.4, 12mm, (ultrawide), 1/3.06 + 5 MP, f/2.4, 50mm (telephoto macro),\nAF, dual-LED dual-tone flash","Geo-tagging, touch focus, face detection, HDR, panorama, Video\n(8K@24fps (HDR), 4K@30/60fps (HDR10+), 1080p@30/120/240/960fps,\n720p@1920fps, gyro-EIS)","32 MP, f/2.5, 26mm (wide), HDR, panorama, Video (1080p@30/60fps,\n720p@120fps, HDR)","Wi-Fi 802.11 a/b/g/n/ac/6 or 6e (market dependent), dual-band, Wi-Fi\nDirect, hotspot ","v5.2 with A2DP, LE","A-GPS support Up to tri-band: GLONASS (1), BDS (3), GALILEO (2),\nQZSS (2), NavIC","USB Type-C 2.0, USB On-The-Go","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbp), LTE-A, 5G capable","Accelerometer, Compass, Fingerprint (under display, optical), Gyro,\nProximity, Virtual proximity sensing","24-bit/192kHz audio, Tuned by Harman Kardon, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","NFC (market dependent), Glass front + Gorilla Glass Victus), Glass back (Gorilla Glass 5), Photo/video editor, Document viewer","(Li-Po Non removable), 4500 mAh",179999,894,"4.2 stars");
    cell[20].cell_set_data("XIAOMI","XIAOMI MI NOTE 10 PRO","ANDROID","9.0 (Pie)","MIUI 11",157.8,74.2,9.7,200,"Dual Sim, Dual Standby (Nano-SIM)","Aurora Green, Glacier White, Midnight Black","2G, 3G, 4G","Octa-core (2 x 2.2 GHz Kryo 470 Gold + 6 x 1.8 GHz Kryo 470 Silver)","Qualcomm SDM730 Snapdragon 730G (8 nm)","Adreno 618","Super AMOLED Capacitive Touchscreen, 16M Colors, Multitouch",6.47,"1080 x 2340 Pixels (~398 PPI)","Corning Gorilla Glass 5","600 nits max brightness, DCI-P3, HDR10","256GB Built-in","8","No","Five Camera: 108 MP (8P lens), f/1.7, 25mm (wide), 1/1.33, PDAF, Laser\nAF, OIS + 12 MP, f/2.0, 50mm (telephoto), 1/2.55, Dual Pixel PDAF, Laser\nAF, 2x optical zoom + 5 MP (upscaled to 8MP), f/2.0, (telephoto), PDAF,\nLaser AF, OIS, 5x optical zoom + 20 MP, f/2.2, 13mm (ultrawide), 1/2.8,\nLaser AF + 2 MP, f/2.4, 1/5, (dedicated macro camera), Quad-LED dual-\ntone flash","Geo-tagging, touch focus, face detection, HDR, panorama, Video\n(2160p@30fps, 1080p@30/60/120/240fps, 720p@960fps)","32 MP, f/2.0, HDR, Video (1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot","v5.0 with A2DP, LE, apt-X HD","Yes + A-GPS support & Glonass, BDS, GALILEO","2.0, Type-C 1.0 reversible connector","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbp), 4G (LTE-A (3CA) Cat15 800/150\nMbps)","Accelerometer, Compass, Fingerprint (under display, optical), Gyro,\nProximity","3.5mm Audio Jack, MP4/DivX/XviD/WMV/H.265 player,\nMP3/WAV/eAAC+/FLAC player, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Front/back glass + Gorilla Glass 5), aluminum frame, Active noise\ncancellation with dedicated mic, Photo/video editor, Document viewer","(Li-Po Non removable), 5260 mAh",89999,671,"4.6 stars");
    cell[21].cell_set_data("XIAOMI","XIAOMI MI 11","ANDROID","11 OS","MIUI 12",164.3,74.6,8.1,196,"Dual Sim, Dual Standby (Nano-SIM)","Horizon Blue, Cloud White, Midnight Gray, Special Edition Blue, Gold,\nViolet","2G, 3G, 4G, 5G","Octa-core (1 x 2.84 GHz Kryo 680 + 3 x 2.42 GHz Kryo 680 + 4 x 1.80\nGHz Kryo 680","Qualcomm SM8350 Snapdragon 888 (5 nm)","Adreno 660","AMOLED Capacitive Touchscreen, 1B Colors, Multitouch",6.81,"1440 x 3200 Pixels (~515 PPI)","Corning Gorilla Glass Victus","120Hz, HDR10+, 1500 nits (peak)","256GB Built-in","8","No","Triple Camera: 108 MP, f/1.9, 26mm (wide), 1/1.33, PDAF, OIS + 13 MP,\nf/2.4, (ultrawide) + 5 MP, f/2.4, (macro), dual-LED dual-tone flash ","Geo-tagging, touch focus, face detection, HDR, panorama, Video\n(8K@24/30fps, 4K@30/60fps, 1080p@30/60/120/240fps; gyro-EIS,\nHDR10+)","20 MP, f/2.2, 27mm (wide), 1/3.4, HDR, panorama, Video\n(1080p@30/60fps, 720p@120fps)","Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, hotspot","v5.2 with A2DP, LE, apt-X HD, aptX Adaptive","Yes + dual-band A-GPS with GLONASS, BDS, GALILEO, QZSS, NavIC","USB Type-C 2.0, USB On-The-Go","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbp), LTE-A, 5G capable","Accelerometer, Compass, Fingerprint (under display, optical), Gyro, Proximity","24-bit/192kHz audio, MP4/DivX/XviD/WMV/H.265 player, MP3/WAV/eAAC+/FLAC player, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Glass front + Gorilla Glass Victus), Glass back + Gorilla Glass) or eco\nleather-back, Aluminum frame, Active noise cancellation with dedicated\nmic, Photo/video editor, Document viewer","(Li-Po Non removable), 4600 mAh",144999,720,"3.8 stars");
    cell[22].cell_set_data("OPPO","OPPO RENO 6 PRO","ANDROID","11 OS","ColorOS 11.3",160,73.1,7.6,177,"Dual Sim, Dual Standby (Nano-SIM)","Stellar Black, Aurora","2G, 3G, 4G, 5G","Octa-core (1 x 3.0 GHz Cortex-A78 + 3 x 2.6 GHz Cortex-A78 + 4 x 2.0\nGHz Cortex-A55)","MediaTek MT6893 Dimensity 1200 5G (6 nm)","Mali-G77 MC9","AMOLED Capacitive Touchscreen, Multitouch",6.6,"1080 x 2400 Pixels (~402 PPI)","N/A","90Hz, HDR10+, 500 nits (typ), 1100 nits (peak)","256GB Built-in","12","No","Quad Camera: 64 MP, f/1.7, 26mm (wide), 1/1.73, PDAF + 8 MP, f/2.2,\n(ultrawide), 1/4.0 + 2 MP, f/2.4, (macro) + 2 MP, f/2.4, (depth), LED Flash","Phase detection, Geo-tagging, touch focus, face detection, HDR,\npanorama, Video (4K@30fps, 1080p@30/60/120fps; gyro-EIS, HDR)","32 MP, f/2.4, 26mm (wide), 1/2.8, Panorama, Video (1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac/6, dual-band, Wi-Fi Direct, hotspot","v5.1 with A2DP, LE, apt-X HD0","Yes + dual-band A-GPS support, GLONASS, BDS, GALILEO, QZSS","USB Type-C 3.1, USB On-The-Go","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A, 5G capable","Accelerometer, Compass, Fingerprint (under display, optical), Gyro,\nProximity","Speaker Phone, MP4/H.264/FLAC player, MP3/eAAC+/WAV player, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Aluminum frame, Active noise cancellation with dedicated mic, Document editor, Photo/video editor","(Li-Po Non removable) 4500 mAh",109999,547,"3.9 stars");
    cell[23].cell_set_data("OPPO","OPPO RENO 6","ANDROID","11 OS","ColorOS 11.1",159.1,73.3,7.8,173,"Dual Sim, Dual Standby (Nano-SIM)","Aurora, Stellar Black","2G, 3G, 4G","2.3Ghz Octa Core","Qualcomm SM7125 Snapdragon 720G (8 nm)","Adreno 618","AMOLED Capacitive Touchscreen, 16M Colors, Multitouch",6.4,"1080 x 2400 Pixels (~409 PPI)","N/A","90Hz, 430 nits (typ), 600 nits (HBM), 750 nits (peak)","128GB Built-in","8","microSDXC","Quad Camera: 64 MP, f/1.7, 26mm (wide), 1/2.0, PDAF + 8 MP, f/2.2,\n(ultrawide), 1/4.0 + 2 MP, f/2.4, (macro) + 2 MP, f/2.4, (depth), dual-LED\ndual-tone flash","Phase detection, Geo-tagging, touch focus, face detection, HDR,\npanorama, Video (4K@30fps, 1080p@30/60/120fps)","44 MP, f/2.4, 24mm (wide), Video (1080p@30/120fps, gyro-EIS)","Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot","v5.1 with A2DP, LE, apt-X HD","Yes + A-GPS support & Glonass, BDS, GALILEO, QZSS","USB Type-C 2.0, USB On-The-Go","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A ","Accelerometer, Compass, Fingerprint (under display, optical), Gyro,\nProximity","3.5mm Audio Jack, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Active noise cancellation with dedicated mic, Document editor, Photo/video\neditor","(Li-Po Non removable), 4310 mAh",64999,323,"4.2 stars");
    cell[24].cell_set_data("OPPO","OPPO A96","ANDROID","11 OS","ColorOS 11.1",164.4,75.7,8.4,191,"Dual Sim, Dual Standby (Nano-SIM)","Stary Black, sunset Blue","2G, 3G, 4G","Octa-core (4 x 2.4 GHz Kryo 265 Gold + 4 x 1.9 GHz Kryo 265 Silver)","Qualcomm SM6225 Snapdragon 680 4G (6 nm)","Adreno 610","IPS LCD Capacitive Touchscreen, 16M Colors, Multitouch",6.59,"1080 x 2412 Pixels (~401 PPI)","N/A","90Hz, 480 nits (typ), 600 nits (HBM)","128GB Built-in","8","microSDXC","Dual 50 MP, f/1.8 + 2 MP, f/1.2, LED Flash","Night, Expert, Panorama, Portrait, Time-lapse, Sticker, Slow-motion, Text\nscanner, Extra HD, Google lens, Video (1080P@30 fps (default) and\n720P@30 fps)","16 MP, f/2.0, (wide), HDR, Video (1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot","v5.1 with A2DP, LE","Yes + A-GPS support, & GLONASS, BDS, GALILEO, QZSS","USB Type-C 2.0, USB On-The-Go","Yes","GPRS, Edge, 3G (HSPA 42.2/5.76 Mbps), 4G LTE-A","Accelerometer, Compass, Fingerprint (side mounted), Gyro, Proximity","3.5mm Audio Jack, MP4/H.264/FLAC player, MP3/eAAC+/WAV player, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","IP5X dustproof, IPX4 waterproof, Active noise cancellation with dedicated\nmic, Document editor, Photo/video editor","(Li-Po Non removable), 5000 mAh",49999,248,"3.8 stars");
    cell[25].cell_set_data("OPPO","OPPO A16","ANDROID","11 OS","ColorOS 11.1",163.8,75.6,8.4,190,"Dual Sim, Dual Standby (Nano-SIM)","Pearl Blue, Space Silver, Crystal Black","2G, 3G, 4G","Octa-core (4 x 2.3 GHz Cortex-A53 + 4 x 1.8 GHz Cortex-A53)","MediaTek Helio G35 (12 nm)","PowerVR GE8320","IPS LCD Capacitive Touchscreen, 16M Colors, Multitouch",6.52,"720 x 1600 Pixels (~269 PPI)","N/A","480 nits (typ)","32GB Built-in","3","microSD Card, (supports up to 256GB) (dedicated slot)","Triple Camera: 13 MP, f/2.2, 26mm (wide), 1/3.06, PDAF + 2 MP, f/2.4,\n(macro) + 2 MP, f/2.4, (depth), LED Flash","Geo-tagging, touch focus, face detection, panorama, HDR, Video\n(1080p@30fps)","8 MP, f/2.0, (wide), HDR, Video (1080p@30fps)","Wi-Fi 802.11 a/b/g/n/ac, dual-band, Wi-Fi Direct, hotspot","v5.0 with A2DP, LE","Yes + A-GPS support & Glonass, BDS, GALILEO, QZSS ","USB Type-C 2.0, USB On-The-Go","No","GPRS, EDGE, 3G (HSPA 42.2/5.76 Mbps), 4G (LTE-A (2CA) Cat6 400/50\nMbps)","Accelerometer, Compass, Fingerprint (side mounted), Proximity","3.5mm Audio Jack, MP3/WAV/WMA/eAAC+/FLAC player,\nMP4/WMV/H.265 player, Speaker Phone","HTML5","SMS(threaded view), MMS, Email, Push Mail, IM","Built-in + Downloadable","Yes","Active noise cancellation with dedicated mic, Photo/video editor,\nDocument viewer","(Li-Po Non removable), 5000 mAh",23999,119,"3.8 stars");
    intro();
    cin.get();
    s1:
    cout<<"---------------------------"<<endl;
    cout<<"Latest Mobiles"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"1.";
    cell[1].nameprice_show_data();
    cout<<"---------------------------"<<endl;
    cout<<"2.";
    cell[2].nameprice_show_data();
    cout<<"---------------------------"<<endl;
    cout<<"3.";
    cell[3].nameprice_show_data();
    cout<<"---------------------------"<<endl;
    cout<<"4.";
    cell[4].nameprice_show_data();
    cout<<"---------------------------"<<endl;
    cout<<"5.";
    cell[5].nameprice_show_data();
    cout<<"---------------------------"<<endl;
    cout<<"If you want to see the specifications of the latest mobiles you can select from 1 to 5 "<<endl;
    cout<<"Press 6 to proceed to the menu"<<endl;
    cout<<"Press 7 to exit the program"<<endl;
    cin>>select;
    while(select<'1'||select>'7')
    {
        cout<<"Invalid input!!\nYou can select from 1 to 7 options\nRe-enter input : ";
        cin>>select;
    }
    system("CLS");
    switch (select)
    {
    case '1':
        {
            cell[1].spec_show_data();
            cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                    cin>>ge;
                    while(ge<'0'||c>'1')
                    {
                        cout<<"You can only choose 1 or 0 : ";
                        cin>>ge;
                    }
                    system("CLS");
                    if(ge=='1')
                    {
                        goto s1;
                    }
                    else
                    {
                        break;
                    }
            break;
        }
    case '2':
        {
            cell[2].spec_show_data();
            cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                    cin>>ge;
                    while(ge<'0'||ge>'1')
                    {
                        cout<<"You can only choose 1 or 0 : ";
                        cin>>ge;
                    }
                    system("CLS");
                    if(ge=='1')
                    {
                        goto s1;
                    }
                    else
                    {
                        break;
                    }
            break;
        }
    case '3':
        {
            cell[3].spec_show_data();
            cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                    cin>>ge;
                    while(ge<'0'||ge>'1')
                    {
                        cout<<"You can only choose 1 or 0 : ";
                        cin>>ge;
                    }
                    system("CLS");
                    if(ge=='1')
                    {
                        goto s1;
                    }
                    else
                    {
                        break;
                    }
            break;
        }
    case '4':
        {
            cell[4].spec_show_data();
                    cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                    cin>>ge;
                    while(ge<'0'||ge>'1')
                    {
                        cout<<"You can only choose 1 or 0 : ";
                        cin>>ge;
                    }
                    system("CLS");
                    if(ge=='1')
                    {
                        goto s1;
                    }
                    else
                    {
                        break;
                    }
            break;
        }
    case '5':
        {
            cell[5].spec_show_data();
                    cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                    cin>>ge;
                    while(ge<'0'||ge>'1')
                    {
                        cout<<"You can only choose 1 or 0 : ";
                        cin>>ge;
                    }
                    system("CLS");
                    if(ge=='1')
                    {
                        goto s1;
                    }
                    else
                    {
                        break;
                    }
            break;
        }
    case '6':
        {
            s2:
            cout<<"1.Search Mobile"<<endl;
            cout<<"2.Compare two Mobile"<<endl;
            cout<<"3.Test Mobile Virtually"<<endl;
            cout<<"4.Contact Us"<<endl;
            cout<<"5.Go back"<<endl;
            cout<<"6.Exit"<<endl;
            cout<<"Choose from 1 to 6 options : ";
            cin>>select;
            while(select<'1'||select>'6')
            {
                cout<<"Invalid input!!\nYou can select from 1 to 6 options\nRe-enter input : ";
                cin>>select;
            }
            system("CLS");
            switch(select)
            {
            case '1':
                {
                    s3:
                    cout<<"1.Search by name"<<endl;
                    cout<<"2.Search by brand"<<endl;
                    cout<<"3.Search by price"<<endl;
                    cout<<"4.Search by Ram"<<endl;
                    cout<<"5.Search by OS"<<endl;
                    cout<<"6.Go Back"<<endl;
                    cout<<"7.Exit"<<endl;
                    cout<<"Choose from 1 to 7 options : ";
                    cin>>select;
                    while(select<'1'||select>'7')
                    {
                    cout<<"Invalid input!!\nYou can select from 1 to 7 options\nRe-enter input : ";
                    cin>>select;
                    }
                    system("CLS");
                    switch(select)
                    {
                    case '1':
                        {
                            ycheck=0;
                            cout<<"Enter the name of the mobile you want to search : ";
                            cin.ignore(1,'\n');
                            getline(cin,mname);
                            transform(mname.begin(), mname.end(),mname.begin(), ::toupper);
                            for(int i=1;i<=25;i++)
                            {
                                s=cell[i].nsearch(mname);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cell[i].spec_show_data();
                                }
                            }
                            if(ycheck==0)
                            {
                                cout<<"Sorry it seems we do not have the mobile you are searching for!! :("<<endl;
                            }
                            cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                            cin>>ge;
                            while(ge<'0'||ge>'1')
                            {
                            cout<<"You can only choose 1 or 0 : ";
                            cin>>ge;
                            }
                            system("CLS");
                            if(ge=='1')
                            {
                                goto s3;
                            }
                            else
                            {
                                break;
                            }
                            break;
                        }
                    case '2':
                        {
                            cout<<"Enter the brand of the mobile you want to search : ";
                            cin.ignore(1,'\n');
                            getline(cin,bname);
                            transform(bname.begin(), bname.end(),bname.begin(), ::toupper);
                            ycheck=0;
                            for(int i=1;i<=25;i++)
                            {
                                s=cell[i].bsearch(bname);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cout<<i<<".";
                                    cell[i].nameprice_show_data();
                                }
                            }
                            if(ycheck==0)
                            {
                                cout<<"Sorry it seems we do not have any mobile of this brand!! :("<<endl;
                                goto bjump;
                            }
                            cout<<"Do you want to see the specifications of any one of the mobiles? (Y/N) : ";
                            cin.ignore(0,'\n');
                            getline(cin,a);
                            while(a!="y"&&a!="Y"&&a!="Yes"&&a!="yes"&&a!="n"&&a!="N"&&a!="No"&&a!="no")
                            {
                                cout<<"You can only enter Y or N : ";
                                cin.ignore(0,'\n');
                                getline(cin,a);
                            }
                            if (a=="y"||a=="Y"||a=="Yes"||a=="yes")
                            {
                                cout<<"Enter the number of mobile of which you want to see the specifications of : ";
                                cin>>c;
                                cell[c].spec_show_data();
                            }
                            bjump:
                            cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                            cin>>ge;
                            while(ge<'0'||ge>'1')
                            {
                            cout<<"You can only choose 1 or 0 : ";
                            cin>>ge;
                            }
                            system("CLS");
                            if(ge=='1')
                            {
                                goto s3;
                            }
                            else
                            {
                                break;
                            }
                            break;
                        }
                    case '3':
                        {
                            cout<<"Do yo want to set the price range in\n1.USD\n2.PKR"<<endl;
                            cin>>ge;
                            while(ge<'1'||ge>'2')
                            {
                                cout<<"You can either choose 1 or 2 :";
                                cin>>ge;
                            }
                            if(ge=='1')
                            {
                            cout<<"Choose from these price ranges \n";
                            cout<<"1.100 to 500"<<endl;
                            cout<<"2.500 to 1000"<<endl;
                            cout<<"3.1000 to 2000"<<endl;
                            cin.ignore(1,'\n');
                            getline(cin,prange);
                            while(prange!="1"&&prange!="2"&&prange!="3")
                            {
                            cout<<"You can only choose 1 or 3 : ";
                            cin.ignore(0,'\n');
                            getline(cin,prange);
                            }
                            if(prange=="1")
                            {
                                for(int i=1;i<=25;i++)
                            {
                                s=cell[i].pusearch(100,500);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cout<<i<<".";
                                    cell[i].nameprice_show_data();
                                }
                            }
                            }
                            else if(prange=="2")
                            {
                                for(int i=1;i<=25;i++)
                            {
                                s=cell[i].pusearch(500,1000);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cout<<i<<".";
                                    cell[i].nameprice_show_data();
                                }
                            }
                            }
                            else if(prange=="3")
                            {
                                for(int i=1;i<=25;i++)
                            {
                                s=cell[i].pusearch(1000,2000);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cout<<i<<".";
                                    cell[i].nameprice_show_data();
                                }
                            }
                            }
                            }
                            else
                            {
                            cout<<"Choose from these price ranges \n";
                            cout<<"1.10000 to 50000"<<endl;
                            cout<<"2.50000 to 100000"<<endl;
                            cout<<"3.100000 to 200000"<<endl;
                            cout<<"4.200000 to 300000"<<endl;
                            cout<<"5.300000 to 400000"<<endl;
                            cin.ignore(1,'\n');
                            getline(cin,prange);
                            while(prange!="1"&&prange!="2"&&prange!="3"&&prange!="4"&&prange!="5")
                            {
                            cout<<"You can only choose 1 or 5 : ";
                            cin.ignore(0,'\n');
                            getline(cin,prange);
                            }
                            if(prange=="1")
                            {
                                for(int i=1;i<=25;i++)
                            {
                                s=cell[i].prsearch(10000,50000);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cout<<i<<".";
                                    cell[i].nameprice_show_data();
                                }
                            }
                            }
                            else if(prange=="2")
                            {
                                for(int i=1;i<=25;i++)
                            {
                                s=cell[i].prsearch(50000,100000);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cout<<i<<".";
                                    cell[i].nameprice_show_data();
                                }
                            }
                            }
                            else if(prange=="3")
                            {
                                for(int i=1;i<=25;i++)
                            {
                                s=cell[i].prsearch(100000,200000);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cout<<i<<".";
                                    cell[i].nameprice_show_data();
                                }
                            }
                            }
                            else if(prange=="4")
                            {
                                for(int i=1;i<=25;i++)
                            {
                                s=cell[i].prsearch(200000,300000);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cout<<i<<".";
                                    cell[i].nameprice_show_data();
                                }
                            }
                            }
                            else if(prange=="5")
                            {
                                for(int i=1;i<=25;i++)
                            {
                                s=cell[i].prsearch(300000,400000);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cout<<i<<".";
                                    cell[i].nameprice_show_data();
                                }
                            }
                            }
                            }
                            if(ycheck==0)
                            {
                                cout<<"Sorry it seems we do not have any mobiles in this price range!! :("<<endl;
                                goto pjump;
                            }
                            cout<<"Do you want to see the specifications of any one of the mobiles? (Y/N) : ";
                            cin.ignore(1,'\n');
                            getline(cin,a);
                            while(a!="y"&&a!="Y"&&a!="Yes"&&a!="yes"&&a!="n"&&a!="N"&&a!="No"&&a!="no")
                            {
                                cout<<"You can only enter Y or N : ";
                                cin.ignore(0,'\n');
                                getline(cin,a);
                            }
                            if (a=="y"||a=="Y"||a=="Yes"||a=="yes")
                            {
                                cout<<"Enter the number of mobile of which you want to see the specifications of : ";
                                cin>>c;
                                cell[c].spec_show_data();
                            }
                            pjump:
                            cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                            cin>>ge;
                            while(ge<'0'||ge>'1')
                            {
                            cout<<"You can only choose 1 or 0 : ";
                            cin>>ge;
                            }
                            system("CLS");
                            if(ge=='1')
                            {
                                goto s3;
                            }
                            else
                            {
                                break;
                            }
                            break;
                        }
                    case '4':
                        {
                            cout<<"Enter the size of ram of the mobile you want to search : ";
                            cin.ignore(1,'\n');
                            getline(cin,ram);
                            ycheck=0;
                            for(int i=1;i<=25;i++)
                            {
                                s=cell[i].rsearch(ram);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cout<<i<<".";
                                    cell[i].nameprice_show_data();
                                }
                            }
                            if(ycheck==0)
                            {
                                cout<<"Sorry it seems we do not have any mobile with this size of ram!! :("<<endl;
                                goto rjump;
                            }
                            cout<<"Do you want to see the specifications of any one of the mobiles? (Y/N) : ";
                            cin.ignore(0,'\n');
                            getline(cin,a);
                            while(a!="y"&&a!="Y"&&a!="Yes"&&a!="yes"&&a!="n"&&a!="N"&&a!="No"&&a!="no")
                            {
                                cout<<"You can only enter Y or N : ";
                                cin.ignore(0,'\n');
                                getline(cin,a);
                            }
                            if (a=="y"||a=="Y"||a=="Yes"||a=="yes")
                            {
                                cout<<"Enter the number of mobile of which you want to see the specifications of : ";
                                cin>>c;
                                cell[c].spec_show_data();
                            }
                            rjump:
                            cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                            cin>>ge;
                            while(ge<'0'||ge>'1')
                            {
                            cout<<"You can only choose 1 or 0 : ";
                            cin>>ge;
                            }
                            system("CLS");
                            if(ge=='1')
                            {
                                goto s3;
                            }
                            else
                            {
                                break;
                            }
                            break;
                        }
                    case '5':
                        {
                            cout<<"Enter the OS name of the mobile you want to search : ";
                            cin.ignore(1,'\n');
                            getline(cin,OSname);
                            transform(OSname.begin(), OSname.end(),OSname.begin(), ::toupper);
                            ycheck=0;
                            for(int i=1;i<=25;i++)
                            {
                                s=cell[i].osearch(OSname);
                                if(s==1)
                                {
                                    ycheck=1;
                                    cout<<i<<".";
                                    cell[i].nameprice_show_data();
                                }
                            }
                            if(ycheck==0)
                            {
                                cout<<"Sorry it seems we do not have any mobile with this OS!! :("<<endl;
                                goto osjump;
                            }
                            cout<<"Do you want to see the specifications of any one of the mobiles? (Y/N) : ";
                            cin.ignore(0,'\n');
                            getline(cin,a);
                            while(a!="y"&&a!="Y"&&a!="Yes"&&a!="yes"&&a!="n"&&a!="N"&&a!="No"&&a!="no")
                            {
                                cout<<"You can only enter Y or N : ";
                                cin.ignore(0,'\n');
                                getline(cin,a);
                            }
                            if (a=="y"||a=="Y"||a=="Yes"||a=="yes")
                            {
                                cout<<"Enter the number of mobile of which you want to see the specifications of : ";
                                cin>>c;
                                cell[c].spec_show_data();
                            }
                            osjump:
                            cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                            cin>>ge;
                            while(ge<'0'||ge>'1')
                            {
                            cout<<"You can only choose 1 or 0 : ";
                            cin>>ge;
                            }
                            system("CLS");
                            if(ge=='1')
                            {
                                goto s3;
                            }
                            else
                            {
                                break;
                            }
                            break;
                        }
                    case '6':
                        {
                            goto s2;
                            break;
                        }
                    case '7':
                        {
                            break;
                        }
                    }
                    break;
                }
            case '2':
                {
                    ycheck=0;
                    cout<<"Enter the name of the first mobile you want to compare : ";
                    cin.ignore(1,'\n');
                    getline(cin,mname);
                    transform(mname.begin(), mname.end(),mname.begin(), ::toupper);
                    cout<<"Enter the name of the second mobile you want to compare : ";
                    cin.ignore(0,'\n');
                    getline(cin,mname2);
                    transform(mname2.begin(), mname2.end(),mname2.begin(), ::toupper);
                    for(int i=1;i<=25;i++)
                    {
                        s=cell[i].nsearch(mname);
                        if(s==1)
                        {
                            ycheck=1;
                            cell[i].spec_show_data();
                            cout<<"\n\n\n";
                        }
                    }
                    if(ycheck==0)
                    {
                        cout<<"Sorry it seems we do not have the first mobile that you are trying to compare with the other!! :("<<endl;
                    }
                    ycheck=0;
                    for(int i=1;i<=25;i++)
                    {
                        s=cell[i].nsearch(mname2);
                        if(s==1)
                        {
                            ycheck=1;
                            cell[i].spec_show_data();
                            cout<<"\n\n\n";
                        }
                    }
                    if(ycheck==0)
                    {
                        cout<<"Sorry it seems we do not have the second mobile that you are trying to compare with the other!! :("<<endl;
                    }
                    cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                    cin>>ge;
                    while(ge<'0'||ge>'1')
                    {
                    cout<<"You can only choose 1 or 0 : ";
                    cin>>ge;
                    }
                    system("CLS");
                    if(ge=='1')
                    {
                        goto s2;
                    }
                    else
                    {
                        break;
                    }
                    break;
                }
            case '3':
                {
                    ycheck=0;
                    cout<<"Enter the name of the mobile you want to test virtually : ";
                    cin.ignore(1,'\n');
                    getline(cin,mname);
                    transform(mname.begin(), mname.end(),mname.begin(), ::toupper);
                    for(int i=1;i<=25;i++)
                    {
                        s=cell[i].nsearch(mname);
                        if(s==1)
                        {
                            ycheck=1;
                            cout<<"You can perform these functionalities with this mobile : "<<endl;
                            do
                            {
                                cout<<"1.Call\n2.Massage"<<endl;
                                cin>>ge;
                                while(ge<'1'||ge>'2')
                            {
                            cout<<"You can only choose 1 or 2 : ";
                            cin>>ge;
                            }
                            if(ge=='1')
                            {
                                cell[i].call();
                            }
                            else if(ge=='2')
                            {
                                cell[i].massage();
                            }
                            cout<<"Do you want to perform any other functionality on this mobile? (Y/N) : ";
                            cin.ignore(1,'\n');
                            getline(cin,a);
                            while(a!="y"&&a!="Y"&&a!="Yes"&&a!="yes"&&a!="n"&&a!="N"&&a!="No"&&a!="no")
                            {
                                cout<<"You can only enter Y or N : ";
                                cin.ignore(0,'\n');
                                getline(cin,a);
                            }
                            }
                            while(a=="y"||a=="Y"||a=="Yes"||a=="yes");
                            }
                            else
                            {
                                break;
                            }
                        }
                        if(ycheck==0)
                        {
                            cout<<"Sorry it seem the mobile you are trying to test is not found!! :("<<endl;
                        }
                        cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                        cin>>ge;
                        while(ge<'0'||ge>'1')
                        {
                        cout<<"You can only choose 1 or 0 : ";
                        cin>>ge;
                        }
                        system("CLS");
                        if(ge=='1')
                        {
                            goto s2;
                        }
                        else
                        {
                            break;
                        }
                    break;
                }
            case '4':
                {
                    cout<<"Address: C2, Johar Town, Lahore"<<endl;
                    cout<<"Email: clickmobile@gmail.com"<<endl;
                    cout<<"Phone no.: 0302-4857657"<<endl;
                    cout<<"Press 1 to Go Back\nPress 0 to Exit "<<endl;
                    cin>>ge;
                    while(ge<'0'||ge>'1')
                    {
                        cout<<"You can only choose 1 or 0 : ";
                        cin>>ge;
                    }
                    system("CLS");
                    if(ge=='1')
                    {
                        goto s2;
                    }
                    else
                    {
                        break;
                    }
                    break;
                }
            case '5':
                {
                    goto s1;
                    break;
                }
            case '6':
                {
                    break;
                }
            }
            break;
        }
    case '7':
        {
            break;
        }
    }
    return 0;
}
