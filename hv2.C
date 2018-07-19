void hv2()
{
TFile* in_file= new TFile("2_Pion_psi=0.root");

c0 = new TCanvas("c0","v2",640,600);


c1 = new TCanvas("c1","v2_cos(a+b-2c)",640,600);
hv2_cosab2ctotal->SetLineColor(kBlack);
hv2_cosab2ctotal->Draw();
hv2_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hv2_cosab2ctotal->GetYaxis()->SetTitle("cos(a+b-2c)");
hv2_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hv2_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hv2_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);
hv2_cosab2ctotal->GetXaxis()->SetRangeUser(-0.2,0.3);
hv2_cosab2ctotal->GetYaxis()->SetRangeUser(-0.05,0.05);

hv2_cosab2cplus->SetLineColor(kOrange);
hv2_cosab2cplus->Draw("same");
hv2_cosab2cminus->SetLineColor(kRed);
hv2_cosab2cminus->Draw("same");
hv2_cosab2csame->SetLineColor(kGreen);
hv2_cosab2csame->Draw("same");
hv2_cosab2cdiff->SetLineColor(kBlue);
hv2_cosab2cdiff->Draw("same");

leg = new TLegend(0.1,0.7,0.5,0.9);
leg->SetHeader("cos(a+b-2#phi_pp)");
leg->AddEntry(hv2_cosab2cplus,"same charge,++","l");
leg->AddEntry(hv2_cosab2cminus,"same charge,--","l");
leg->AddEntry(hv2_cosab2csame,"same charge ,all","l");
leg->AddEntry(hv2_cosab2cdiff,"different charge ,all","l");
leg->AddEntry(hv2_cosab2ctotal,"all","l");
c1->SaveAs("./graph/hv2/v2_cosab2call.gif");


c2 = new TCanvas("c2","v2_cos(a+b-2#phi_pp)",640,600);
hv2_cosab2ptotal->SetLineColor(kBlack);
hv2_cosab2ptotal->Draw();
hv2_cosab2ptotal->GetXaxis()->SetTitle("Centrality");
hv2_cosab2ptotal->GetYaxis()->SetTitle("cos(a+b-2#phi_pp)");
hv2_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hv2_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hv2_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);
hv2_cosab2ptotal->GetXaxis()->SetRangeUser(-0.2,0.3);
hv2_cosab2ptotal->GetYaxis()->SetRangeUser(-0.05,0.05);

hv2_cosab2ptotal->GetXaxis()->SetRangeUser(-0.1,0.2);
hv2_cosab2ptotal->GetYaxis()->SetRangeUser(-0.1,0.1);

hv2_cosab2pplus->SetLineColor(kOrange);
hv2_cosab2pplus->Draw("same");
hv2_cosab2pminus->SetLineColor(kRed);
hv2_cosab2pminus->Draw("same");
hv2_cosab2psame->SetLineColor(kGreen);
hv2_cosab2psame->Draw("same");
hv2_cosab2pdiff->SetLineColor(kBlue);
hv2_cosab2pdiff->Draw("same");

leg = new TLegend(0.1,0.7,0.4,0.9);
leg->SetHeader("cos(a+b-2#phi_pp)");
leg->AddEntry(hv2_cosab2pplus,"same charge,++","l");
leg->AddEntry(hv2_cosab2pminus,"same charge,--","l");
leg->AddEntry(hv2_cosab2psame,"same charge ,all","l");
leg->AddEntry(hv2_cosab2pdiff,"different charge ,all","l");
leg->AddEntry(hv2_cosab2ptotal,"all","l");

leg->Draw();

c2->SaveAs("./graph/hv2/v2_cosab2pall.gif");

