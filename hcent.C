void hcent()
{

TFile* in_file= new TFile("8_Eta3_psi=ran.root");

c0 = new TCanvas("c0","v2square",400,360);
hcent_v2squaretotal->SetLineColor(kBlack);
hcent_v2squaretotal->Draw();
hcent_v2squaretotal->GetXaxis()->SetTitle("Centrality");
hcent_v2squaretotal->GetYaxis()->SetTitle("v2square");
hcent_v2squaretotal->GetYaxis()->SetLabelSize(0.025);
hcent_v2squaretotal->GetXaxis()->SetTitleSize(0.05);
hcent_v2squaretotal->GetYaxis()->SetTitleSize(0.05);

c0->SaveAs("./graph/hcent/v2.gif");

c1 = new TCanvas("c1","v2square_compare",400,360);
hcent_v2squaretotal->SetLineColor(kBlack);
hcent_v2squaretotal->Draw();
hcent_v2squaretotal->GetXaxis()->SetTitle("Centrality");
hcent_v2squaretotal->GetYaxis()->SetTitle("v2square");
hcent_v2squaretotal->GetYaxis()->SetLabelSize(0.025);
hcent_v2squaretotal->GetXaxis()->SetTitleSize(0.05);
hcent_v2squaretotal->GetYaxis()->SetTitleSize(0.05);

hcent_v2squareplus->SetLineColor(kOrange);
hcent_v2squareplus->Draw("same");
hcent_v2squareminus->SetLineColor(kRed);
hcent_v2squareminus->Draw("same");
hcent_v2squaresame->SetLineColor(kGreen);
hcent_v2squaresame->Draw("same");
hcent_v2squarediff->SetLineColor(kBlue);
hcent_v2squarediff->Draw("same");

leg = new TLegend(0.1,0.1,0.48,0.3);
leg->SetHeader("v2");
leg->AddEntry(hcent_v2squareplus,"same charge,++","l");
leg->AddEntry(hcent_v2squareminus,"same charge,--","l");
leg->AddEntry(hcent_v2squaresame,"same charge ,all","l");
leg->AddEntry(hcent_v2squarediff,"different charge ,all","l");
leg->AddEntry(hcent_v2squaretotal,"all","l");

leg->Draw();

c1->SaveAs("./graph/hcent/v2compare.gif");


c2 = new TCanvas("c2","v1square",400,360);
hcent_v1squaretotal->SetLineColor(kBlack);
hcent_v1squaretotal->Draw();
hcent_v1squaretotal->GetXaxis()->SetTitle("Centrality");
hcent_v1squaretotal->GetYaxis()->SetTitle("cos(a-b)");
hcent_v1squaretotal->GetYaxis()->SetLabelSize(0.025);
hcent_v1squaretotal->GetXaxis()->SetTitleSize(0.05);
hcent_v1squaretotal->GetYaxis()->SetTitleSize(0.05);

hcent_v1squareplus->SetLineColor(kOrange);
hcent_v1squareplus->Draw("same");
hcent_v1squareminus->SetLineColor(kRed);
hcent_v1squareminus->Draw("same");
hcent_v1squaresame->SetLineColor(kGreen);
hcent_v1squaresame->Draw("same");
hcent_v1squarediff->SetLineColor(kBlue);
hcent_v1squarediff->Draw("same");

leg = new TLegend(0.58,0.1,0.9,0.3);
leg->SetHeader("v2");
leg->AddEntry(hcent_v1squareplus,"same charge,++","l");
leg->AddEntry(hcent_v1squareminus,"same charge,--","l");
leg->AddEntry(hcent_v1squaresame,"same charge ,all","l");
leg->AddEntry(hcent_v1squarediff,"different charge ,all","l");
leg->AddEntry(hcent_v1squaretotal,"all","l");

leg->Draw();

c2->SaveAs("./graph/hcent/cent_v1squareall.gif");




c3 = new TCanvas("c3","cos(a+b-2c)",400,360);
hcent_cosab2ctotal->SetLineColor(kBlack);
hcent_cosab2ctotal->Draw();
hcent_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hcent_cosab2ctotal->GetYaxis()->SetTitle("cos(a+b-2c)");
hcent_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

hcent_cosab2cplus->SetLineColor(kOrange);
hcent_cosab2cplus->Draw("same");
hcent_cosab2cminus->SetLineColor(kRed);
hcent_cosab2cminus->Draw("same");
hcent_cosab2csame->SetLineColor(kGreen);
hcent_cosab2csame->Draw("same");
hcent_cosab2cdiff->SetLineColor(kBlue);
hcent_cosab2cdiff->Draw("same");

leg = new TLegend(0.58,0.1,0.9,0.3);
leg->SetHeader("cos(a+b-2c)");
leg->AddEntry(hcent_cosab2cplus,"same charge,++","l");
leg->AddEntry(hcent_cosab2cminus,"same charge,--","l");
leg->AddEntry(hcent_cosab2csame,"same charge ,all","l");
leg->AddEntry(hcent_cosab2cdiff,"different charge ,all","l");
leg->AddEntry(hcent_cosab2ctotal,"all","l");

leg->Draw();

c3->SaveAs("./graph/hcent/cent_cosab2call.gif");

c4 = new TCanvas("c4","cos(a+b-2c)LSUL",400,360);
TH1F *centrality_cosab2c =new TH1F("centrality_cos(#alpha+#beta-2c)","centrality_cos(#alpha+#beta-2c)",10,0.,10.);
centrality_cosab2c->GetYaxis()->SetRangeUser(-0.0002,0.0001);
centrality_cosab2c->GetXaxis()->SetTitle("Centrality");
centrality_cosab2c->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)");
centrality_cosab2c->GetYaxis()->SetLabelSize(0.025);
centrality_cosab2c->GetXaxis()->SetTitleSize(0.05);
centrality_cosab2c->GetYaxis()->SetTitleSize(0.05);
centrality_cosab2c->SetLineColor(kYellow);
centrality_cosab2c->Draw();

