void v2()
{

TFile* in_file= new TFile("2_Pion_psi=0.root");

const int n =8;

double x1[n],y1[n],ex1[n],ey1[n];
double u,v,eu,ev;
double x2[n],y2[n],ex2[n],ey2[n];


 for(int i=0;i<n;i++)
{  
v  = hcent_v2squaretotal -> GetBinContent(i+2);
ev = hcent_v2squaretotal -> GetBinError(i+2);

x1[i]  = i+1.5;
y1[i]  = sqrt(v);
ex1[i] = 0;
ey1[i] = 0.5 * ev/y1[i];

}


TGraphErrors *v2_c = new TGraphErrors(n,x1,y1,ex1,ey1);

c11 = new TCanvas("c11","v2",640,600);

v2_c ->SetMarkerColor(kBlue);
v2_c ->SetLineColor(kBlue);
v2_c ->SetMarkerStyle(21);
v2_c ->SetMarkerSize(0.5);

v2_c -> GetYaxis()->SetRangeUser(0.0,0.1);
v2_c -> GetXaxis()->SetRangeUser(0,10);
v2_c -> SetTitle("elliptic flow");
v2_c -> GetXaxis() -> SetTitle("Centrility");
v2_c -> GetYaxis() -> SetTitle("v2");
v2_c -> Draw("ALP");
v2_c ->GetXaxis()->SetTitleSize(0.05);
v2_c ->GetYaxis()->SetTitleSize(0.05);

}