c3 = new TCanvas("c3","v2_cos(a+b-2c)LSUL",640,600);
TH1F *v2_cosab2c =new TH1F("v2_cos(#alpha+#beta-2c)","v2_cos(#alpha+#beta-2c)",1000,-1.,1.);
v2_cosab2c->GetYaxis()->SetRangeUser(-0.001,0.001);
v2_cosab2c->GetXaxis()->SetTitle("v2");
v2_cosab2c->GetYaxis()->SetTitle("cos(#alpha+#beta-2#psi_pp)");
v2_cosab2c->GetYaxis()->SetLabelSize(0.025);
v2_cosab2c->GetXaxis()->SetTitleSize(0.05);
v2_cosab2c->GetYaxis()->SetTitleSize(0.05);
v2_cosab2c->SetLineColor(kYellow);
v2_cosab2c->Draw();

v2_cosab2c->GetYaxis()->SetRangeUser(-0.03,0.03);
v2_cosab2c->GetXaxis()->SetRangeUser(-0.10,0.20);

hv2_cosab2csame->SetLineColor(kGreen);
hv2_cosab2csame->Draw("same");
hv2_cosab2cdiff->SetLineColor(kBlue);
hv2_cosab2cdiff->Draw("same");
leg = new TLegend(0.58,0.1,0.9,0.3);
leg->SetHeader("cos(a+b-2#phi_pp) UL-LS");
leg->AddEntry(hcent_cosab2csame,"same charge ,all","l");
leg->AddEntry(hcent_cosab2cdiff,"different charge ,all","l");
c3 -> SaveAs("./graph/hv2/v2_cosab2ccompare.gif");

c4 = new TCanvas("c4","cos(a+b-2c)LS-UL",640,600);
TH1F *dif = new TH1F("dif","dif",2000,-1,1);
dif -> SetTitle("cos(a+b-2)UL-LS");
dif -> GetXaxis()->SetRangeUser(-0.1,0.2);
dif -> GetYaxis()->SetRangeUser(-0.01,0.01);
dif -> Add(hv2_cosab2cdiff,hv2_cosab2csame,1,-1);
dif -> Draw();
v2_cosab2c-> Draw("same");
c4->SaveAs("./graph/hv2/v2_cosab2c_dif.gif");



c5 = new TCanvas("c5","v2_cos(a+b-2psi_pp)LSUL",640,600);
TH1F *v2_cosab2p =new TH1F("v2_cos(#alpha+#beta-2#psi_pp)","v2_cos(#alpha+#beta-2#psi_pp)",2000,-1.,1.);
v2_cosab2p->GetYaxis()->SetRangeUser(-0.001,0.001);
v2_cosab2p->GetXaxis()->SetTitle("v2");
v2_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2#psi_pp)");
v2_cosab2p->GetYaxis()->SetLabelSize(0.025);
v2_cosab2p->GetXaxis()->SetTitleSize(0.05);
v2_cosab2p->GetYaxis()->SetTitleSize(0.05);
v2_cosab2p->SetLineColor(kYellow);
v2_cosab2p->Draw();

v2_cosab2p->GetYaxis()->SetRangeUser(-0.05,0.05);
v2_cosab2p->GetXaxis()->SetRangeUser(-0.10,0.20);
hv2_cosab2psame->SetLineColor(kGreen);
hv2_cosab2psame->Draw("same");
hv2_cosab2pdiff->SetLineColor(kBlue);
hv2_cosab2pdiff->Draw("same");
leg = new TLegend(0.58,0.1,0.9,0.3);
leg->SetHeader("cos(a+b-2#psi_pp)");
leg->AddEntry(hcent_cosab2psame,"same charge ,all","l");
leg->AddEntry(hcent_cosab2pdiff,"different charge ,all","l");
c5 -> SaveAs("./graph/hv2/cent_cosab2pcompare.gif");


c6 = new TCanvas("c6","cos(a+b-2p)LSUL",640,600);
TH1F *dif = new TH1F("dif","dif",2000,-1,1);
dif -> Add(hv2_cosab2pdiff,hv2_cosab2psame,1,-1);
dif -> GetXaxis()->SetRangeUser(-0.1,0.2);
dif -> GetYaxis()->SetRangeUser(-0.1,0.1);
dif -> SetTitle("cos(a+b-2#phi_pp)UL-LS");
dif -> Draw();
v2_cosab2p -> Draw("same");
c6->SaveAs("./graph/hv2/v2_cosab2p_dif.gif");
}