hcent_cosab2csame->SetLineColor(kGreen);
hcent_cosab2csame->Draw("same");
hcent_cosab2cdiff->SetLineColor(kBlue);
hcent_cosab2cdiff->Draw("same");
leg = new TLegend(0.58,0.1,0.9,0.3);
leg->SetHeader("cos(a+b-2c)");
leg->AddEntry(hcent_cosab2csame,"same charge ,all","l");
leg->AddEntry(hcent_cosab2cdiff,"different charge ,all","l");
c4 -> SaveAs("./graph/hcent/cent_cosab2ccompare.gif");

c5 = new TCanvas("c5","cos(a+b-2c) UL-LS",400,360);
TH1F *dif = new TH1F("dif","dif",10,0,10);
dif -> Add(hcent_cosab2cdiff,hcent_cosab2csame,1,-1);
dif -> SetTitle("cos(a+b-2c) UL-LS");
dif -> Draw();
centrality_cosab2c -> Draw("same");
c5->SaveAs("./graph/hcent/cent_cosab2c_dif.gif");

c6 = new TCanvas("c6","cos(a+b-2#psi_pp)",400,360);
hcent_cosab2ptotal->SetLineColor(kBlack);
hcent_cosab2ptotal->Draw();
hcent_cosab2ptotal->GetXaxis()->SetTitle("Centrality");
hcent_cosab2ptotal->GetYaxis()->SetTitle("cos(a+b-2#phi_pp)");
hcent_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

hcent_cosab2pplus->SetLineColor(kOrange);
hcent_cosab2pplus->Draw("same");
hcent_cosab2pminus->SetLineColor(kRed);
hcent_cosab2pminus->Draw("same");
hcent_cosab2psame->SetLineColor(kGreen);
hcent_cosab2psame->Draw("same");
hcent_cosab2pdiff->SetLineColor(kBlue);
hcent_cosab2pdiff->Draw("same");

