void flow1_cosab2c()
{
TFile* in_file= new TFile("8_Eta3_psi=ran.root");

c1 = new TCanvas("c1","hcos1_cosab2call",400,360);
hcos1_cosab2ctotal->Rebin(50);
hcos1_cosab2cplus->Rebin(50);
hcos1_cosab2cminus->Rebin(50);

hcos1_cosab2ctotal->SetLineColor(kBlack);
hcos1_cosab2ctotal->Draw();
hcos1_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hcos1_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hcos1_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hcos1_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hcos1_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hcos1_cosab2cplus->SetLineColor(kOrange);
hcos1_cosab2cplus->Draw("same");
hcos1_cosab2cminus->SetLineColor(kRed);
hcos1_cosab2cminus->Draw("same");

c1->SaveAs("./graph/flow1_ab2c/hcos1_cosab2call.gif");


c2 = new TCanvas("c2","hcos1_cosab2ctotal",400,360);
hcos1_cosab2ctotal->SetLineColor(kBlack);
hcos1_cosab2ctotal->Draw();
hcos1_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hcos1_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hcos1_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hcos1_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hcos1_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c2->SaveAs("./graph/flow1_ab2c/hcos1_cosab2ctotal.gif");



c3 = new TCanvas("c3","hcos1_cosab2cplus",400,360);
hcos1_cosab2cplus->SetLineColor(kOrange);
hcos1_cosab2cplus->Draw();
hcos1_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hcos1_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hcos1_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hcos1_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hcos1_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c3->SaveAs("./graph/flow1_ab2c/hcos1_cosab2cplus.gif");

c4 = new TCanvas("c4","hcos1_cosab2cminus",400,360);
hcos1_cosab2cminus->SetLineColor(kRed);
hcos1_cosab2cminus->Draw();
hcos1_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hcos1_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hcos1_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hcos1_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hcos1_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c4->SaveAs("./graph/flow1_ab2c/hcos1_cosab2cminus.gif");



c5 = new TCanvas("c5","hallcos1_cosab2call",400,360);
hallcos1_cosab2ctotal->Rebin(50);
hallcos1_cosab2cplus ->Rebin(50);
hallcos1_cosab2cminus ->Rebin(50);

hallcos1_cosab2ctotal->SetLineColor(kBlack);
hallcos1_cosab2ctotal->Draw();
hallcos1_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallcos1_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hallcos1_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hallcos1_cosab2cplus->SetLineColor(kOrange);
hallcos1_cosab2cplus->Draw("same");
hallcos1_cosab2cminus->SetLineColor(kRed);
hallcos1_cosab2cminus->Draw("same");
hallcos1_cosab2csame ->Rebin(50);
hallcos1_cosab2cdiff ->Rebin(50);


c5->SaveAs("./graph/flow1_ab2c/hallcos1_cosab2call.gif");


c6 = new TCanvas("c6","hallcos1_cosab2ctotal",400,360);
hallcos1_cosab2ctotal->SetLineColor(kBlack);
hallcos1_cosab2ctotal->Draw();
hallcos1_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallcos1_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hallcos1_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c6->SaveAs("./graph/flow1_ab2c/hallcos1_cosab2ctotal.gif");



c7 = new TCanvas("c7","hallcos1_cosab2cplus",400,360);
hallcos1_cosab2cplus->SetLineColor(kOrange);
hallcos1_cosab2cplus->Draw();
hallcos1_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hallcos1_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hallcos1_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c7->SaveAs("./graph/flow1_ab2c/hallcos1_cosab2cplus.gif");

c8 = new TCanvas("c8","hallcos1_cosab2cminus",400,360);
hallcos1_cosab2cminus->SetLineColor(kRed);
hallcos1_cosab2cminus->Draw();
hallcos1_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hallcos1_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hallcos1_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c8->SaveAs("./graph/flow1_ab2c/hallcos1_cosab2cminus.gif");


c9 = new TCanvas("c9","hallcos1_cosab2csame",400,360);
hallcos1_cosab2csame->SetLineColor(kGreen);
hallcos1_cosab2csame->Draw();
hallcos1_cosab2csame->GetXaxis()->SetTitle("Centrality");
hallcos1_cosab2csame->GetYaxis()->SetTitle("cosab2csame");
hallcos1_cosab2csame->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2csame->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2csame->GetYaxis()->SetTitleSize(0.05);
c9->SaveAs("./graph/flow1_ab2c/hallcos1_cosab2csame.gif");

c10 = new TCanvas("c10","hallcos1_cosab2diff",400,360);
hallcos1_cosab2cdiff->SetLineColor(kBlue);
hallcos1_cosab2cdiff->Draw();
hallcos1_cosab2cdiff->GetXaxis()->SetTitle("Centrality");
hallcos1_cosab2cdiff->GetYaxis()->SetTitle("cosab2cdiff");
hallcos1_cosab2cdiff->GetYaxis()->SetLabelSize(0.025);
hallcos1_cosab2cdiff->GetXaxis()->SetTitleSize(0.05);
hallcos1_cosab2cdiff->GetYaxis()->SetTitleSize(0.05);
c10 ->SaveAs("./graph/flow1_ab2c/hallcos1_cosab2cdiff.gif");




c11 = new TCanvas("c11","hcos2_cosab2call",400,360);
hcos2_cosab2ctotal->Rebin(50);
hcos2_cosab2cplus ->Rebin(50);
hcos2_cosab2cminus->Rebin(50);

hcos2_cosab2ctotal->SetLineColor(kBlack);
hcos2_cosab2ctotal->Draw();
hcos2_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hcos2_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hcos2_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hcos2_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hcos2_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hcos2_cosab2cplus->SetLineColor(kOrange);
hcos2_cosab2cplus->Draw("same");
hcos2_cosab2cminus->SetLineColor(kRed);
hcos2_cosab2cminus->Draw("same");

c11->SaveAs("./graph/flow1_ab2c/hcos2_cosab2call.gif");


c12 = new TCanvas("c12","hcos2_cosab2ctotal",400,360);
hcos2_cosab2ctotal->SetLineColor(kBlack);
hcos2_cosab2ctotal->Draw();
hcos2_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hcos2_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hcos2_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hcos2_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hcos2_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c12->SaveAs("./graph/flow1_ab2c/hcos2_cosab2ctotal.gif");



c13 = new TCanvas("c13","hcos2_cosab2cplus",400,360);
hcos2_cosab2cplus->SetLineColor(kOrange);
hcos2_cosab2cplus->Draw();
hcos2_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hcos2_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hcos2_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hcos2_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hcos2_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c13->SaveAs("./graph/flow1_ab2c/hcos2_cosab2cplus.gif");

c14 = new TCanvas("c14","hcos2_cosab2cminus",400,360);
hcos2_cosab2cminus->SetLineColor(kRed);
hcos2_cosab2cminus->Draw();
hcos2_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hcos2_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hcos2_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hcos2_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hcos2_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c14->SaveAs("./graph/flow1_ab2c/hcos2_cosab2cminus.gif");



c15 = new TCanvas("c15","hallcos2_cosab2call",400,360);
hallcos2_cosab2ctotal->Rebin(50);
hallcos2_cosab2cplus ->Rebin(50);
hallcos2_cosab2cminus->Rebin(50);
hallcos2_cosab2csame ->Rebin(50);
hallcos2_cosab2cdiff ->Rebin(50);

hallcos2_cosab2ctotal->SetLineColor(kBlack);
hallcos2_cosab2ctotal->Draw();
hallcos2_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallcos2_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hallcos2_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hallcos2_cosab2cplus->SetLineColor(kOrange);
hallcos2_cosab2cplus->Draw("same");
hallcos2_cosab2cminus->SetLineColor(kRed);
hallcos2_cosab2cminus->Draw("same");

c15->SaveAs("./graph/flow1_ab2c/hallcos2_cosab2call.gif");


c16 = new TCanvas("c16","hallcos2_cosab2ctotal",400,360);
hallcos2_cosab2ctotal->SetLineColor(kBlack);
hallcos2_cosab2ctotal->Draw();
hallcos2_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallcos2_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hallcos2_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c16->SaveAs("./graph/flow1_ab2c/hallcos2_cosab2ctotal.gif");



c17 = new TCanvas("c17","hallcos2_cosab2cplus",400,360);
hallcos2_cosab2cplus->SetLineColor(kOrange);
hallcos2_cosab2cplus->Draw();
hallcos2_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hallcos2_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hallcos2_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c17->SaveAs("./graph/flow1_ab2c/hallcos2_cosab2cplus.gif");

c18 = new TCanvas("c18","hallcos2_cosab2cminus",400,360);
hallcos2_cosab2cminus->SetLineColor(kRed);
hallcos2_cosab2cminus->Draw();
hallcos2_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hallcos2_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hallcos2_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c18->SaveAs("./graph/flow1_ab2c/hallcos2_cosab2cminus.gif");


c19 = new TCanvas("c19","hallcos2_cosab2csame",400,360);
hallcos2_cosab2csame->SetLineColor(kGreen);
hallcos2_cosab2csame->Draw();
hallcos2_cosab2csame->GetXaxis()->SetTitle("Centrality");
hallcos2_cosab2csame->GetYaxis()->SetTitle("cosab2csame");
hallcos2_cosab2csame->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2csame->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2csame->GetYaxis()->SetTitleSize(0.05);
c19->SaveAs("./graph/flow1_ab2c/hallcos2_cosab2csame.gif");

c20 = new TCanvas("c20","hallcos2_cosab2diff",400,360);
hallcos2_cosab2cdiff->SetLineColor(kBlue);
hallcos2_cosab2cdiff->Draw();
hallcos2_cosab2cdiff->GetXaxis()->SetTitle("Centrality");
hallcos2_cosab2cdiff->GetYaxis()->SetTitle("cosab2cdiff");
hallcos2_cosab2cdiff->GetYaxis()->SetLabelSize(0.025);
hallcos2_cosab2cdiff->GetXaxis()->SetTitleSize(0.05);
hallcos2_cosab2cdiff->GetYaxis()->SetTitleSize(0.05);
c20 ->SaveAs("./graph/flow1_ab2c/hallcos2_cosab2cdiff.gif");


TH1F *dif1 = new TH1F("dif1","dif1",2000,-1,1);
TH1F *dif2 = new TH1F("dif2","dif2",2000,-1,1);


c21 = new TCanvas("c21","hallcos1_cosab2cLSUL",400,360);
TH1F *allcos1_cosab2c =new TH1F("allcos1_cos(#alpha+#beta-2c)","allcos1_cos(#alpha+#beta-2c)",2000,-1.,1.);
allcos1_cosab2c->SetTitle("cos(#alpha+#beta-2c), UL&LS");
allcos1_cosab2c->GetYaxis()->SetRangeUser(-0.2,0.2);
allcos1_cosab2c->GetXaxis()->SetTitle("cos1");
allcos1_cosab2c->GetYaxis()->SetTitle("ranos(#alpha+#beta-2c)");
allcos1_cosab2c->GetYaxis()->SetLabelSize(0.025);
allcos1_cosab2c->GetXaxis()->SetTitleSize(0.05);
allcos1_cosab2c->GetYaxis()->SetTitleSize(0.05);
allcos1_cosab2c->SetLineColor(kYellow);
allcos1_cosab2c->Draw();
hallcos1_cosab2csame -> Draw("same");
hallcos1_cosab2cdiff -> Draw("same");
c21 ->SaveAs("./graph/flow1_ab2c/hallcos1_cosab2ccompare.gif");


c22 = new TCanvas("c22","hallcos1_cosab2cUL-LS",400,360);
dif1 ->Rebin(50);
dif1 ->Add(hallcos1_cosab2cdiff,hallcos1_cosab2csame,1,-1);
dif1 ->SetTitle("hallcos1_cos(a+b-2c) UL-LS");
dif1 ->Draw();
allcos1_cosab2c->Draw("same");
c22 ->SaveAs("./graph/flow1_ab2c/hallcos1_cosab2cdif.gif");


c23 = new TCanvas("c23","hallcos2_cosab2cLSUL",400,360);
TH1F *allcos2_cosab2c =new TH1F("allcos2_cos(#alpha+#beta-2c)","allcos2_cos(#alpha+#beta-2c)",2000,-1.,1.);
allcos2_cosab2c->SetTitle("cos(#alpha+#beta-2c)");
allcos2_cosab2c->GetXaxis()->SetTitle("cos2");
allcos2_cosab2c->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)UL&LS");
allcos2_cosab2c->GetYaxis()->SetLabelSize(0.025);
allcos2_cosab2c->GetXaxis()->SetTitleSize(0.05);
allcos2_cosab2c->GetYaxis()->SetTitleSize(0.05);
allcos2_cosab2c->SetLineColor(kYellow);
allcos2_cosab2c->GetYaxis()->SetRangeUser(-0.2,0.2);
allcos2_cosab2c->Draw();

hallcos2_cosab2csame -> Draw("same");
hallcos2_cosab2cdiff -> Draw("same");
c23 ->SaveAs("./graph/flow1_ab2c/hallcos2_cosab2ccompare.gif");



c24 = new TCanvas("c24","hallcos2_cosab2cUL-LS",400,360);
dif2 ->Rebin(50);
dif2 ->Add(hallcos2_cosab2cdiff,hallcos2_cosab2csame,1,-1);
dif2 ->SetTitle("hallcos2_cos(a+b-2c)UL-LS");
dif2 ->Draw();
allcos2_cosab2c->Draw("same");
c24 ->SaveAs("./graph/flow1_ab2c/hallcos2_cosab2cdif.gif");

}
