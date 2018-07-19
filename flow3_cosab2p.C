void flow3_cosab2p()
{
TFile* in_file= new TFile("8_Eta3_psi=ran.root");

c1 = new TCanvas("c1","hcos1ab_cosab2pall",400,360);
hcos1ab_cosab2ptotal->SetLineColor(kBlack);
hcos1ab_cosab2ptotal->Draw();
hcos1ab_cosab2ptotal->GetXaxis()->SetTitle("cos1ab");
hcos1ab_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hcos1ab_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hcos1ab_cosab2pplus->SetLineColor(kOrange);
hcos1ab_cosab2pplus->Draw("same");
hcos1ab_cosab2pminus->SetLineColor(kRed);
hcos1ab_cosab2pminus->Draw("same");
hcos1ab_cosab2psame->SetLineColor(kGreen);
hcos1ab_cosab2psame->Draw("same");
hcos1ab_cosab2pdiff->SetLineColor(kBlue);
hcos1ab_cosab2pdiff->Draw("same");

c1->SaveAs("./graph/flow2_ab2p/hcos1ab_cosab2pall.gif");


c2 = new TCanvas("c2","hcos1ab_cosab2total",400,360);
hcos1ab_cosab2ptotal->SetLineColor(kBlack);
hcos1ab_cosab2ptotal->Draw();
hcos1ab_cosab2ptotal->GetXaxis()->SetTitle("cos1ab");
hcos1ab_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hcos1ab_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c2->SaveAs("./graph/flow2_ab2p/hcos1ab_cosab2ptotal.gif");



c3 = new TCanvas("c3","hcos1ab_cosab2plus",400,360);
hcos1ab_cosab2pplus->SetLineColor(kOrange);
hcos1ab_cosab2pplus->Draw();
hcos1ab_cosab2pplus->GetXaxis()->SetTitle("cos1ab");
hcos1ab_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hcos1ab_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c3->SaveAs("./graph/flow2_ab2p/hcos1ab_cosab2pplus.gif");

c4 = new TCanvas("c4","hcos1ab_cosab2minus",400,360);
hcos1ab_cosab2pminus->SetLineColor(kRed);
hcos1ab_cosab2pminus->Draw();
hcos1ab_cosab2pminus->GetXaxis()->SetTitle("cos1ab");
hcos1ab_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hcos1ab_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c4->SaveAs("./graph/flow2_ab2p/hcos1ab_cosab2pminus.gif");

c5 = new TCanvas("c5","hcos1ab_cosab2same",400,360);
hcos1ab_cosab2psame->SetLineColor(kGreen);
hcos1ab_cosab2psame->Draw();
hcos1ab_cosab2psame->GetXaxis()->SetTitle("cos1ab");
hcos1ab_cosab2psame->GetYaxis()->SetTitle("cosab2psame");
hcos1ab_cosab2psame->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2psame->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2psame->GetYaxis()->SetTitleSize(0.05);
c5->SaveAs("./graph/flow2_ab2p/hcos1ab_cosab2psame.gif");

c6 = new TCanvas("c6","hcos1ab_cosab2diff",400,360);
hcos1ab_cosab2pdiff->SetLineColor(kBlue);
hcos1ab_cosab2pdiff->Draw();
hcos1ab_cosab2pdiff->GetXaxis()->SetTitle("cos1ab");
hcos1ab_cosab2pdiff->GetYaxis()->SetTitle("cosab2pdiff");
hcos1ab_cosab2pdiff->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2pdiff->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2pdiff->GetYaxis()->SetTitleSize(0.05);
c6->SaveAs("./graph/flow2_ab2p/hcos1ab_cosab2pdiff.gif");




c7 = new TCanvas("c7","hallcos1ab_cosab2pall",400,360);
hallcos1ab_cosab2ptotal->SetLineColor(kBlack);
hallcos1ab_cosab2ptotal->Draw();
hallcos1ab_cosab2ptotal->GetXaxis()->SetTitle("cos1ab");
hallcos1ab_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hallcos1ab_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hallcos1ab_cosab2pplus->SetLineColor(kOrange);
hallcos1ab_cosab2pplus->Draw("same");
hallcos1ab_cosab2pminus->SetLineColor(kRed);
hallcos1ab_cosab2pminus->Draw("same");

c7->SaveAs("./graph/flow2_ab2p/hallcos1ab_cosab2pall.gif");


c8 = new TCanvas("c8","hallcos1ab_cosab2total",400,360);
hallcos1ab_cosab2ptotal->SetLineColor(kBlack);
hallcos1ab_cosab2ptotal->Draw();
hallcos1ab_cosab2ptotal->GetXaxis()->SetTitle("cos1ab");
hallcos1ab_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hallcos1ab_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c8->SaveAs("./graph/flow2_ab2p/hallcos1ab_cosab2ptotal.gif");



c9 = new TCanvas("c9","hallcos1ab_cosab2plus",400,360);
hallcos1ab_cosab2pplus->SetLineColor(kOrange);
hallcos1ab_cosab2pplus->Draw();
hallcos1ab_cosab2pplus->GetXaxis()->SetTitle("cos1ab");
hallcos1ab_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hallcos1ab_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c9->SaveAs("./graph/flow2_ab2p/hallcos1ab_cosab2pplus.gif");

c10 = new TCanvas("c10","hallcos1ab_cosab2minus",400,360);
hallcos1ab_cosab2pminus->SetLineColor(kRed);
hallcos1ab_cosab2pminus->Draw();
hallcos1ab_cosab2pminus->GetXaxis()->SetTitle("cos1ab");
hallcos1ab_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hallcos1ab_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c10->SaveAs("./graph/flow2_ab2p/hallcos1ab_cosab2pminus.gif");


c11 = new TCanvas("c11","hallcos1ab_cosab2same",400,360);
hallcos1ab_cosab2psame->SetLineColor(kGreen);
hallcos1ab_cosab2psame->Draw();
hallcos1ab_cosab2psame->GetXaxis()->SetTitle("cos1ab");
hallcos1ab_cosab2psame->GetYaxis()->SetTitle("cosab2psame");
hallcos1ab_cosab2psame->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2psame->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2psame->GetYaxis()->SetTitleSize(0.05);
c11->SaveAs("./graph/flow2_ab2p/hallcos1ab_cosab2psame.gif");

c12 = new TCanvas("c12","hallcos1ab_cosab2diff",400,360);
hallcos1ab_cosab2pdiff->SetLineColor(kBlue);
hallcos1ab_cosab2pdiff->Draw();
hallcos1ab_cosab2pdiff->GetXaxis()->SetTitle("cos1ab");
hallcos1ab_cosab2pdiff->GetYaxis()->SetTitle("cosab2pdiff");
hallcos1ab_cosab2pdiff->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2pdiff->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2pdiff->GetYaxis()->SetTitleSize(0.05);
c12->SaveAs("./graph/flow2_ab2p/hallcos1ab_cosab2pdiff.gif");



c13 = new TCanvas("c13","hcos2ab_cosab2pall",400,360);
hcos2ab_cosab2ptotal->SetLineColor(kBlack);
hcos2ab_cosab2ptotal->Draw();
hcos2ab_cosab2ptotal->GetXaxis()->SetTitle("cos2ab");
hcos2ab_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hcos2ab_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hcos2ab_cosab2pplus->SetLineColor(kOrange);
hcos2ab_cosab2pplus->Draw("same");
hcos2ab_cosab2pminus->SetLineColor(kRed);
hcos2ab_cosab2pminus->Draw("same");

c13->SaveAs("./graph/flow2_ab2p/hcos2ab_cosab2pall.gif");


c14 = new TCanvas("c14","hcos2ab_cosab2total",400,360);
hcos2ab_cosab2ptotal->SetLineColor(kBlack);
hcos2ab_cosab2ptotal->Draw();
hcos2ab_cosab2ptotal->GetXaxis()->SetTitle("cos2ab");
hcos2ab_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hcos2ab_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c14->SaveAs("./graph/flow2_ab2p/hcos2ab_cosab2ptotal.gif");



c15 = new TCanvas("c15","hcos2ab_cosab2plus",400,360);
hcos2ab_cosab2pplus->SetLineColor(kOrange);
hcos2ab_cosab2pplus->Draw();
hcos2ab_cosab2pplus->GetXaxis()->SetTitle("cos2ab");
hcos2ab_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hcos2ab_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c15->SaveAs("./graph/flow2_ab2p/hcos2ab_cosab2pplus.gif");

c16 = new TCanvas("c16","hcos2ab_cosab2minus",400,360);
hcos2ab_cosab2pminus->SetLineColor(kRed);
hcos2ab_cosab2pminus->Draw();
hcos2ab_cosab2pminus->GetXaxis()->SetTitle("cos2ab");
hcos2ab_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hcos2ab_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c16->SaveAs("./graph/flow2_ab2p/hcos2ab_cosab2pminus.gif");


c17 = new TCanvas("c17","hcos2ab_cosab2same",400,360);
hcos2ab_cosab2psame->SetLineColor(kGreen);
hcos2ab_cosab2psame->Draw();
hcos2ab_cosab2psame->GetXaxis()->SetTitle("cos2ab");
hcos2ab_cosab2psame->GetYaxis()->SetTitle("cosab2psame");
hcos2ab_cosab2psame->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2psame->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2psame->GetYaxis()->SetTitleSize(0.05);
c17->SaveAs("./graph/flow2_ab2p/hcos2ab_cosab2psame.gif");

c18 = new TCanvas("c18","hcos2ab_cosab2diff",400,360);
hcos2ab_cosab2pdiff->SetLineColor(kBlue);
hcos2ab_cosab2pdiff->Draw();
hcos2ab_cosab2pdiff->GetXaxis()->SetTitle("cos2ab");
hcos2ab_cosab2pdiff->GetYaxis()->SetTitle("cosab2pdiff");
hcos2ab_cosab2pdiff->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2pdiff->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2pdiff->GetYaxis()->SetTitleSize(0.05);
c18->SaveAs("./graph/flow2_ab2p/hcos2ab_cosab2pdiff.gif");



c19 = new TCanvas("c19","hallcos2ab_cosab2pall",400,360);
hallcos2ab_cosab2ptotal->SetLineColor(kBlack);
hallcos2ab_cosab2ptotal->Draw();
hallcos2ab_cosab2ptotal->GetXaxis()->SetTitle("cos2ab");
hallcos2ab_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hallcos2ab_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hallcos2ab_cosab2pplus->SetLineColor(kOrange);
hallcos2ab_cosab2pplus->Draw("same");
hallcos2ab_cosab2pminus->SetLineColor(kRed);
hallcos2ab_cosab2pminus->Draw("same");

c19->SaveAs("./graph/flow2_ab2p/hallcos2ab_cosab2pall.gif");


c20 = new TCanvas("c20","hallcos2ab_cosab2total",400,360);
hallcos2ab_cosab2ptotal->SetLineColor(kBlack);
hallcos2ab_cosab2ptotal->Draw();
hallcos2ab_cosab2ptotal->GetXaxis()->SetTitle("cos2ab");
hallcos2ab_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hallcos2ab_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c20->SaveAs("./graph/flow2_ab2p/hallcos2ab_cosab2ptotal.gif");



c21 = new TCanvas("c21","hallcos2ab_cosab2plus",400,360);
hallcos2ab_cosab2pplus->SetLineColor(kOrange);
hallcos2ab_cosab2pplus->Draw();
hallcos2ab_cosab2pplus->GetXaxis()->SetTitle("cos2ab");
hallcos2ab_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hallcos2ab_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c21->SaveAs("./graph/flow2_ab2p/hallcos2ab_cosab2pplus.gif");

c22 = new TCanvas("c22","hallcos2ab_cosab2minus",400,360);
hallcos2ab_cosab2pminus->SetLineColor(kRed);
hallcos2ab_cosab2pminus->Draw();
hallcos2ab_cosab2pminus->GetXaxis()->SetTitle("cos2ab");
hallcos2ab_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hallcos2ab_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c22->SaveAs("./graph/flow2_ab2p/hallcos2ab_cosab2pminus.gif");


c23 = new TCanvas("c23","hallcos2ab_cosab2same",400,360);
hallcos2ab_cosab2psame->SetLineColor(kGreen);
hallcos2ab_cosab2psame->Draw();
hallcos2ab_cosab2psame->GetXaxis()->SetTitle("cos2ab");
hallcos2ab_cosab2psame->GetYaxis()->SetTitle("cosab2psame");
hallcos2ab_cosab2psame->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2psame->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2psame->GetYaxis()->SetTitleSize(0.05);
c23->SaveAs("./graph/flow2_ab2p/hallcos2ab_cosab2psame.gif");

c24 = new TCanvas("c24","hallcos2ab_cosab2diff",400,360);
hallcos2ab_cosab2pdiff->SetLineColor(kBlue);
hallcos2ab_cosab2pdiff->Draw();
hallcos2ab_cosab2pdiff->GetXaxis()->SetTitle("cos2ab");
hallcos2ab_cosab2pdiff->GetYaxis()->SetTitle("cosab2pdiff");
hallcos2ab_cosab2pdiff->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2pdiff->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2pdiff->GetYaxis()->SetTitleSize(0.05);
c24 ->SaveAs("./graph/flow2_ab2p/hallcos2ab_cosab2pdiff.gif");


TH1F *dif = new TH1F("dif","dif",2000,-1,1);
c25 = new TCanvas("c25","hcos1ab_cosab2pLSUL",400,360);
TH1F *cos1ab_cosab2p =new TH1F("cos1ab_cos(#alpha+#beta-2c)","cos1ab_cos(#alpha+#beta-2c)",2000,-1.,1.);
cos1ab_cosab2p->SetTitle("cos(#alpha+#beta-2c), UL&LS");
cos1ab_cosab2p->GetXaxis()->SetTitle("cos1ab");
cos1ab_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
cos1ab_cosab2p->GetYaxis()->SetLabelSize(0.025);
cos1ab_cosab2p->GetXaxis()->SetTitleSize(0.05);
cos1ab_cosab2p->GetYaxis()->SetTitleSize(0.05);
cos1ab_cosab2p->SetLineColor(kYellow);
cos1ab_cosab2p->GetXaxis()->SetRangeUser(-0.6,0.6);
cos1ab_cosab2p->GetYaxis()->SetRangeUser(-0.2,0.2);
cos1ab_cosab2p->Draw();
hcos1ab_cosab2psame -> Draw("same");
hcos1ab_cosab2pdiff -> Draw("same");

c25 ->SaveAs("./graph/flow1_ab2p/hcos1ab_cosab2pcompare.gif");

c26 = new TCanvas("c26","hcos1ab_cosab2pUL-LS",400,360);
dif ->Add(hcos1ab_cosab2pdiff,hcos1ab_cosab2psame,1,-1);
dif ->SetTitle("hcos1ab_cos(a+b-2c) UL-LS");
dif -> GetXaxis()->SetRangeUser(-0.6,0.6);
dif -> GetYaxis()->SetRangeUser(-0.2,0.2);
dif ->Draw();
cos1ab_cosab2p->Draw("same");
c26 ->SaveAs("./graph/flow1_ab2p/hcos1ab_cosab2pdif.gif");

c27 = new TCanvas("c27","hallcos1ab_cosab2pLSUL",400,360);
TH1F *allcos1ab_cosab2p =new TH1F("allcos1ab_cos(#alpha+#beta-2c)","allcos1ab_cos(#alpha+#beta-2c)",2000,-1.,1.);
allcos1ab_cosab2p->SetTitle("cos(#alpha+#beta-2c), UL&LS");
allcos1ab_cosab2p->GetXaxis()->SetTitle("allcos1ab");
allcos1ab_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
allcos1ab_cosab2p->GetYaxis()->SetLabelSize(0.025);
allcos1ab_cosab2p->GetXaxis()->SetTitleSize(0.05);
allcos1ab_cosab2p->GetYaxis()->SetTitleSize(0.05);
allcos1ab_cosab2p->SetLineColor(kYellow);
allcos1ab_cosab2p->Draw();
allcos1ab_cosab2p-> GetXaxis()->SetRangeUser(-0.4,0.6);
allcos1ab_cosab2p-> GetYaxis()->SetRangeUser(-0.2,0.2);
hallcos1ab_cosab2psame -> Draw("same");
hallcos1ab_cosab2pdiff -> Draw("same");
c27 ->SaveAs("./graph/flow1_ab2p/hallcos1ab_cosab2pcompare.gif");

c28 = new TCanvas("c28","allhcos1ab_cosab2pUL-LS",400,360);
dif -> Add(hallcos1ab_cosab2pdiff,hallcos1ab_cosab2psame,1,-1);
dif -> SetTitle("allhcos1ab_cos(a+b-2c) UL-LS");
dif -> GetXaxis()->SetRangeUser(-0.6,0.6);
dif -> GetYaxis()->SetRangeUser(-0.2,0.2);
dif -> Draw();
allcos1ab_cosab2p->Draw("same");
c28 ->SaveAs("./graph/flow1_ab2p/hallcos1ab_cosab2pdif.gif");


c29 = new TCanvas("c29","hcos2ab_cosab2pLSUL",400,360);
TH1F *cos2ab_cosab2p =new TH1F("cos2ab_cos(#alpha+#beta-2c)","cos2ab_cos(#alpha+#beta-2c)",2000,-1.,1.);
cos2ab_cosab2p->GetXaxis()->SetRangeUser(-0.6,0.6);
cos2ab_cosab2p->GetYaxis()->SetRangeUser(-0.2,0.2);
cos2ab_cosab2p->SetTitle("cos(#alpha+#beta-2c), UL&LS");
cos2ab_cosab2p->GetXaxis()->SetTitle("cos2ab");
cos2ab_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
cos2ab_cosab2p->GetYaxis()->SetLabelSize(0.025);
cos2ab_cosab2p->GetXaxis()->SetTitleSize(0.05);
cos2ab_cosab2p->GetYaxis()->SetTitleSize(0.05);
cos2ab_cosab2p->SetLineColor(kYellow);
cos2ab_cosab2p->Draw();
hcos2ab_cosab2psame -> Draw("same");
hcos2ab_cosab2pdiff -> Draw("same");
c29 ->SaveAs("./graph/flow1_ab2p/hcos2ab_cosab2pcompare.gif");

c30 = new TCanvas("c30","hcos2ab_cosab2pUL-LS",400,360);
dif -> Add(hcos2ab_cosab2pdiff,hcos2ab_cosab2psame,1,-1);
dif -> SetTitle("hcos2ab_cos(a+b-2c) UL-LS");
dif -> Draw();
cos2ab_cosab2p->Draw("same");
c30 ->SaveAs("./graph/flow1_ab2p/hcos2ab_cosab2pdif.gif");

c31 = new TCanvas("c31","hallcos2ab_cosab2pLSUL",400,360);
TH1F *allcos2ab_cosab2p =new TH1F("allcos2ab_cos(#alpha+#beta-2c)","allcos2ab_cos(#alpha+#beta-2c)",2000,-1.,1.);
allcos2ab_cosab2p-> GetXaxis()->SetRangeUser(-0.4,0.6);
allcos2ab_cosab2p-> GetYaxis()->SetRangeUser(-0.2,0.2);
allcos2ab_cosab2p->SetTitle("cos(#alpha+#beta-2c), UL&LS");
allcos2ab_cosab2p->GetXaxis()->SetTitle("allcos2ab");
allcos2ab_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
allcos2ab_cosab2p->GetYaxis()->SetLabelSize(0.025);
allcos2ab_cosab2p->GetXaxis()->SetTitleSize(0.05);
allcos2ab_cosab2p->GetYaxis()->SetTitleSize(0.05);
allcos2ab_cosab2p->SetLineColor(kYellow);
allcos2ab_cosab2p->Draw();
hallcos2ab_cosab2psame -> Draw("same");
hallcos2ab_cosab2pdiff -> Draw("same");
c31 ->SaveAs("./graph/flow1_ab2p/hallcos2ab_cosab2pcompare.gif");

c32 = new TCanvas("c32","allhcos2ab_cosab2pLS-UL",400,360);
dif -> Add(hallcos2ab_cosab2pdiff,hallcos2ab_cosab2psame,1,-1);
dif -> SetTitle("allhcos2ab_cos(a+b-2c) LS-UL");
dif -> Draw();
dif -> GetXaxis()->SetRangeUser(-0.4,0.6);
allcos2ab_cosab2p->Draw("same");
c32 ->SaveAs("./graph/flow1_ab2p/hallcos2ab_cosab2pdif.gif");


}