leg = new TLegend(0.58,0.1,0.9,0.3);
leg->SetHeader("cos(a+b-2#phi_pp)");
leg->AddEntry(hcent_cosab2pplus,"same charge,++","l");
leg->AddEntry(hcent_cosab2pminus,"same charge,--","l");
leg->AddEntry(hcent_cosab2psame,"same charge ,all","l");
leg->AddEntry(hcent_cosab2pdiff,"different charge ,all","l");
leg->AddEntry(hcent_cosab2ptotal,"all","l");

leg->Draw();

c6->SaveAs("./graph/hcent/cent_cosab2pall.gif");


c7 = new TCanvas("c7","cos(a+b-2psi_pp)LSUL",400,360);
TH1F *centrality_cosab2p =new TH1F("centrality_cos(#alpha+#beta-2#psi_pp)","centrality_cos(#alpha+#beta-2#psi_pp)",10,0.,10.);
centrality_cosab2p->GetYaxis()->SetRangeUser(-0.001,0.001);
centrality_cosab2p->GetXaxis()->SetTitle("Centrality");
centrality_cosab2p->GetYaxis()->SetTitle("cos(#alpha+#beta-2#psi_pp)");
centrality_cosab2p->GetYaxis()->SetLabelSize(0.025);
centrality_cosab2p->GetXaxis()->SetTitleSize(0.05);
centrality_cosab2p->GetYaxis()->SetTitleSize(0.05);
centrality_cosab2p->SetLineColor(kYellow);
centrality_cosab2p->Draw();

hcent_cosab2psame->SetLineColor(kGreen);
hcent_cosab2psame->Draw("same");
hcent_cosab2pdiff->SetLineColor(kBlue);
hcent_cosab2pdiff->Draw("same");
leg = new TLegend(0.58,0.1,0.9,0.3);
leg->SetHeader("cos(a+b-2#psi_pp)");
leg->AddEntry(hcent_cosab2psame,"same charge ,all","l");
leg->AddEntry(hcent_cosab2pdiff,"different charge ,all","l");
c7 -> SaveAs("./graph/hcent/cent_cosab2pcompare.gif");

c8 = new TCanvas("c8","cos(a+b-2c)diff",400,360);
TH1F *dif = new TH1F("dif","dif",10,0,10);
dif -> Add(hcent_cosab2pdiff,hcent_cosab2psame,1,-1);
dif -> SetTitle("cos(a+b-2#phi_pp) UL-LS");
dif -> Draw();
centrality_cosab2p -> Draw("same");
c8->SaveAs("./graph/hcent/cent_cosab2p_dif.gif");

c9 = new TCanvas("c9","v1square",400,360);
hcent_v1squaretotal->SetLineColor(kBlack);
hcent_v1squaretotal->Draw();
hcent_v1squaretotal->GetXaxis()->SetTitle("Centrality");
hcent_v1squaretotal->GetYaxis()->SetTitle("v1square");
hcent_v1squaretotal->GetYaxis()->SetLabelSize(0.025);
hcent_v1squaretotal->GetXaxis()->SetTitleSize(0.05);
hcent_v1squaretotal->GetYaxis()->SetTitleSize(0.05);

c9->SaveAs("./graph/hcent/v1.gif");

c10 = new TCanvas("c10","v1square_compare",400,360);
hcent_v1squaretotal->SetLineColor(kBlack);
hcent_v1squaretotal->Draw();
hcent_v1squaretotal->GetXaxis()->SetTitle("Centrality");
hcent_v1squaretotal->GetYaxis()->SetTitle("v1square");
hcent_v1squaretotal->GetYaxis()->SetLabelSize(0.025);
hcent_v1squaretotal->GetXaxis()->SetTitleSize(0.05);
hcent_v1squaretotal->GetYaxis()->SetTitleSize(0.05);

