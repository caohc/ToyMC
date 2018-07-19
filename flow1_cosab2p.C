void flow1_cosab2p()
{
TFile* in_file= new TFile("8_Eta3_psi=ran.root");

c1 = new TCanvas("c1","hcos1_cosab2pall",400,360);
hcos1_cosab2ptotal->SetLineColor(kBlack);
hcos1_cosab2ptotal->Rebin(50);
hcos1_cosab2ptotal->Draw();
hcos1_cosab2ptotal->GetXaxis()->SetTitle("cos1");
hcos1_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hcos1_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hcos1_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hcos1_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hcos1_cosab2pplus->Rebin(50);
hcos1_cosab2pplus->SetLineColor(kOrange);
hcos1_cosab2pplus->Draw("same");
hcos1_cosab2pminus->Rebin(50);
hcos1_cosab2pminus->SetLineColor(kRed);
hcos1_cosab2pminus->Draw("same");

c1->SaveAs("./graph/flow1_ab2p/hcos1_cosab2pall.gif");


c2 = new TCanvas("c2","hcos1_cosab2ptotal",400,360);
hcos1_cosab2ptotal->SetLineColor(kBlack);
hcos1_cosab2ptotal->Draw();
hcos1_cosab2ptotal->GetXaxis()->SetTitle("cos1");
hcos1_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hcos1_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hcos1_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hcos1_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c2->SaveAs("./graph/flow1_ab2p/hcos1_cosab2ptotal.gif");



c3 = new TCanvas("c3","hcos1_cosab2pplus",400,360);
hcos1_cosab2pplus->SetLineColor(kOrange);
hcos1_cosab2pplus->Draw();
hcos1_cosab2pplus->GetXaxis()->SetTitle("cos1");
hcos1_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hcos1_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hcos1_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hcos1_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c3->SaveAs("./graph/flow1_ab2p/hcos1_cosab2pplus.gif");

c4 = new TCanvas("c4","hcos1_cosab2pminus",400,360);
hcos1_cosab2pminus->SetLineColor(kRed);
hcos1_cosab2pminus->Draw();
hcos1_cosab2pminus->GetXaxis()->SetTitle("cos1");
hcos1_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hcos1_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hcos1_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hcos1_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c4->SaveAs("./graph/flow1_ab2p/hcos1_cosab2pminus.gif");



c5 = new TCanvas("c5","hallcos1_cosab2pall",400,360);
hallcos1_cosab2ptotal->Rebin(50);
hallcos1_cosab2ptotal->SetLineColor(kBlack);
hallcos1_cosab2ptotal->Draw();
hallcos1_cosab2ptotal->GetXaxis()->SetTitle("cos1");
hallcos1_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hallcos1_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hallcos1_cosab2pplus ->Rebin(50);
hallcos1_cosab2pminus->Rebin(50);
hallcos1_cosab2pplus->SetLineColor(kOrange);
hallcos1_cosab2pplus->Draw("same");
hallcos1_cosab2pminus->SetLineColor(kRed);
hallcos1_cosab2pminus->Draw("same");

c5->SaveAs("./graph/flow1_ab2p/hallcos1_cosab2pall.gif");


c6 = new TCanvas("c6","hallcos1_cosab2ptotal",400,360);
hallcos1_cosab2ptotal->SetLineColor(kBlack);
hallcos1_cosab2ptotal->Draw();
hallcos1_cosab2ptotal->GetXaxis()->SetTitle("cos1");
hallcos1_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hallcos1_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c6->SaveAs("./graph/flow1_ab2p/hallcos1_cosab2ptotal.gif");



c7 = new TCanvas("c7","hallcos1_cosab2pplus",400,360);
hallcos1_cosab2pplus->SetLineColor(kOrange);
hallcos1_cosab2pplus->Draw();
hallcos1_cosab2pplus->GetXaxis()->SetTitle("cos1");
hallcos1_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hallcos1_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c7->SaveAs("./graph/flow1_ab2p/hallcos1_cosab2pplus.gif");

c8 = new TCanvas("c8","hallcos1_cosab2pminus",400,360);
hallcos1_cosab2pminus->SetLineColor(kRed);
hallcos1_cosab2pminus->Draw();
hallcos1_cosab2pminus->GetXaxis()->SetTitle("cos1");
hallcos1_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hallcos1_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c8->SaveAs("./graph/flow1_ab2p/hallcos1_cosab2pminus.gif");


c9 = new TCanvas("c9","hallcos1_cosab2psame",400,360);
hallcos1_cosab2psame->SetLineColor(kGreen);
hallcos1_cosab2psame->Rebin(50);
hallcos1_cosab2psame->Draw();
hallcos1_cosab2psame->GetXaxis()->SetTitle("cos1");
hallcos1_cosab2psame->GetYaxis()->SetTitle("cosab2psame");
hallcos1_cosab2psame->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2psame->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2psame->GetYaxis()->SetTitleSize(0.05);
c9->SaveAs("./graph/flow1_ab2p/hallcos1_cosab2psame.gif");

c10 = new TCanvas("c10","hallcos1_cosab2diff",400,360);
hallcos1_cosab2pdiff->SetLineColor(kBlue);
hallcos1_cosab2pdiff->Rebin(50);
hallcos1_cosab2pdiff->Draw();
hallcos1_cosab2pdiff->GetXaxis()->SetTitle("cos1");
hallcos1_cosab2pdiff->GetYaxis()->SetTitle("cosab2pdiff");
hallcos1_cosab2pdiff->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2pdiff->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2pdiff->GetYaxis()->SetTitleSize(0.05);
c10 ->SaveAs("./graph/flow1_ab2p/hallcos1_cosab2pdiff.gif");




c11 = new TCanvas("c11","hcos2_cosab2pall",400,360);
hcos2_cosab2ptotal->Rebin(50);
hcos2_cosab2ptotal->SetLineColor(kBlack);
hcos2_cosab2ptotal->Draw();
hcos2_cosab2ptotal->GetXaxis()->SetTitle("cos2");
hcos2_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hcos2_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hcos2_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hcos2_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hcos2_cosab2pplus ->Rebin(50);
hcos2_cosab2pminus->Rebin(50);

hcos2_cosab2pplus->SetLineColor(kOrange);
hcos2_cosab2pplus->Draw("same");
hcos2_cosab2pminus->SetLineColor(kRed);
hcos2_cosab2pminus->Draw("same");

c11->SaveAs("./graph/flow1_ab2p/hcos2_cosab2pall.gif");


c12 = new TCanvas("c12","hcos2_cosab2ptotal",400,360);
hcos2_cosab2ptotal->Rebin(50);
hcos2_cosab2ptotal->SetLineColor(kBlack);
hcos2_cosab2ptotal->Draw();
hcos2_cosab2ptotal->GetXaxis()->SetTitle("cos2");
hcos2_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hcos2_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hcos2_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hcos2_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c12->SaveAs("./graph/flow1_ab2p/hcos2_cosab2ptotal.gif");



c13 = new TCanvas("c13","hcos2_cosab2pplus",400,360);
hcos2_cosab2pplus->Rebin(50);
hcos2_cosab2pplus->SetLineColor(kOrange);
hcos2_cosab2pplus->Draw();
hcos2_cosab2pplus->GetXaxis()->SetTitle("cos2");
hcos2_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hcos2_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hcos2_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hcos2_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c13->SaveAs("./graph/flow1_ab2p/hcos2_cosab2pplus.gif");

c14 = new TCanvas("c14","hcos2_cosab2pminus",400,360);
hcos2_cosab2pminus->Rebin(50);
hcos2_cosab2pminus->SetLineColor(kRed);
hcos2_cosab2pminus->Draw();
hcos2_cosab2pminus->GetXaxis()->SetTitle("cos2");
hcos2_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hcos2_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hcos2_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hcos2_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c14->SaveAs("./graph/flow1_ab2p/hcos2_cosab2pminus.gif");



c15 = new TCanvas("c15","hallcos2_cosab2pall",400,360);
hallcos2_cosab2ptotal->SetLineColor(kBlack);
hallcos2_cosab2ptotal->Draw();
hallcos2_cosab2ptotal->GetXaxis()->SetTitle("cos2");
hallcos2_cosab2ptotal->GetYaxis()->SetTitle("cosab2p");
hallcos2_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hallcos2_cosab2pplus-> Rebin(50);
hallcos2_cosab2pminus->Rebin(50);
hallcos2_cosab2pplus->SetLineColor(kOrange);
hallcos2_cosab2pplus->Draw("same");
hallcos2_cosab2pminus->SetLineColor(kRed);
hallcos2_cosab2pminus->Draw("same");

c15->SaveAs("./graph/flow1_ab2p/hallcos2_cosab2pall.gif");


c16 = new TCanvas("c16","hallcos2_cosab2ptotal",400,360);
hallcos2_cosab2ptotal->SetLineColor(kBlack);
hallcos2_cosab2ptotal->Rebin(50);
hallcos2_cosab2ptotal->Draw();
hallcos2_cosab2ptotal->GetXaxis()->SetTitle("cos2");
hallcos2_cosab2ptotal->GetYaxis()->SetTitle("cosab2ptotal");
hallcos2_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
c16->SaveAs("./graph/flow1_ab2p/hallcos2_cosab2ptotal.gif");



c17 = new TCanvas("c17","hallcos2_cosab2pplus",400,360);
hallcos2_cosab2pplus->SetLineColor(kOrange);
hallcos2_cosab2pplus->Draw();
hallcos2_cosab2pplus->GetXaxis()->SetTitle("cos2");
hallcos2_cosab2pplus->GetYaxis()->SetTitle("cosab2pplus");
hallcos2_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2pplus->GetYaxis()->SetTitleSize(0.05);
c17->SaveAs("./graph/flow1_ab2p/hallcos2_cosab2pplus.gif");

c18 = new TCanvas("c18","hallcos2_cosab2pminus",400,360);
hallcos2_cosab2pminus->SetLineColor(kRed);
hallcos2_cosab2pminus->Draw();
hallcos2_cosab2pminus->GetXaxis()->SetTitle("cos2");
hallcos2_cosab2pminus->GetYaxis()->SetTitle("cosab2pminus");
hallcos2_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2pminus->GetYaxis()->SetTitleSize(0.05);
c18->SaveAs("./graph/flow1_ab2p/hallcos2_cosab2pminus.gif");


c19 = new TCanvas("c19","hallcos2_cosab2psame",400,360);
hallcos2_cosab2psame->SetLineColor(kGreen);
hallcos2_cosab2psame->Rebin(50);
hallcos2_cosab2psame->Draw();
hallcos2_cosab2psame->GetXaxis()->SetTitle("cos2");
hallcos2_cosab2psame->GetYaxis()->SetTitle("cosab2psame");
hallcos2_cosab2psame->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2psame->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2psame->GetYaxis()->SetTitleSize(0.05);
c19->SaveAs("./graph/flow1_ab2p/hallcos2_cosab2psame.gif");

c20 = new TCanvas("c20","hallcos2_cosab2diff",400,360);
hallcos2_cosab2pdiff->SetLineColor(kBlue);
hallcos2_cosab2pdiff->Rebin(50);
hallcos2_cosab2pdiff->Draw();
hallcos2_cosab2pdiff->GetXaxis()->SetTitle("cos2");
hallcos2_cosab2pdiff->GetYaxis()->SetTitle("cosab2pdiff");
hallcos2_cosab2pdiff->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2pdiff->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2pdiff->GetYaxis()->SetTitleSize(0.05);
c20 ->SaveAs("./graph/flow1_ab2p/hallcos2_cosab2pdiff.gif");


TH1F *dif1 = new TH1F("dif1","dif1",2000,-1,1);

c21 = new TCanvas("c21","hallcos1_cosab2pLSUL",400,360);
TH1F *allcos1_cosab2p =new TH1F("allcos1_cos(#alpha+#beta-2c)","allcos1_cos(#alpha+#beta-2c)",2000,-1.,1.);
allcos1_cosab2p->SetTitle("cos(#alpha+#beta-2c), UL&LS");
allcos1_cosab2p->GetYaxis()->SetRangeUser(-0.2,0.2);
allcos1_cosab2p->GetXaxis()->SetTitle("cos1");
allcos1_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
allcos1_cosab2p->GetYaxis()->SetLabelSize(0.025);
allcos1_cosab2p->GetXaxis()->SetTitleSize(0.05);
allcos1_cosab2p->GetYaxis()->SetTitleSize(0.05);
allcos1_cosab2p->SetLineColor(kYellow);
allcos1_cosab2p->Draw();
hallcos1_cosab2psame -> Draw("same");
hallcos1_cosab2pdiff -> Draw("same");
c21 ->SaveAs("./graph/flow1_ab2p/hallcos1_cosab2pcompare.gif");


c22 = new TCanvas("c22","hcos1_cosab2pUL-LS",400,360);
dif1 ->Rebin(50);
dif1 ->Add(hallcos1_cosab2pdiff,hallcos1_cosab2psame,1,-1);
dif1 ->SetTitle("hcos1_cos(a+b-2c) UL-LS");
dif1 ->Draw();
//allcos1_cosab2p->Draw("same");
dif1->GetXaxis()->SetTitle("cos1");
c22 ->SaveAs("./graph/flow1_ab2p/hallcos1_cosab2pdif.gif");


c23 = new TCanvas("c23","hallcos2_cosab2pLSUL",400,360);
TH1F *allcos2_cosab2p =new TH1F("allcos2_cos(#alpha+#beta-2c)","allcos2_cos(#alpha+#beta-2c)",2000,-1.,1.);
allcos2_cosab2p->SetTitle("cos(#alpha+#beta-2c)");
allcos2_cosab2p->GetXaxis()->SetTitle("cos2");
allcos2_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)UL&LS");
allcos2_cosab2p->GetYaxis()->SetLabelSize(0.025);
allcos2_cosab2p->GetXaxis()->SetTitleSize(0.05);
allcos2_cosab2p->GetYaxis()->SetTitleSize(0.05);
allcos2_cosab2p->SetLineColor(kYellow);
allcos2_cosab2p->GetYaxis()->SetRangeUser(-0.2,0.2);
allcos2_cosab2p->Draw();

hallcos2_cosab2psame -> Draw("same");
hallcos2_cosab2pdiff -> Draw("same");
c23 ->SaveAs("./graph/flow1_ab2p/hallcos2_cosab2pcompare.gif");


TH1F *dif2 = new TH1F("dif2","dif2",2000,-1,1);
c24 = new TCanvas("c24","hcos2_cosab2pUL-LS",400,360);
dif2 ->Rebin(50);
dif2 ->Add(hallcos2_cosab2pdiff,hallcos2_cosab2psame,1,-1);
dif2 ->SetTitle("hcos2_cos(a+b-2psi_pp)UL-LS");
dif2 ->Draw();
allcos2_cosab2p->Draw("same");
dif2->GetXaxis()->SetTitle("cos2");
c24 ->SaveAs("./graph/flow1_ab2p/hallcos2_cosab2pdif.gif");

}
