void correct_3()
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

c1 = new TCanvas("c1","v2",640,600);

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



c2 = new TCanvas("c2","cent_corcosab2ctotal",640,600);

 for(int i=0;i<n;i++)
{
u= hcent_cosab2ctotal -> GetBinContent(i+2);
v= hcent_v2squaretotal-> GetBinContent(i+2);

eu = hcent_cosab2ctotal -> GetBinError(i+2);
ev = hcent_v2squaretotal-> GetBinError(i+2);

 x2[i] = i + 1.5;
 y2[i] = u/sqrt(TMath::Abs(v));
 ex2[i] = 0;
 ey2[i] = sqrt(((eu/u)*(eu/u)+0.25*(ev/v)*(ev/v)))*TMath::Abs(u)/sqrt(TMath::Abs(v));

}

TGraphErrors *corcosab2ctotal = new TGraphErrors(n,x2,y2,ex2,ey2);

corcosab2ctotal -> SetTitle("total");
corcosab2ctotal -> SetLineColor(kBlack);
corcosab2ctotal -> GetXaxis() ->SetTitle("centrality");
corcosab2ctotal -> GetYaxis() ->SetTitle("cos(a+b-2c)/v2");
corcosab2ctotal -> GetXaxis()->SetTitleSize(0.05);
corcosab2ctotal -> GetYaxis()->SetTitleSize(0.05);
corcosab2ctotal -> Draw();


c3 = new TCanvas("c3","cent_corcosab2cplus",640,600);

 for(int i=0;i<n;i++)
{
u= hcent_cosab2cplus -> GetBinContent(i+2);
v= hcent_v2squareplus-> GetBinContent(i+2);

eu = hcent_cosab2cplus -> GetBinError(i+2);
ev = hcent_v2squareplus-> GetBinError(i+2);

 x2[i] = i + 1.5;
 y2[i] = u/sqrt(TMath::Abs(v));
 ex2[i] = 0;
 ey2[i] = sqrt(((eu/u)*(eu/u)+0.25*(ev/v)*(ev/v)))*TMath::Abs(u)/sqrt(TMath::Abs(v));

}

TGraphErrors *corcosab2cplus = new TGraphErrors(n,x2,y2,ex2,ey2);

corcosab2cplus -> SetTitle("cos(a+b-2c)/v2");
corcosab2cplus -> SetLineColor(kOrange);
corcosab2cplus -> GetXaxis() ->SetTitle("centrality");
corcosab2cplus -> GetYaxis() ->SetTitle("plus");
corcosab2cplus -> GetXaxis()->SetTitleSize(0.05);
corcosab2cplus -> GetYaxis()->SetTitleSize(0.05);
corcosab2cplus -> Draw();

corcosab2cplus -> Draw();



c4 = new TCanvas("c4","cent_corcosab2cminus",640,600);

 for(int i=0;i<n;i++)
{
u= hcent_cosab2cminus -> GetBinContent(i+2);
v= hcent_v2squareminus-> GetBinContent(i+2);

eu = hcent_cosab2cminus -> GetBinError(i+2);
ev = hcent_v2squareminus-> GetBinError(i+2);

 x2[i] = i + 1.5;
 y2[i] = u/sqrt(TMath::Abs(v));
 ex2[i] = 0;
 ey2[i] = sqrt(((eu/u)*(eu/u)+0.25*(ev/v)*(ev/v)))*TMath::Abs(u)/sqrt(TMath::Abs(v));

}

TGraphErrors *corcosab2cminus = new TGraphErrors(n,x2,y2,ex2,ey2);

corcosab2cminus -> SetTitle("minus");
corcosab2cminus -> SetLineColor(kRed);
corcosab2cminus -> GetXaxis() ->SetTitle("centrality");
corcosab2cminus -> GetYaxis() ->SetTitle("cos(a+b-2c)/v2");
corcosab2cminus -> GetXaxis()->SetTitleSize(0.05);
corcosab2cminus -> GetYaxis()->SetTitleSize(0.05);
corcosab2cminus -> Draw();


c5 = new TCanvas("c5","cent_corcosab2csame",640,600);

 for(int i=0;i<n;i++)
{
u= hcent_cosab2csame -> GetBinContent(i+2);
v= hcent_v2squaresame-> GetBinContent(i+2);

eu = hcent_cosab2csame -> GetBinError(i+2);
ev = hcent_v2squaresame-> GetBinError(i+2);

 x2[i] = i + 1.5;
 y2[i] = u/sqrt(TMath::Abs(v));
 ex2[i] = 0;
 ey2[i] = sqrt(((eu/u)*(eu/u)+0.25*(ev/v)*(ev/v)))*TMath::Abs(u)/sqrt(TMath::Abs(v));

}

TGraphErrors *corcosab2csame = new TGraphErrors(n,x2,y2,ex2,ey2);

corcosab2csame -> SetTitle("same");
corcosab2csame -> SetLineColor(kGreen);
corcosab2csame -> GetXaxis() ->SetTitle("centrality");
corcosab2csame -> GetYaxis() ->SetTitle("cos(a+b-2c)/v2");
corcosab2csame -> GetXaxis()->SetTitleSize(0.05);
corcosab2csame -> GetYaxis()->SetTitleSize(0.05);

corcosab2csame -> Draw();

c6 = new TCanvas("c6","cent_corcosab2cdiff",640,600);

 for(int i=0;i<n;i++)
{
u= hcent_cosab2cdiff -> GetBinContent(i+2);
v= hcent_v2squarediff-> GetBinContent(i+2);

eu = hcent_cosab2cdiff -> GetBinError(i+2);
ev = hcent_v2squarediff-> GetBinError(i+2);

 x2[i] = i + 1.5;
 y2[i] = u/sqrt(TMath::Abs(v));
 ex2[i] = 0;
 ey2[i] = sqrt(((eu/u)*(eu/u)+0.25*(ev/v)*(ev/v)))*TMath::Abs(u)/sqrt(TMath::Abs(v));

}

TGraphErrors *corcosab2cdiff = new TGraphErrors(n,x2,y2,ex2,ey2);

corcosab2cdiff -> SetTitle("diff");
corcosab2cdiff -> SetLineColor(kBlue);
corcosab2cdiff -> GetXaxis() ->SetTitle("centrality");
corcosab2cdiff -> GetYaxis() ->SetTitle("cos(a+b-2c)/v2");
corcosab2cdiff -> GetXaxis()->SetTitleSize(0.05);
corcosab2cdiff -> GetYaxis()->SetTitleSize(0.05);

corcosab2cdiff -> Draw();

}
