void flow3_cosab2c()
{
TFile* in_file= new TFile("7_Pion_psi=0.root");

c1 = new TCanvas("c1","hcos1ab_cosab2call",480,450);
hcos1ab_cosab2ctotal->SetLineColor(kBlack);
hcos1ab_cosab2ctotal->Draw();
hcos1ab_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hcos1ab_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hcos1ab_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hcos1ab_cosab2cplus->SetLineColor(kOrange);
hcos1ab_cosab2cplus->Draw("same");
hcos1ab_cosab2cminus->SetLineColor(kRed);
hcos1ab_cosab2cminus->Draw("same");
hcos1ab_cosab2csame->SetLineColor(kGreen);
hcos1ab_cosab2csame->Draw("same");
hcos1ab_cosab2cdiff->SetLineColor(kBlue);
hcos1ab_cosab2cdiff->Draw("same");

c1->SaveAs("./graph/flow2_ab2c/hcos1ab_cosab2call.gif");


c2 = new TCanvas("c2","hcos1ab_cosab2ctotal",480,450);
hcos1ab_cosab2ctotal->SetLineColor(kBlack);
hcos1ab_cosab2ctotal->Draw();
hcos1ab_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hcos1ab_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hcos1ab_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c2->SaveAs("./graph/flow2_ab2c/hcos1ab_cosab2ctotal.gif");



c3 = new TCanvas("c3","hcos1ab_cosab2cplus",480,450);
hcos1ab_cosab2cplus->SetLineColor(kOrange);
hcos1ab_cosab2cplus->Draw();
hcos1ab_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hcos1ab_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hcos1ab_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c3->SaveAs("./graph/flow2_ab2c/hcos1ab_cosab2cplus.gif");

c4 = new TCanvas("c4","hcos1ab_cosab2cminus",480,450);
hcos1ab_cosab2cminus->SetLineColor(kRed);
hcos1ab_cosab2cminus->Draw();
hcos1ab_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hcos1ab_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hcos1ab_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c4->SaveAs("./graph/flow2_ab2c/hcos1ab_cosab2cminus.gif");

c5 = new TCanvas("c5","hcos1ab_cosab2csame",480,450);
hcos1ab_cosab2csame->SetLineColor(kGreen);
hcos1ab_cosab2csame->Draw();
hcos1ab_cosab2csame->GetXaxis()->SetTitle("Centrality");
hcos1ab_cosab2csame->GetYaxis()->SetTitle("cosab2csame");
hcos1ab_cosab2csame->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2csame->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2csame->GetYaxis()->SetTitleSize(0.05);
c5->SaveAs("./graph/flow2_ab2c/hcos1ab_cosab2csame.gif");

c6 = new TCanvas("c6","hcos1ab_cosab2cdiff",480,450);
hcos1ab_cosab2cdiff->SetLineColor(kBlue);
hcos1ab_cosab2cdiff->Draw();
hcos1ab_cosab2cdiff->GetXaxis()->SetTitle("Centrality");
hcos1ab_cosab2cdiff->GetYaxis()->SetTitle("cosab2cdiff");
hcos1ab_cosab2cdiff->GetYaxis()->SetLabelSize(0.025);
hcos1ab_cosab2cdiff->GetXaxis()->SetTitleSize(0.05);
hcos1ab_cosab2cdiff->GetYaxis()->SetTitleSize(0.05);
c6->SaveAs("./graph/flow2_ab2c/hcos1ab_cosab2cdiff.gif");




c7 = new TCanvas("c7","hallcos1ab_cosab2call",480,450);
hallcos1ab_cosab2ctotal->SetLineColor(kBlack);
hallcos1ab_cosab2ctotal->Draw();
hallcos1ab_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallcos1ab_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hallcos1ab_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hallcos1ab_cosab2cplus->SetLineColor(kOrange);
hallcos1ab_cosab2cplus->Draw("same");
hallcos1ab_cosab2cminus->SetLineColor(kRed);
hallcos1ab_cosab2cminus->Draw("same");

c7->SaveAs("./graph/flow2_ab2c/hallcos1ab_cosab2call.gif");


c8 = new TCanvas("c8","hallcos1ab_cosab2ctotal",480,450);
hallcos1ab_cosab2ctotal->SetLineColor(kBlack);
hallcos1ab_cosab2ctotal->Draw();
hallcos1ab_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallcos1ab_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hallcos1ab_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c8->SaveAs("./graph/flow2_ab2c/hallcos1ab_cosab2ctotal.gif");



c9 = new TCanvas("c9","hallcos1ab_cosab2cplus",480,450);
hallcos1ab_cosab2cplus->SetLineColor(kOrange);
hallcos1ab_cosab2cplus->Draw();
hallcos1ab_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hallcos1ab_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hallcos1ab_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c9->SaveAs("./graph/flow2_ab2c/hallcos1ab_cosab2cplus.gif");

c10 = new TCanvas("c10","hallcos1ab_cosab2cminus",480,450);
hallcos1ab_cosab2cminus->SetLineColor(kRed);
hallcos1ab_cosab2cminus->Draw();
hallcos1ab_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hallcos1ab_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hallcos1ab_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c10->SaveAs("./graph/flow2_ab2c/hallcos1ab_cosab2cminus.gif");


c11 = new TCanvas("c11","hallcos1ab_cosab2csame",480,450);
hallcos1ab_cosab2csame->SetLineColor(kGreen);
hallcos1ab_cosab2csame->Draw();
hallcos1ab_cosab2csame->GetXaxis()->SetTitle("Centrality");
hallcos1ab_cosab2csame->GetYaxis()->SetTitle("cosab2csame");
hallcos1ab_cosab2csame->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2csame->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2csame->GetYaxis()->SetTitleSize(0.05);
c11->SaveAs("./graph/flow2_ab2c/hallcos1ab_cosab2csame.gif");

c12 = new TCanvas("c12","hallcos1ab_cosab2cdiff",480,450);
hallcos1ab_cosab2cdiff->SetLineColor(kBlue);
hallcos1ab_cosab2cdiff->Draw();
hallcos1ab_cosab2cdiff->GetXaxis()->SetTitle("Centrality");
hallcos1ab_cosab2cdiff->GetYaxis()->SetTitle("cosab2cdiff");
hallcos1ab_cosab2cdiff->GetYaxis()->SetLabelSize(0.025);
hallcos1ab_cosab2cdiff->GetXaxis()->SetTitleSize(0.05);
hallcos1ab_cosab2cdiff->GetYaxis()->SetTitleSize(0.05);
c12->SaveAs("./graph/flow2_ab2c/hallcos1ab_cosab2cdiff.gif");



c13 = new TCanvas("c13","hcos2ab_cosab2call",480,450);
hcos2ab_cosab2ctotal->SetLineColor(kBlack);
hcos2ab_cosab2ctotal->Draw();
hcos2ab_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hcos2ab_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hcos2ab_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hcos2ab_cosab2cplus->SetLineColor(kOrange);
hcos2ab_cosab2cplus->Draw("same");
hcos2ab_cosab2cminus->SetLineColor(kRed);
hcos2ab_cosab2cminus->Draw("same");

c13->SaveAs("./graph/flow2_ab2c/hcos2ab_cosab2call.gif");


c14 = new TCanvas("c14","hcos2ab_cosab2total",480,450);
hcos2ab_cosab2ctotal->SetLineColor(kBlack);
hcos2ab_cosab2ctotal->Draw();
hcos2ab_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hcos2ab_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hcos2ab_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c14->SaveAs("./graph/flow2_ab2c/hcos2ab_cosab2ctotal.gif");



c15 = new TCanvas("c15","hcos2ab_cosab2cplus",480,450);
hcos2ab_cosab2cplus->SetLineColor(kOrange);
hcos2ab_cosab2cplus->Draw();
hcos2ab_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hcos2ab_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hcos2ab_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c15->SaveAs("./graph/flow2_ab2c/hcos2ab_cosab2cplus.gif");

c16 = new TCanvas("c16","hcos2ab_cosab2cminus",480,450);
hcos2ab_cosab2cminus->SetLineColor(kRed);
hcos2ab_cosab2cminus->Draw();
hcos2ab_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hcos2ab_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hcos2ab_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c16->SaveAs("./graph/flow2_ab2c/hcos2ab_cosab2cminus.gif");


c17 = new TCanvas("c17","hcos2ab_cosab2csame",480,450);
hcos2ab_cosab2csame->SetLineColor(kGreen);
hcos2ab_cosab2csame->Draw();
hcos2ab_cosab2csame->GetXaxis()->SetTitle("Centrality");
hcos2ab_cosab2csame->GetYaxis()->SetTitle("cosab2csame");
hcos2ab_cosab2csame->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2csame->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2csame->GetYaxis()->SetTitleSize(0.05);
c17->SaveAs("./graph/flow2_ab2c/hcos2ab_cosab2csame.gif");

c18 = new TCanvas("c18","hcos2ab_cosab2cdiff",480,450);
hcos2ab_cosab2cdiff->SetLineColor(kBlue);
hcos2ab_cosab2cdiff->Draw();
hcos2ab_cosab2cdiff->GetXaxis()->SetTitle("Centrality");
hcos2ab_cosab2cdiff->GetYaxis()->SetTitle("cosab2cdiff");
hcos2ab_cosab2cdiff->GetYaxis()->SetLabelSize(0.025);
hcos2ab_cosab2cdiff->GetXaxis()->SetTitleSize(0.05);
hcos2ab_cosab2cdiff->GetYaxis()->SetTitleSize(0.05);
c18->SaveAs("./graph/flow2_ab2c/hcos2ab_cosab2cdiff.gif");



c19 = new TCanvas("c19","hallcos2ab_cosab2call",480,450);
hallcos2ab_cosab2ctotal->SetLineColor(kBlack);
hallcos2ab_cosab2ctotal->Draw();
hallcos2ab_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallcos2ab_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hallcos2ab_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hallcos2ab_cosab2cplus->SetLineColor(kOrange);
hallcos2ab_cosab2cplus->Draw("same");
hallcos2ab_cosab2cminus->SetLineColor(kRed);
hallcos2ab_cosab2cminus->Draw("same");

c19->SaveAs("./graph/flow2_ab2c/hallcos2ab_cosab2call.gif");


c20 = new TCanvas("c20","hallcos2ab_cosab2ctotal",480,450);
hallcos2ab_cosab2ctotal->SetLineColor(kBlack);
hallcos2ab_cosab2ctotal->Draw();
hallcos2ab_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallcos2ab_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hallcos2ab_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c20->SaveAs("./graph/flow2_ab2c/hallcos2ab_cosab2ctotal.gif");



c21 = new TCanvas("c21","hallcos2ab_cosab2cplus",480,450);
hallcos2ab_cosab2cplus->SetLineColor(kOrange);
hallcos2ab_cosab2cplus->Draw();
hallcos2ab_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hallcos2ab_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hallcos2ab_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c21->SaveAs("./graph/flow2_ab2c/hallcos2ab_cosab2cplus.gif");

c22 = new TCanvas("c22","hallcos2ab_cosab2cminus",480,450);
hallcos2ab_cosab2cminus->SetLineColor(kRed);
hallcos2ab_cosab2cminus->Draw();
hallcos2ab_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hallcos2ab_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hallcos2ab_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c22->SaveAs("./graph/flow2_ab2c/hallcos2ab_cosab2cminus.gif");


c23 = new TCanvas("c23","hallcos2ab_cosab2csame",480,450);
hallcos2ab_cosab2csame->SetLineColor(kGreen);
hallcos2ab_cosab2csame->Draw();
hallcos2ab_cosab2csame->GetXaxis()->SetTitle("Centrality");
hallcos2ab_cosab2csame->GetYaxis()->SetTitle("cosab2csame");
hallcos2ab_cosab2csame->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2csame->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2csame->GetYaxis()->SetTitleSize(0.05);
c23->SaveAs("./graph/flow2_ab2c/hallcos2ab_cosab2csame.gif");

c24 = new TCanvas("c24","hallcos2ab_cosab2cdiff",480,450);
hallcos2ab_cosab2cdiff->SetLineColor(kBlue);
hallcos2ab_cosab2cdiff->Draw();
hallcos2ab_cosab2cdiff->GetXaxis()->SetTitle("Centrality");
hallcos2ab_cosab2cdiff->GetYaxis()->SetTitle("cosab2cdiff");
hallcos2ab_cosab2cdiff->GetYaxis()->SetLabelSize(0.025);
hallcos2ab_cosab2cdiff->GetXaxis()->SetTitleSize(0.05);
hallcos2ab_cosab2cdiff->GetYaxis()->SetTitleSize(0.05);
c24 ->SaveAs("./graph/flow2_ab2c/hallcos2ab_cosab2cdiff.gif");


TH1F *dif = new TH1F("dif","dif",2000,-1,1);
c25 = new TCanvas("c25","hcos1ab_cosab2cLSUL",480,450);
TH1F *cos1ab_cosab2c =new TH1F("cos1ab_cos(#alpha+#beta-2c)","cos1ab_cos(#alpha+#beta-2c)",2000,-1.,1.);
cos1ab_cosab2c->SetTitle("cos(#alpha+#beta-2c), UL&LS");
cos1ab_cosab2c->GetXaxis()->SetTitle("cos1ab");
cos1ab_cosab2c->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
cos1ab_cosab2c->GetYaxis()->SetLabelSize(0.025);
cos1ab_cosab2c->GetXaxis()->SetTitleSize(0.05);
cos1ab_cosab2c->GetYaxis()->SetTitleSize(0.05);
cos1ab_cosab2c->SetLineColor(kYellow);
cos1ab_cosab2c->GetXaxis()->SetRangeUser(-0.6,0.6);
cos1ab_cosab2c->GetYaxis()->SetRangeUser(-0.2,0.2);
cos1ab_cosab2c->Draw();
hcos1ab_cosab2csame -> Draw("same");
hcos1ab_cosab2cdiff -> Draw("same");

c25 ->SaveAs("./graph/flow1_ab2c/hcos1ab_cosab2ccompare.gif");

c26 = new TCanvas("c26","hcos1ab_cosab2cUL-LS",480,450);
dif ->Add(hcos1ab_cosab2cdiff,hcos1ab_cosab2csame,1,-1);
dif ->SetTitle("hcos1ab_cos(a+b-2c) UL-LS");
dif -> GetXaxis()->SetRangeUser(-0.6,0.6);
dif -> GetYaxis()->SetRangeUser(-0.2,0.2);
dif ->Draw();
cos1ab_cosab2c->Draw("same");
c26 ->SaveAs("./graph/flow1_ab2c/hcos1ab_cosab2cdif.gif");

c27 = new TCanvas("c27","hallcos1ab_cosab2cLSUL",480,450);
TH1F *allcos1ab_cosab2c =new TH1F("allcos1ab_cos(#alpha+#beta-2c)","allcos1ab_cos(#alpha+#beta-2c)",2000,-1.,1.);
allcos1ab_cosab2c->SetTitle("cos(#alpha+#beta-2c), UL&LS");
allcos1ab_cosab2c->GetXaxis()->SetTitle("allcos1ab");
allcos1ab_cosab2c->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
allcos1ab_cosab2c->GetYaxis()->SetLabelSize(0.025);
allcos1ab_cosab2c->GetXaxis()->SetTitleSize(0.05);
allcos1ab_cosab2c->GetYaxis()->SetTitleSize(0.05);
allcos1ab_cosab2c->SetLineColor(kYellow);
allcos1ab_cosab2c->Draw();
allcos1ab_cosab2c-> GetXaxis()->SetRangeUser(-0.4,0.6);
allcos1ab_cosab2c-> GetYaxis()->SetRangeUser(-0.2,0.2);
hallcos1ab_cosab2csame -> Draw("same");
hallcos1ab_cosab2cdiff -> Draw("same");
c27 ->SaveAs("./graph/flow1_ab2c/hallcos1ab_cosab2ccompare.gif");

c28 = new TCanvas("c28","allhcos1ab_cosab2cUL-LS",480,450);
dif -> Add(hallcos1ab_cosab2cdiff,hallcos1ab_cosab2csame,1,-1);
dif -> SetTitle("allhcos1ab_cos(a+b-2c) UL-LS");
dif -> GetXaxis()->SetRangeUser(-0.6,0.6);
dif -> GetYaxis()->SetRangeUser(-0.2,0.2);
dif -> Draw();
allcos1ab_cosab2c->Draw("same");
c28 ->SaveAs("./graph/flow1_ab2c/hallcos1ab_cosab2cdif.gif");


c29 = new TCanvas("c29","hcos2ab_cosab2cLSUL",480,450);
TH1F *cos2ab_cosab2c =new TH1F("cos2ab_cos(#alpha+#beta-2c)","cos2ab_cos(#alpha+#beta-2c)",2000,-1.,1.);
cos2ab_cosab2c->GetXaxis()->SetRangeUser(-0.6,0.6);
cos2ab_cosab2c->GetYaxis()->SetRangeUser(-0.2,0.2);
cos2ab_cosab2c->SetTitle("cos(#alpha+#beta-2c), UL&LS");
cos2ab_cosab2c->GetXaxis()->SetTitle("cos2ab");
cos2ab_cosab2c->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
cos2ab_cosab2c->GetYaxis()->SetLabelSize(0.025);
cos2ab_cosab2c->GetXaxis()->SetTitleSize(0.05);
cos2ab_cosab2c->GetYaxis()->SetTitleSize(0.05);
cos2ab_cosab2c->SetLineColor(kYellow);
cos2ab_cosab2c->Draw();
hcos2ab_cosab2csame -> Draw("same");
hcos2ab_cosab2cdiff -> Draw("same");
c29 ->SaveAs("./graph/flow1_ab2c/hcos2ab_cosab2ccompare.gif");

c30 = new TCanvas("c30","hcos2ab_cosab2cUL-LS",480,450);
dif -> Add(hcos2ab_cosab2cdiff,hcos2ab_cosab2csame,1,-1);
dif -> SetTitle("hcos2ab_cos(a+b-2c) UL-LS");
dif -> Draw();
cos2ab_cosab2c->Draw("same");
c30 ->SaveAs("./graph/flow1_ab2c/hcos2ab_cosab2cdif.gif");

c31 = new TCanvas("c31","hallcos2ab_cosab2cLSUL",480,450);
TH1F *allcos2ab_cosab2c =new TH1F("allcos2ab_cos(#alpha+#beta-2c)","allcos2ab_cos(#alpha+#beta-2c)",2000,-1.,1.);
allcos2ab_cosab2c-> GetXaxis()->SetRangeUser(-0.4,0.6);
allcos2ab_cosab2c-> GetYaxis()->SetRangeUser(-0.2,0.2);
allcos2ab_cosab2c->SetTitle("cos(#alpha+#beta-2c), UL&LS");
allcos2ab_cosab2c->GetXaxis()->SetTitle("allcos2ab");
allcos2ab_cosab2c->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
allcos2ab_cosab2c->GetYaxis()->SetLabelSize(0.025);
allcos2ab_cosab2c->GetXaxis()->SetTitleSize(0.05);
allcos2ab_cosab2c->GetYaxis()->SetTitleSize(0.05);
allcos2ab_cosab2c->SetLineColor(kYellow);
allcos2ab_cosab2c->Draw();
hallcos2ab_cosab2csame -> Draw("same");
hallcos2ab_cosab2cdiff -> Draw("same");
c31 ->SaveAs("./graph/flow1_ab2c/hallcos2ab_cosab2ccompare.gif");

c32 = new TCanvas("c32","allhcos2ab_cosab2cLS-UL",480,450);
dif -> Add(hallcos2ab_cosab2cdiff,hallcos2ab_cosab2csame,1,-1);
dif -> SetTitle("allhcos2ab_cos(a+b-2c) LS-UL");
dif -> Draw();
dif -> GetXaxis()->SetRangeUser(-0.4,0.6);
allcos2ab_cosab2c->Draw("same");
c32 ->SaveAs("./graph/flow1_ab2c/hallcos2ab_cosab2cdif.gif");


}