hcent_v1squareplus->SetLineColor(kOrange);
hcent_v1squareplus->Draw("same");
hcent_v1squareminus->SetLineColor(kRed);
hcent_v1squareminus->Draw("same");
hcent_v1squaresame->SetLineColor(kGreen);
hcent_v1squaresame->Draw("same");
hcent_v1squarediff->SetLineColor(kBlue);
hcent_v1squarediff->Draw("same");

leg = new TLegend(0.1,0.1,0.48,0.3);
leg->SetHeader("v1");
leg->AddEntry(hcent_v1squareplus,"same charge,++","l");
leg->AddEntry(hcent_v1squareminus,"same charge,--","l");
leg->AddEntry(hcent_v1squaresame,"same charge ,all","l");
leg->AddEntry(hcent_v1squarediff,"different charge ,all","l");
leg->AddEntry(hcent_v1squaretotal,"all","l");

leg->Draw();

c10->SaveAs("./graph/hcent/v1compare.gif");

c11 = new TCanvas("c11","cos(a-b)",400,360);
hcent_cos1abtotal->SetLineColor(kBlack);
hcent_cos1abtotal->Draw();
hcent_cos1abtotal->GetXaxis()->SetTitle("Centrality");
hcent_cos1abtotal->GetYaxis()->SetTitle("cos(a-b)");
hcent_cos1abtotal->GetYaxis()->SetLabelSize(0.025);
hcent_cos1abtotal->GetXaxis()->SetTitleSize(0.05);
hcent_cos1abtotal->GetYaxis()->SetTitleSize(0.05);

hcent_cos1abplus->SetLineColor(kOrange);
hcent_cos1abplus->Draw("same");
hcent_cos1abminus->SetLineColor(kRed);
hcent_cos1abminus->Draw("same");
hcent_cos1absame->SetLineColor(kGreen);
hcent_cos1absame->Draw("same");
hcent_cos1abdiff->SetLineColor(kBlue);
hcent_cos1abdiff->Draw("same");

leg = new TLegend(0.58,0.1,0.9,0.3);
leg->SetHeader("cos(a-b)");
leg->AddEntry(hcent_cos1abplus,"same charge,++","l");
leg->AddEntry(hcent_cos1abminus,"same charge,--","l");
leg->AddEntry(hcent_cos1absame,"same charge ,all","l");
leg->AddEntry(hcent_cos1abdiff,"different charge ,all","l");
leg->AddEntry(hcent_cos1abtotal,"all","l");

leg->Draw();

c12 = new TCanvas("c12","cos(2a-2b)",400,360);
hcent_cos2abtotal->SetLineColor(kBlack);
hcent_cos2abtotal->Draw();
hcent_cos2abtotal->GetXaxis()->SetTitle("Centrality");
hcent_cos2abtotal->GetYaxis()->SetTitle("cos(2a-2b)");
hcent_cos2abtotal->GetYaxis()->SetLabelSize(0.025);
hcent_cos2abtotal->GetXaxis()->SetTitleSize(0.05);
hcent_cos2abtotal->GetYaxis()->SetTitleSize(0.05);

hcent_cos2abplus->SetLineColor(kOrange);
hcent_cos2abplus->Draw("same");
hcent_cos2abminus->SetLineColor(kRed);
hcent_cos2abminus->Draw("same");
hcent_cos2absame->SetLineColor(kGreen);
hcent_cos2absame->Draw("same");
hcent_cos2abdiff->SetLineColor(kBlue);
hcent_cos2abdiff->Draw("same");

leg = new TLegend(0.58,0.1,0.9,0.3);
leg->SetHeader("cos(2a-2b)");
leg->AddEntry(hcent_cos2abplus,"same charge,++","l");
leg->AddEntry(hcent_cos2abminus,"same charge,--","l");
leg->AddEntry(hcent_cos2absame,"same charge ,all","l");
leg->AddEntry(hcent_cos2abdiff,"different charge ,all","l");
leg->AddEntry(hcent_cos2abtotal,"all","l");

