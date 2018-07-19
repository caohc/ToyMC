void flow2_cosab2p()
{
TFile* in_file= new TFile("8_Eta3_psi=ran.root");

c1 = new TCanvas("c1","hv1square_cosab2pall",400,360);
hv1square_cosab2ptotal->Rebin(50);
hv1square_cosab2pplus ->Rebin(50);
hv1square_cosab2pminus ->Rebin(50);
hv1square_cosab2psame ->Rebin(50);
hv1square_cosab2pdiff ->Rebin(50);



hv1square_cosab2ptotal->SetLineColor(kBlack);
hv1square_cosab2ptotal->Draw();
hv1square_cosab2ptotal->GetXaxis()->SetTitle("v1square");
hv1square_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hv1square_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hv1square_cosab2pplus->SetLineColor(kOrange);
hv1square_cosab2pplus->Draw("same");
hv1square_cosab2pminus->SetLineColor(kRed);
hv1square_cosab2pminus->Draw("same");
hv1square_cosab2psame->SetLineColor(kGreen);
hv1square_cosab2psame->Draw("same");
hv1square_cosab2pdiff->SetLineColor(kBlue);
hv1square_cosab2pdiff->Draw("same");

c1->SaveAs("./graph/flow2_ab2p/hv1square_cosab2pall.gif");


c2 = new TCanvas("c2","hv1square_cosab2total",400,360);
hv1square_cosab2ptotal->SetLineColor(kBlack);
hv1square_cosab2ptotal->Draw();
hv1square_cosab2ptotal->GetXaxis()->SetTitle("v1square");
hv1square_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hv1square_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c2->SaveAs("./graph/flow2_ab2p/hv1square_cosab2ptotal.gif");



c3 = new TCanvas("c3","hv1square_cosab2plus",400,360);
hv1square_cosab2pplus->SetLineColor(kOrange);
hv1square_cosab2pplus->Draw();
hv1square_cosab2pplus->GetXaxis()->SetTitle("v1square");
hv1square_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hv1square_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c3->SaveAs("./graph/flow2_ab2p/hv1square_cosab2pplus.gif");

c4 = new TCanvas("c4","hv1square_cosab2minus",400,360);
hv1square_cosab2pminus->SetLineColor(kRed);
hv1square_cosab2pminus->Draw();
hv1square_cosab2pminus->GetXaxis()->SetTitle("v1square");
hv1square_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hv1square_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c4->SaveAs("./graph/flow2_ab2p/hv1square_cosab2pminus.gif");

c5 = new TCanvas("c5","hv1square_cosab2same",400,360);
hv1square_cosab2psame->SetLineColor(kGreen);
hv1square_cosab2psame->Draw();
hv1square_cosab2psame->GetXaxis()->SetTitle("v1square");
hv1square_cosab2psame->GetYaxis()->SetTitle("cosab2psame");
hv1square_cosab2psame->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2psame->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2psame->GetYaxis()->SetTitleSize(0.05);
c5->SaveAs("./graph/flow2_ab2p/hv1square_cosab2psame.gif");

c6 = new TCanvas("c6","hv1square_cosab2diff",400,360);
hv1square_cosab2pdiff->SetLineColor(kBlue);
hv1square_cosab2pdiff->Draw();
hv1square_cosab2pdiff->GetXaxis()->SetTitle("v1square");
hv1square_cosab2pdiff->GetYaxis()->SetTitle("cosab2pdiff");
hv1square_cosab2pdiff->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2pdiff->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2pdiff->GetYaxis()->SetTitleSize(0.05);
c6->SaveAs("./graph/flow2_ab2p/hv1square_cosab2pdiff.gif");




c7 = new TCanvas("c7","hallv1square_cosab2pall",400,360);
hallv1square_cosab2ptotal->Rebin(50);
hallv1square_cosab2pplus ->Rebin(50);
hallv1square_cosab2pminus->Rebin(50);
hallv1square_cosab2psame ->Rebin(50);
hallv1square_cosab2pdiff ->Rebin(50);

hallv1square_cosab2ptotal->SetLineColor(kBlack);
hallv1square_cosab2ptotal->Draw();
hallv1square_cosab2ptotal->GetXaxis()->SetTitle("v1square");
hallv1square_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hallv1square_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hallv1square_cosab2pplus->SetLineColor(kOrange);
hallv1square_cosab2pplus->Draw("same");
hallv1square_cosab2pminus->SetLineColor(kRed);
hallv1square_cosab2pminus->Draw("same");

c7->SaveAs("./graph/flow2_ab2p/hallv1square_cosab2pall.gif");


c8 = new TCanvas("c8","hallv1square_cosab2total",400,360);
hallv1square_cosab2ptotal->SetLineColor(kBlack);
hallv1square_cosab2ptotal->Draw();
hallv1square_cosab2ptotal->GetXaxis()->SetTitle("v1square");
hallv1square_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hallv1square_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c8->SaveAs("./graph/flow2_ab2p/hallv1square_cosab2ptotal.gif");



c9 = new TCanvas("c9","hallv1square_cosab2plus",400,360);
hallv1square_cosab2pplus->SetLineColor(kOrange);
hallv1square_cosab2pplus->Draw();
hallv1square_cosab2pplus->GetXaxis()->SetTitle("v1square");
hallv1square_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hallv1square_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c9->SaveAs("./graph/flow2_ab2p/hallv1square_cosab2pplus.gif");

c10 = new TCanvas("c10","hallv1square_cosab2minus",400,360);
hallv1square_cosab2pminus->SetLineColor(kRed);
hallv1square_cosab2pminus->Draw();
hallv1square_cosab2pminus->GetXaxis()->SetTitle("v1square");
hallv1square_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hallv1square_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c10->SaveAs("./graph/flow2_ab2p/hallv1square_cosab2pminus.gif");


c11 = new TCanvas("c11","hallv1square_cosab2same",400,360);
hallv1square_cosab2psame->SetLineColor(kGreen);
hallv1square_cosab2psame->Draw();
hallv1square_cosab2psame->GetXaxis()->SetTitle("v1square");
hallv1square_cosab2psame->GetYaxis()->SetTitle("cosab2psame");
hallv1square_cosab2psame->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2psame->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2psame->GetYaxis()->SetTitleSize(0.05);
c11->SaveAs("./graph/flow2_ab2p/hallv1square_cosab2psame.gif");

c12 = new TCanvas("c12","hallv1square_cosab2diff",400,360);
hallv1square_cosab2pdiff->SetLineColor(kBlue);
hallv1square_cosab2pdiff->Draw();
hallv1square_cosab2pdiff->GetXaxis()->SetTitle("v1square");
hallv1square_cosab2pdiff->GetYaxis()->SetTitle("cosab2pdiff");
hallv1square_cosab2pdiff->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2pdiff->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2pdiff->GetYaxis()->SetTitleSize(0.05);
c12->SaveAs("./graph/flow2_ab2p/hallv1square_cosab2pdiff.gif");



c13 = new TCanvas("c13","hv2square_cosab2pall",400,360);
hv2square_cosab2ptotal->Rebin(50);
hv2square_cosab2pplus ->Rebin(50);
hv2square_cosab2pminus->Rebin(50);
hv2square_cosab2psame ->Rebin(50);
hv2square_cosab2pdiff ->Rebin(50);

hv2square_cosab2ptotal->SetLineColor(kBlack);
hv2square_cosab2ptotal->Draw();
hv2square_cosab2ptotal->GetXaxis()->SetTitle("v2square");
hv2square_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hv2square_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hv2square_cosab2pplus->SetLineColor(kOrange);
hv2square_cosab2pplus->Draw("same");
hv2square_cosab2pminus->SetLineColor(kRed);
hv2square_cosab2pminus->Draw("same");

c13->SaveAs("./graph/flow2_ab2p/hv2square_cosab2pall.gif");


c14 = new TCanvas("c14","hv2square_cosab2total",400,360);
hv2square_cosab2ptotal->SetLineColor(kBlack);
hv2square_cosab2ptotal->Draw();
hv2square_cosab2ptotal->GetXaxis()->SetTitle("v2square");
hv2square_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hv2square_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c14->SaveAs("./graph/flow2_ab2p/hv2square_cosab2ptotal.gif");



c15 = new TCanvas("c15","hv2square_cosab2plus",400,360);
hv2square_cosab2pplus->SetLineColor(kOrange);
hv2square_cosab2pplus->Draw();
hv2square_cosab2pplus->GetXaxis()->SetTitle("v2square");
hv2square_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hv2square_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c15->SaveAs("./graph/flow2_ab2p/hv2square_cosab2pplus.gif");

c16 = new TCanvas("c16","hv2square_cosab2minus",400,360);
hv2square_cosab2pminus->SetLineColor(kRed);
hv2square_cosab2pminus->Draw();
hv2square_cosab2pminus->GetXaxis()->SetTitle("v2square");
hv2square_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hv2square_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c16->SaveAs("./graph/flow2_ab2p/hv2square_cosab2pminus.gif");


c17 = new TCanvas("c17","hv2square_cosab2same",400,360);
hv2square_cosab2psame->SetLineColor(kGreen);
hv2square_cosab2psame->Draw();
hv2square_cosab2psame->GetXaxis()->SetTitle("v2square");
hv2square_cosab2psame->GetYaxis()->SetTitle("cosab2psame");
hv2square_cosab2psame->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2psame->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2psame->GetYaxis()->SetTitleSize(0.05);
c17->SaveAs("./graph/flow2_ab2p/hv2square_cosab2psame.gif");

c18 = new TCanvas("c18","hv2square_cosab2diff",400,360);
hv2square_cosab2pdiff->SetLineColor(kBlue);
hv2square_cosab2pdiff->Draw();
hv2square_cosab2pdiff->GetXaxis()->SetTitle("v2square");
hv2square_cosab2pdiff->GetYaxis()->SetTitle("cosab2pdiff");
hv2square_cosab2pdiff->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2pdiff->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2pdiff->GetYaxis()->SetTitleSize(0.05);
c18->SaveAs("./graph/flow2_ab2p/hv2square_cosab2pdiff.gif");



c19 = new TCanvas("c19","hallv2square_cosab2pall",400,360);
hallv2square_cosab2ptotal->Rebin(50);
hallv2square_cosab2pplus ->Rebin(50);
hallv2square_cosab2pminus->Rebin(50);
hallv2square_cosab2psame ->Rebin(50);
hallv2square_cosab2pdiff ->Rebin(50);
hallv2square_cosab2ptotal->SetLineColor(kBlack);
hallv2square_cosab2ptotal->Draw();
hallv2square_cosab2ptotal->GetXaxis()->SetTitle("v2square");
hallv2square_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hallv2square_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hallv2square_cosab2pplus->SetLineColor(kOrange);
hallv2square_cosab2pplus->Draw("same");
hallv2square_cosab2pminus->SetLineColor(kRed);
hallv2square_cosab2pminus->Draw("same");

c19->SaveAs("./graph/flow2_ab2p/hallv2square_cosab2pall.gif");


c20 = new TCanvas("c20","hallv2square_cosab2total",400,360);
hallv2square_cosab2ptotal->SetLineColor(kBlack);
hallv2square_cosab2ptotal->Draw();
hallv2square_cosab2ptotal->GetXaxis()->SetTitle("v2square");
hallv2square_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hallv2square_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c20->SaveAs("./graph/flow2_ab2p/hallv2square_cosab2ptotal.gif");



c21 = new TCanvas("c21","hallv2square_cosab2plus",400,360);
hallv2square_cosab2pplus->SetLineColor(kOrange);
hallv2square_cosab2pplus->Draw();
hallv2square_cosab2pplus->GetXaxis()->SetTitle("v2square");
hallv2square_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hallv2square_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c21->SaveAs("./graph/flow2_ab2p/hallv2square_cosab2pplus.gif");

c22 = new TCanvas("c22","hallv2square_cosab2minus",400,360);
hallv2square_cosab2pminus->SetLineColor(kRed);
hallv2square_cosab2pminus->Draw();
hallv2square_cosab2pminus->GetXaxis()->SetTitle("v2square");
hallv2square_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hallv2square_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c22->SaveAs("./graph/flow2_ab2p/hallv2square_cosab2pminus.gif");


c23 = new TCanvas("c23","hallv2square_cosab2same",400,360);
hallv2square_cosab2psame->SetLineColor(kGreen);
hallv2square_cosab2psame->Draw();
hallv2square_cosab2psame->GetXaxis()->SetTitle("v2square");
hallv2square_cosab2psame->GetYaxis()->SetTitle("cosab2psame");
hallv2square_cosab2psame->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2psame->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2psame->GetYaxis()->SetTitleSize(0.05);
c23->SaveAs("./graph/flow2_ab2p/hallv2square_cosab2psame.gif");

c24 = new TCanvas("c24","hallv2square_cosab2diff",400,360);
hallv2square_cosab2pdiff->SetLineColor(kBlue);
hallv2square_cosab2pdiff->Draw();
hallv2square_cosab2pdiff->GetXaxis()->SetTitle("v2square");
hallv2square_cosab2pdiff->GetYaxis()->SetTitle("cosab2pdiff");
hallv2square_cosab2pdiff->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2pdiff->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2pdiff->GetYaxis()->SetTitleSize(0.05);
c24 ->SaveAs("./graph/flow2_ab2p/hallv2square_cosab2pdiff.gif");


TH1F *dif1 = new TH1F("dif1","dif1",40,-1,1);
TH1F *dif2 = new TH1F("dif2","dif2",40,-1,1);
TH1F *dif3 = new TH1F("dif3","dif3",40,-1,1);
TH1F *dif4 = new TH1F("dif4","dif4",40,-1,1);


c25 = new TCanvas("c25","hv1square_cosab2pLSUL",400,360);
TH1F *v1square_cosab2p =new TH1F("v1square_cos(#alpha+#beta-2c)","v1square_cos(#alpha+#beta-2c)",2000,-1.,1.);
v1square_cosab2p->SetTitle("cos(#alpha+#beta-2c), UL&LS");
v1square_cosab2p->GetXaxis()->SetTitle("v1square");
v1square_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
v1square_cosab2p->GetYaxis()->SetLabelSize(0.025);
v1square_cosab2p->GetXaxis()->SetTitleSize(0.05);
v1square_cosab2p->GetYaxis()->SetTitleSize(0.05);
v1square_cosab2p->SetLineColor(kYellow);
v1square_cosab2p->GetXaxis()->SetRangeUser(-0.6,0.6);
v1square_cosab2p->GetYaxis()->SetRangeUser(-0.2,0.2);
v1square_cosab2p->Draw();
hv1square_cosab2psame -> Draw("same");
hv1square_cosab2pdiff -> Draw("same");

c25 ->SaveAs("./graph/flow1_ab2p/hv1square_cosab2pcompare.gif");

c26 = new TCanvas("c26","hv1square_cosab2pUL-LS",400,360);
dif1 ->Add(hv1square_cosab2pdiff,hv1square_cosab2psame,1,-1);
dif1 ->SetTitle("hv1square_cos(a+b-2c) UL-LS");
dif1 -> GetXaxis()->SetRangeUser(-0.6,0.6);
dif1 -> GetYaxis()->SetRangeUser(-0.2,0.2);
dif1 ->Draw();
v1square_cosab2p->Draw("same");
c26 ->SaveAs("./graph/flow1_ab2p/hv1square_cosab2pdif.gif");

c27 = new TCanvas("c27","hallv1square_cosab2pLSUL",400,360);
TH1F *allv1square_cosab2p =new TH1F("allv1square_cos(#alpha+#beta-2c)","allv1square_cos(#alpha+#beta-2c)",2000,-1.,1.);
allv1square_cosab2p->SetTitle("cos(#alpha+#beta-2c), UL&LS");
allv1square_cosab2p->GetXaxis()->SetTitle("allv1square");
allv1square_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
allv1square_cosab2p->GetYaxis()->SetLabelSize(0.025);
allv1square_cosab2p->GetXaxis()->SetTitleSize(0.05);
allv1square_cosab2p->GetYaxis()->SetTitleSize(0.05);
allv1square_cosab2p->SetLineColor(kYellow);
allv1square_cosab2p->Draw();
allv1square_cosab2p-> GetXaxis()->SetRangeUser(-0.4,0.6);
allv1square_cosab2p-> GetYaxis()->SetRangeUser(-0.2,0.2);
hallv1square_cosab2psame -> Draw("same");
hallv1square_cosab2pdiff -> Draw("same");
c27 ->SaveAs("./graph/flow1_ab2p/hallv1square_cosab2pcompare.gif");

c28 = new TCanvas("c28","allhv1square_cosab2pUL-LS",400,360);
dif2 -> Add(hallv1square_cosab2pdiff,hallv1square_cosab2psame,1,-1);
dif2 -> SetTitle("allhv1square_cos(a+b-2c) UL-LS");
dif2 -> GetXaxis()->SetRangeUser(-0.6,0.6);
dif2 -> GetYaxis()->SetRangeUser(-0.2,0.2);
dif2 -> Draw();
allv1square_cosab2p->Draw("same");
c28 ->SaveAs("./graph/flow1_ab2p/hallv1square_cosab2pdif.gif");


c29 = new TCanvas("c29","hv2square_cosab2pLSUL",400,360);
TH1F *v2square_cosab2p =new TH1F("v2square_cos(#alpha+#beta-2c)","v2square_cos(#alpha+#beta-2c)",2000,-1.,1.);
v2square_cosab2p->GetXaxis()->SetRangeUser(-0.6,0.6);
v2square_cosab2p->GetYaxis()->SetRangeUser(-0.2,0.2);
v2square_cosab2p->SetTitle("cos(#alpha+#beta-2c), UL&LS");
v2square_cosab2p->GetXaxis()->SetTitle("v2square");
v2square_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
v2square_cosab2p->GetYaxis()->SetLabelSize(0.025);
v2square_cosab2p->GetXaxis()->SetTitleSize(0.05);
v2square_cosab2p->GetYaxis()->SetTitleSize(0.05);
v2square_cosab2p->SetLineColor(kYellow);
v2square_cosab2p->Draw();
hv2square_cosab2psame -> Draw("same");
hv2square_cosab2pdiff -> Draw("same");
c29 ->SaveAs("./graph/flow1_ab2p/hv2square_cosab2pcompare.gif");

c30 = new TCanvas("c30","hv2square_cosab2pUL-LS",400,360);
dif3 -> Add(hv2square_cosab2pdiff,hv2square_cosab2psame,1,-1);
dif3 -> SetTitle("hv2square_cos(a+b-2c) UL-LS");
dif3 -> Draw();
v2square_cosab2p->Draw("same");
c30 ->SaveAs("./graph/flow1_ab2p/hv2square_cosab2pdif.gif");

c31 = new TCanvas("c31","hallv2square_cosab2pLSUL",400,360);
TH1F *allv2square_cosab2p =new TH1F("allv2square_cos(#alpha+#beta-2c)","allv2square_cos(#alpha+#beta-2c)",2000,-1.,1.);
allv2square_cosab2p-> GetXaxis()->SetRangeUser(-0.4,0.6);
allv2square_cosab2p-> GetYaxis()->SetRangeUser(-0.2,0.2);
allv2square_cosab2p->SetTitle("cos(#alpha+#beta-2c), UL&LS");
allv2square_cosab2p->GetXaxis()->SetTitle("allv2square");
allv2square_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
allv2square_cosab2p->GetYaxis()->SetLabelSize(0.025);
allv2square_cosab2p->GetXaxis()->SetTitleSize(0.05);
allv2square_cosab2p->GetYaxis()->SetTitleSize(0.05);
allv2square_cosab2p->SetLineColor(kYellow);
allv2square_cosab2p->Draw();
hallv2square_cosab2psame -> Draw("same");
hallv2square_cosab2pdiff -> Draw("same");
c31 ->SaveAs("./graph/flow1_ab2p/hallv2square_cosab2pcompare.gif");

c32 = new TCanvas("c32","allhv2square_cosab2pLS-UL",400,360);
dif4 -> Add(hallv2square_cosab2pdiff,hallv2square_cosab2psame,1,-1);
dif4 -> SetTitle("allhv2square_cos(a+b-2c) LS-UL");
dif4 -> Draw();
dif4 -> GetXaxis()->SetRangeUser(-0.4,0.6);
allv2square_cosab2p->Draw("same");
c32 ->SaveAs("./graph/flow1_ab2p/hallv2square_cosab2pdif.gif");


}
