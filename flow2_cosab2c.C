void flow2_cosab2c()
{
TFile* in_file= new TFile("8_Eta3_psi=ran.root");

c1 = new TCanvas("c1","hv1square_cosab2call",480,450);
hv1square_cosab2ctotal->SetLineColor(kBlack);
hv1square_cosab2ctotal->Draw();
hv1square_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hv1square_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hv1square_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hv1square_cosab2cplus->SetLineColor(kOrange);
hv1square_cosab2cplus->Draw("same");
hv1square_cosab2cminus->SetLineColor(kRed);
hv1square_cosab2cminus->Draw("same");
hv1square_cosab2csame->SetLineColor(kGreen);
hv1square_cosab2csame->Draw("same");
hv1square_cosab2cdiff->SetLineColor(kBlue);
hv1square_cosab2cdiff->Draw("same");

c1->SaveAs("./graph/flow2_ab2c/hv1square_cosab2call.gif");


c2 = new TCanvas("c2","hv1square_cosab2total",480,450);
hv1square_cosab2ctotal->SetLineColor(kBlack);
hv1square_cosab2ctotal->Draw();
hv1square_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hv1square_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hv1square_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c2->SaveAs("./graph/flow2_ab2c/hv1square_cosab2ctotal.gif");



c3 = new TCanvas("c3","hv1square_cosab2plus",480,450);
hv1square_cosab2cplus->SetLineColor(kOrange);
hv1square_cosab2cplus->Draw();
hv1square_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hv1square_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hv1square_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c3->SaveAs("./graph/flow2_ab2c/hv1square_cosab2cplus.gif");

c4 = new TCanvas("c4","hv1square_cosab2minus",480,450);
hv1square_cosab2cminus->SetLineColor(kRed);
hv1square_cosab2cminus->Draw();
hv1square_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hv1square_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hv1square_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c4->SaveAs("./graph/flow2_ab2c/hv1square_cosab2cminus.gif");

c5 = new TCanvas("c5","hv1square_cosab2same",480,450);
hv1square_cosab2csame->SetLineColor(kGreen);
hv1square_cosab2csame->Draw();
hv1square_cosab2csame->GetXaxis()->SetTitle("Centrality");
hv1square_cosab2csame->GetYaxis()->SetTitle("cosab2csame");
hv1square_cosab2csame->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2csame->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2csame->GetYaxis()->SetTitleSize(0.05);
c5->SaveAs("./graph/flow2_ab2c/hv1square_cosab2csame.gif");

c6 = new TCanvas("c6","hv1square_cosab2diff",480,450);
hv1square_cosab2cdiff->SetLineColor(kBlue);
hv1square_cosab2cdiff->Draw();
hv1square_cosab2cdiff->GetXaxis()->SetTitle("Centrality");
hv1square_cosab2cdiff->GetYaxis()->SetTitle("cosab2cdiff");
hv1square_cosab2cdiff->GetYaxis()->SetLabelSize(0.025);
hv1square_cosab2cdiff->GetXaxis()->SetTitleSize(0.05);
hv1square_cosab2cdiff->GetYaxis()->SetTitleSize(0.05);
c6->SaveAs("./graph/flow2_ab2c/hv1square_cosab2cdiff.gif");




c7 = new TCanvas("c7","hallv1square_cosab2call",480,450);
hallv1square_cosab2ctotal->SetLineColor(kBlack);
hallv1square_cosab2ctotal->Draw();
hallv1square_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallv1square_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hallv1square_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hallv1square_cosab2cplus->SetLineColor(kOrange);
hallv1square_cosab2cplus->Draw("same");
hallv1square_cosab2cminus->SetLineColor(kRed);
hallv1square_cosab2cminus->Draw("same");

c7->SaveAs("./graph/flow2_ab2c/hallv1square_cosab2call.gif");


c8 = new TCanvas("c8","hallv1square_cosab2total",480,450);
hallv1square_cosab2ctotal->SetLineColor(kBlack);
hallv1square_cosab2ctotal->Draw();
hallv1square_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallv1square_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hallv1square_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c8->SaveAs("./graph/flow2_ab2c/hallv1square_cosab2ctotal.gif");



c9 = new TCanvas("c9","hallv1square_cosab2plus",480,450);
hallv1square_cosab2cplus->SetLineColor(kOrange);
hallv1square_cosab2cplus->Draw();
hallv1square_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hallv1square_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hallv1square_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c9->SaveAs("./graph/flow2_ab2c/hallv1square_cosab2cplus.gif");

c10 = new TCanvas("c10","hallv1square_cosab2minus",480,450);
hallv1square_cosab2cminus->SetLineColor(kRed);
hallv1square_cosab2cminus->Draw();
hallv1square_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hallv1square_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hallv1square_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c10->SaveAs("./graph/flow2_ab2c/hallv1square_cosab2cminus.gif");


c11 = new TCanvas("c11","hallv1square_cosab2same",480,450);
hallv1square_cosab2csame->SetLineColor(kGreen);
hallv1square_cosab2csame->Draw();
hallv1square_cosab2csame->GetXaxis()->SetTitle("Centrality");
hallv1square_cosab2csame->GetYaxis()->SetTitle("cosab2csame");
hallv1square_cosab2csame->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2csame->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2csame->GetYaxis()->SetTitleSize(0.05);
c11->SaveAs("./graph/flow2_ab2c/hallv1square_cosab2csame.gif");

c12 = new TCanvas("c12","hallv1square_cosab2diff",480,450);
hallv1square_cosab2cdiff->SetLineColor(kBlue);
hallv1square_cosab2cdiff->Draw();
hallv1square_cosab2cdiff->GetXaxis()->SetTitle("Centrality");
hallv1square_cosab2cdiff->GetYaxis()->SetTitle("cosab2cdiff");
hallv1square_cosab2cdiff->GetYaxis()->SetLabelSize(0.025);
hallv1square_cosab2cdiff->GetXaxis()->SetTitleSize(0.05);
hallv1square_cosab2cdiff->GetYaxis()->SetTitleSize(0.05);
c12->SaveAs("./graph/flow2_ab2c/hallv1square_cosab2cdiff.gif");



c13 = new TCanvas("c13","hv2square_cosab2call",480,450);
hv2square_cosab2ctotal->SetLineColor(kBlack);
hv2square_cosab2ctotal->Draw();
hv2square_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hv2square_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hv2square_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hv2square_cosab2cplus->SetLineColor(kOrange);
hv2square_cosab2cplus->Draw("same");
hv2square_cosab2cminus->SetLineColor(kRed);
hv2square_cosab2cminus->Draw("same");

c13->SaveAs("./graph/flow2_ab2c/hv2square_cosab2call.gif");


c14 = new TCanvas("c14","hv2square_cosab2total",480,450);
hv2square_cosab2ctotal->SetLineColor(kBlack);
hv2square_cosab2ctotal->Draw();
hv2square_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hv2square_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hv2square_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c14->SaveAs("./graph/flow2_ab2c/hv2square_cosab2ctotal.gif");



c15 = new TCanvas("c15","hv2square_cosab2plus",480,450);
hv2square_cosab2cplus->SetLineColor(kOrange);
hv2square_cosab2cplus->Draw();
hv2square_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hv2square_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hv2square_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c15->SaveAs("./graph/flow2_ab2c/hv2square_cosab2cplus.gif");

c16 = new TCanvas("c16","hv2square_cosab2minus",480,450);
hv2square_cosab2cminus->SetLineColor(kRed);
hv2square_cosab2cminus->Draw();
hv2square_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hv2square_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hv2square_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c16->SaveAs("./graph/flow2_ab2c/hv2square_cosab2cminus.gif");


c17 = new TCanvas("c17","hv2square_cosab2same",480,450);
hv2square_cosab2csame->SetLineColor(kGreen);
hv2square_cosab2csame->Draw();
hv2square_cosab2csame->GetXaxis()->SetTitle("Centrality");
hv2square_cosab2csame->GetYaxis()->SetTitle("cosab2csame");
hv2square_cosab2csame->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2csame->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2csame->GetYaxis()->SetTitleSize(0.05);
c17->SaveAs("./graph/flow2_ab2c/hv2square_cosab2csame.gif");

c18 = new TCanvas("c18","hv2square_cosab2diff",480,450);
hv2square_cosab2cdiff->SetLineColor(kBlue);
hv2square_cosab2cdiff->Draw();
hv2square_cosab2cdiff->GetXaxis()->SetTitle("Centrality");
hv2square_cosab2cdiff->GetYaxis()->SetTitle("cosab2cdiff");
hv2square_cosab2cdiff->GetYaxis()->SetLabelSize(0.025);
hv2square_cosab2cdiff->GetXaxis()->SetTitleSize(0.05);
hv2square_cosab2cdiff->GetYaxis()->SetTitleSize(0.05);
c18->SaveAs("./graph/flow2_ab2c/hv2square_cosab2cdiff.gif");



c19 = new TCanvas("c19","hallv2square_cosab2call",480,450);
hallv2square_cosab2ctotal->SetLineColor(kBlack);
hallv2square_cosab2ctotal->Draw();
hallv2square_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallv2square_cosab2ctotal->GetYaxis()->SetTitle("cosab2c");
hallv2square_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hallv2square_cosab2cplus->SetLineColor(kOrange);
hallv2square_cosab2cplus->Draw("same");
hallv2square_cosab2cminus->SetLineColor(kRed);
hallv2square_cosab2cminus->Draw("same");

c19->SaveAs("./graph/flow2_ab2c/hallv2square_cosab2call.gif");


c20 = new TCanvas("c20","hallv2square_cosab2total",480,450);
hallv2square_cosab2ctotal->SetLineColor(kBlack);
hallv2square_cosab2ctotal->Draw();
hallv2square_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hallv2square_cosab2ctotal->GetYaxis()->SetTitle("cosab2ctotal");
hallv2square_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
c20->SaveAs("./graph/flow2_ab2c/hallv2square_cosab2ctotal.gif");



c21 = new TCanvas("c21","hallv2square_cosab2plus",480,450);
hallv2square_cosab2cplus->SetLineColor(kOrange);
hallv2square_cosab2cplus->Draw();
hallv2square_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hallv2square_cosab2cplus->GetYaxis()->SetTitle("cosab2cplus");
hallv2square_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2cplus->GetYaxis()->SetTitleSize(0.05);
c21->SaveAs("./graph/flow2_ab2c/hallv2square_cosab2cplus.gif");

c22 = new TCanvas("c22","hallv2square_cosab2minus",480,450);
hallv2square_cosab2cminus->SetLineColor(kRed);
hallv2square_cosab2cminus->Draw();
hallv2square_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hallv2square_cosab2cminus->GetYaxis()->SetTitle("cosab2cminus");
hallv2square_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2cminus->GetYaxis()->SetTitleSize(0.05);
c22->SaveAs("./graph/flow2_ab2c/hallv2square_cosab2cminus.gif");


c23 = new TCanvas("c23","hallv2square_cosab2same",480,450);
hallv2square_cosab2csame->SetLineColor(kGreen);
hallv2square_cosab2csame->Draw();
hallv2square_cosab2csame->GetXaxis()->SetTitle("Centrality");
hallv2square_cosab2csame->GetYaxis()->SetTitle("cosab2csame");
hallv2square_cosab2csame->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2csame->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2csame->GetYaxis()->SetTitleSize(0.05);
c23->SaveAs("./graph/flow2_ab2c/hallv2square_cosab2csame.gif");

c24 = new TCanvas("c24","hallv2square_cosab2diff",480,450);
hallv2square_cosab2cdiff->SetLineColor(kBlue);
hallv2square_cosab2cdiff->Draw();
hallv2square_cosab2cdiff->GetXaxis()->SetTitle("Centrality");
hallv2square_cosab2cdiff->GetYaxis()->SetTitle("cosab2cdiff");
hallv2square_cosab2cdiff->GetYaxis()->SetLabelSize(0.025);
hallv2square_cosab2cdiff->GetXaxis()->SetTitleSize(0.05);
hallv2square_cosab2cdiff->GetYaxis()->SetTitleSize(0.05);
c24 ->SaveAs("./graph/flow2_ab2c/hallv2square_cosab2cdiff.gif");


TH1F *dif = new TH1F("dif","dif",2000,-1,1);
c25 = new TCanvas("c25","hv1square_cosab2cLSUL",480,450);
TH1F *v1square_cosab2c =new TH1F("v1square_cos(#alpha+#beta-2c)","v1square_cos(#alpha+#beta-2c)",2000,-1.,1.);
v1square_cosab2c->SetTitle("cos(#alpha+#beta-2c), UL&LS");
v1square_cosab2c->GetXaxis()->SetTitle("v1square");
v1square_cosab2c->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
v1square_cosab2c->GetYaxis()->SetLabelSize(0.025);
v1square_cosab2c->GetXaxis()->SetTitleSize(0.05);
v1square_cosab2c->GetYaxis()->SetTitleSize(0.05);
v1square_cosab2c->SetLineColor(kYellow);
v1square_cosab2c->GetXaxis()->SetRangeUser(-0.6,0.6);
v1square_cosab2c->GetYaxis()->SetRangeUser(-0.2,0.2);
v1square_cosab2c->Draw();
hv1square_cosab2csame -> Draw("same");
hv1square_cosab2cdiff -> Draw("same");

c25 ->SaveAs("./graph/flow1_ab2c/hv1square_cosab2ccompare.gif");

c26 = new TCanvas("c26","hv1square_cosab2cUL-LS",480,450);
dif ->Add(hv1square_cosab2cdiff,hv1square_cosab2csame,1,-1);
dif ->SetTitle("hv1square_cos(a+b-2c) UL-LS");
dif -> GetXaxis()->SetRangeUser(-0.6,0.6);
dif -> GetYaxis()->SetRangeUser(-0.2,0.2);
dif ->Draw();
v1square_cosab2c->Draw("same");
c26 ->SaveAs("./graph/flow1_ab2c/hv1square_cosab2cdif.gif");

c27 = new TCanvas("c27","hallv1square_cosab2cLSUL",480,450);
TH1F *allv1square_cosab2c =new TH1F("allv1square_cos(#alpha+#beta-2c)","allv1square_cos(#alpha+#beta-2c)",2000,-1.,1.);
allv1square_cosab2c->SetTitle("cos(#alpha+#beta-2c), UL&LS");
allv1square_cosab2c->GetXaxis()->SetTitle("allv1square");
allv1square_cosab2c->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
allv1square_cosab2c->GetYaxis()->SetLabelSize(0.025);
allv1square_cosab2c->GetXaxis()->SetTitleSize(0.05);
allv1square_cosab2c->GetYaxis()->SetTitleSize(0.05);
allv1square_cosab2c->SetLineColor(kYellow);
allv1square_cosab2c->Draw();
allv1square_cosab2c-> GetXaxis()->SetRangeUser(-0.4,0.6);
allv1square_cosab2c-> GetYaxis()->SetRangeUser(-0.2,0.2);
hallv1square_cosab2csame -> Draw("same");
hallv1square_cosab2cdiff -> Draw("same");
c27 ->SaveAs("./graph/flow1_ab2c/hallv1square_cosab2ccompare.gif");

c28 = new TCanvas("c28","allhv1square_cosab2cUL-LS",480,450);
dif -> Add(hallv1square_cosab2cdiff,hallv1square_cosab2csame,1,-1);
dif -> SetTitle("allhv1square_cos(a+b-2c) UL-LS");
dif -> GetXaxis()->SetRangeUser(-0.6,0.6);
dif -> GetYaxis()->SetRangeUser(-0.2,0.2);
dif -> Draw();
allv1square_cosab2c->Draw("same");
c28 ->SaveAs("./graph/flow1_ab2c/hallv1square_cosab2cdif.gif");


c29 = new TCanvas("c29","hv2square_cosab2cLSUL",480,450);
TH1F *v2square_cosab2c =new TH1F("v2square_cos(#alpha+#beta-2c)","v2square_cos(#alpha+#beta-2c)",2000,-1.,1.);
v2square_cosab2c->GetXaxis()->SetRangeUser(-0.6,0.6);
v2square_cosab2c->GetYaxis()->SetRangeUser(-0.2,0.2);
v2square_cosab2c->SetTitle("cos(#alpha+#beta-2c), UL&LS");
v2square_cosab2c->GetXaxis()->SetTitle("v2square");
v2square_cosab2c->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
v2square_cosab2c->GetYaxis()->SetLabelSize(0.025);
v2square_cosab2c->GetXaxis()->SetTitleSize(0.05);
v2square_cosab2c->GetYaxis()->SetTitleSize(0.05);
v2square_cosab2c->SetLineColor(kYellow);
v2square_cosab2c->Draw();
hv2square_cosab2csame -> Draw("same");
hv2square_cosab2cdiff -> Draw("same");
c29 ->SaveAs("./graph/flow1_ab2c/hv2square_cosab2ccompare.gif");

c30 = new TCanvas("c30","hv2square_cosab2cUL-LS",480,450);
dif -> Add(hv2square_cosab2cdiff,hv2square_cosab2csame,1,-1);
dif -> SetTitle("hv2square_cos(a+b-2c) UL-LS");
dif -> Draw();
v2square_cosab2c->Draw("same");
c30 ->SaveAs("./graph/flow1_ab2c/hv2square_cosab2cdif.gif");

c31 = new TCanvas("c31","hallv2square_cosab2cLSUL",480,450);
TH1F *allv2square_cosab2c =new TH1F("allv2square_cos(#alpha+#beta-2c)","allv2square_cos(#alpha+#beta-2c)",2000,-1.,1.);
allv2square_cosab2c-> GetXaxis()->SetRangeUser(-0.4,0.6);
allv2square_cosab2c-> GetYaxis()->SetRangeUser(-0.2,0.2);
allv2square_cosab2c->SetTitle("cos(#alpha+#beta-2c), UL&LS");
allv2square_cosab2c->GetXaxis()->SetTitle("allv2square");
allv2square_cosab2c->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
allv2square_cosab2c->GetYaxis()->SetLabelSize(0.025);
allv2square_cosab2c->GetXaxis()->SetTitleSize(0.05);
allv2square_cosab2c->GetYaxis()->SetTitleSize(0.05);
allv2square_cosab2c->SetLineColor(kYellow);
allv2square_cosab2c->Draw();
hallv2square_cosab2csame -> Draw("same");
hallv2square_cosab2cdiff -> Draw("same");
c31 ->SaveAs("./graph/flow1_ab2c/hallv2square_cosab2ccompare.gif");

c32 = new TCanvas("c32","allhv2square_cosab2cLS-UL",480,450);
dif -> Add(hallv2square_cosab2cdiff,hallv2square_cosab2csame,1,-1);
dif -> SetTitle("allhv2square_cos(a+b-2c) LS-UL");
dif -> Draw();
dif -> GetXaxis()->SetRangeUser(-0.4,0.6);
allv2square_cosab2c->Draw("same");
c32 ->SaveAs("./graph/flow1_ab2c/hallv2square_cosab2cdif.gif");


}