leg->Draw();

c13 = new TCanvas("c13","cos(a+b-2c)_o",400,360);
hcent_cosab2ctotalo->SetLineColor(kBlack);
hcent_cosab2ctotalo->Draw();
hcent_cosab2ctotalo->GetXaxis()->SetTitle("Centrality");
hcent_cosab2ctotalo->GetYaxis()->SetTitle("cos(a+b-2c)_o");
hcent_cosab2ctotalo->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2ctotalo->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2ctotalo->GetYaxis()->SetTitleSize(0.05);
hcent_cosab2ctotalo->GetYaxis()->SetRangeUser(-0.05,0.05);

hcent_cosab2cpluso->SetLineColor(kOrange);
hcent_cosab2cpluso->Draw("same");
hcent_cosab2cminuso->SetLineColor(kRed);
hcent_cosab2cminuso->Draw("same");
hcent_cosab2csameo->SetLineColor(kGreen);
hcent_cosab2csameo->Draw("same");
hcent_cosab2cdiffo->SetLineColor(kBlue);
hcent_cosab2cdiffo->Draw("same");

leg = new TLegend(0.58,0.1,0.9,0.3);
leg->SetHeader("cos(a+b-2c)_o");
leg->AddEntry(hcent_cosab2cpluso,"same charge,++","l");
leg->AddEntry(hcent_cosab2cminuso,"same charge,--","l");
leg->AddEntry(hcent_cosab2csameo,"same charge ,all","l");
leg->AddEntry(hcent_cosab2cdiffo,"different charge ,all","l");
leg->AddEntry(hcent_cosab2ctotalo,"all","l");

leg->Draw();

c13->SaveAs("./graph/hcent/cent_cosab2call_o.gif");


c14 = new TCanvas("c14","cos(a+b-2c)LSUL_o",400,360);
TH1F *centrality_cosab2c_o =new TH1F("centrality_cos(#alpha+#beta-2c)_o","centrality_cos(#alpha+#beta-2c)_o",10,0.,10.);
centrality_cosab2c_o->GetYaxis()->SetRangeUser(-0.0002,0.0001);
centrality_cosab2c_o->GetXaxis()->SetTitle("Centrality");
centrality_cosab2c_o->GetYaxis()->SetTitle("cos(#alpha+#beta-2c)_o");
centrality_cosab2c_o->GetYaxis()->SetLabelSize(0.025);
centrality_cosab2c_o->GetXaxis()->SetTitleSize(0.05);
centrality_cosab2c_o->GetYaxis()->SetTitleSize(0.05);
centrality_cosab2c_o->GetYaxis()->SetRangeUser(-0.05,0.05);
centrality_cosab2c_o->SetLineColor(kYellow);
centrality_cosab2c_o->Draw();

hcent_cosab2csameo->SetLineColor(kGreen);
hcent_cosab2csameo->Draw("same");
hcent_cosab2cdiffo->SetLineColor(kBlue);
hcent_cosab2cdiffo->Draw("same");
leg = new TLegend(0.58,0.1,0.9,0.3);
leg->SetHeader("cos(a+b-2c)");
leg->AddEntry(hcent_cosab2csameo,"same charge ,all","l");
leg->AddEntry(hcent_cosab2cdiffo,"different charge ,all","l");
c14 -> SaveAs("./graph/hcent/cent_cosab2ccompare_o.gif");

c15 = new TCanvas("c15","cos(a+b-2c)_o UL-LS",400,360);
TH1F *dif = new TH1F("dif","dif",10,0,10);
dif -> Add(hcent_cosab2cdiffo,hcent_cosab2csameo,1,-1);
dif -> SetTitle("cos(a+b-2c)_o UL-LS");
dif -> Draw();
centrality_cosab2c_o -> Draw("same");
c15->SaveAs("./graph/hcent/cent_cosab2c_o_dif.gif");




}
