void draw()
{

TFile* in_file= new TFile("2_Pion_psi=0.root");


/*
c1 = new TCanvas("c1","totalv2square",320,300);
hcent_v2squaretotal->SetLineColor(kBlack);
hcent_v2squaretotal->Draw();
hcent_v2squaretotal->GetXaxis()->SetTitle("Centrality");
hcent_v2squaretotal->GetYaxis()->SetTitle("v2square");
hcent_v2squaretotal->GetYaxis()->SetLabelSize(0.025);
hcent_v2squaretotal->GetXaxis()->SetTitleSize(0.05);
hcent_v2squaretotal->GetYaxis()->SetTitleSize(0.05);


c2 = new TCanvas("c2","plusv2square",320,300);
hcent_v2squareplus->SetLineColor(kOrange);
hcent_v2squareplus->Draw();
hcent_v2squareplus->GetXaxis()->SetTitle("Centrality");
hcent_v2squareplus->GetYaxis()->SetTitle("v2square");
hcent_v2squareplus->GetYaxis()->SetLabelSize(0.025);
hcent_v2squareplus->GetXaxis()->SetTitleSize(0.05);
hcent_v2squareplus->GetYaxis()->SetTitleSize(0.05);


c3 = new TCanvas("c3","minusv2square",320,300);
hcent_v2squareminus->SetLineColor(kRed);
hcent_v2squareminus->Draw();
hcent_v2squareminus->GetXaxis()->SetTitle("Centrality");
hcent_v2squareminus->GetYaxis()->SetTitle("v2square");
hcent_v2squareminus->GetYaxis()->SetLabelSize(0.025);
hcent_v2squareminus->GetXaxis()->SetTitleSize(0.05);
hcent_v2squareminus->GetYaxis()->SetTitleSize(0.05);


c4 = new TCanvas("c4","samev2square",320,300);
hcent_v2squaresame->SetLineColor(kGreen);
hcent_v2squaresame->Draw();
hcent_v2squaresame->GetXaxis()->SetTitle("Centrality");
hcent_v2squaresame->GetYaxis()->SetTitle("v2square");
hcent_v2squaresame->GetYaxis()->SetLabelSize(0.025);
hcent_v2squaresame->GetXaxis()->SetTitleSize(0.05);
hcent_v2squaresame->GetYaxis()->SetTitleSize(0.05);


c5 = new TCanvas("c5","diffv2square",320,300);
hcent_v2squarediff->SetLineColor(kBlue);
hcent_v2squarediff->Draw();
hcent_v2squarediff->GetXaxis()->SetTitle("Centrality");
hcent_v2squarediff->GetYaxis()->SetTitle("v2square");
hcent_v2squarediff->GetYaxis()->SetLabelSize(0.025);
hcent_v2squarediff->GetXaxis()->SetTitleSize(0.05);
hcent_v2squarediff->GetYaxis()->SetTitleSize(0.05);

c6 = new TCanvas("c6","totalcos(a-b)",320,300);
hcent_cosabtotal->SetLineColor(kBlack);
hcent_cosabtotal->Draw();
hcent_cosabtotal->GetXaxis()->SetTitle("Centrality");
hcent_cosabtotal->GetYaxis()->SetTitle("cos(a-b)");
hcent_cosabtotal->GetYaxis()->SetLabelSize(0.025);
hcent_cosabtotal->GetXaxis()->SetTitleSize(0.05);
hcent_cosabtotal->GetYaxis()->SetTitleSize(0.05);

c7 = new TCanvas("c7","pluscos(a-b)",320,300);
hcent_cosabplus->SetLineColor(kOrange);
hcent_cosabplus->Draw();
hcent_cosabplus->GetXaxis()->SetTitle("Centrality");
hcent_cosabplus->GetYaxis()->SetTitle("cos(a-b)");
hcent_cosabplus->GetYaxis()->SetLabelSize(0.025);
hcent_cosabplus->GetXaxis()->SetTitleSize(0.05);
hcent_cosabplus->GetYaxis()->SetTitleSize(0.05);

c8 = new TCanvas("c8","minuscos(a-b)",320,300);
hcent_cosabminus->SetLineColor(kRed);
hcent_cosabminus->Draw();
hcent_cosabminus->GetXaxis()->SetTitle("Centrality");
hcent_cosabminus->GetYaxis()->SetTitle("cos(a-b)");
hcent_cosabminus->GetYaxis()->SetLabelSize(0.025);
hcent_cosabminus->GetXaxis()->SetTitleSize(0.05);
hcent_cosabminus->GetYaxis()->SetTitleSize(0.05);

c9 = new TCanvas("c9","samecos(a-b)",320,300);
hcent_cosabsame->SetLineColor(kGreen);
hcent_cosabsame->Draw();
hcent_cosabsame->GetXaxis()->SetTitle("Centrality");
hcent_cosabsame->GetYaxis()->SetTitle("cos(a-b)");
hcent_cosabsame->GetYaxis()->SetLabelSize(0.025);
hcent_cosabsame->GetXaxis()->SetTitleSize(0.05);
hcent_cosabsame->GetYaxis()->SetTitleSize(0.05);

c10 = new TCanvas("c10","diffcos(a-b)",320,300);
hcent_cosabdiff->SetLineColor(kBlue);
hcent_cosabdiff->Draw();
hcent_cosabdiff->GetXaxis()->SetTitle("Centrality");
hcent_cosabdiff->GetYaxis()->SetTitle("cos(a-b)");
hcent_cosabdiff->GetYaxis()->SetLabelSize(0.025);
hcent_cosabdiff->GetXaxis()->SetTitleSize(0.05);
hcent_cosabdiff->GetYaxis()->SetTitleSize(0.05);


c11 = new TCanvas("c11","totalcos(a+b-2c)",320,300);
hcent_cosab2ctotal->SetLineColor(kBlack);
hcent_cosab2ctotal->Draw();
hcent_cosab2ctotal->GetXaxis()->SetTitle("Centrality");
hcent_cosab2ctotal->GetYaxis()->SetTitle("cos(a+b-2c)");
hcent_cosab2ctotal->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2ctotal->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2ctotal->GetYaxis()->SetTitleSize(0.05);

c12 = new TCanvas("c12","pluscos(a+b-2c)",320,300);
hcent_cosab2cplus->SetLineColor(kOrange);
hcent_cosab2cplus->Draw();
hcent_cosab2cplus->GetXaxis()->SetTitle("Centrality");
hcent_cosab2cplus->GetYaxis()->SetTitle("cos(a+b-2c)");
hcent_cosab2cplus->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2cplus->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2cplus->GetYaxis()->SetTitleSize(0.05);

c13 = new TCanvas("c13","minuscos(a+b-2c)",320,300);
hcent_cosab2cminus->SetLineColor(kRed);
hcent_cosab2cminus->Draw();
hcent_cosab2cminus->GetXaxis()->SetTitle("Centrality");
hcent_cosab2cminus->GetYaxis()->SetTitle("cos(a+b-2c)");
hcent_cosab2cminus->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2cminus->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2cminus->GetYaxis()->SetTitleSize(0.05);

c14 = new TCanvas("c14","samecos(a+b-2c)",320,300);
hcent_cosab2csame->SetLineColor(kGreen);
hcent_cosab2csame->Draw();
hcent_cosab2csame->GetXaxis()->SetTitle("Centrality");
hcent_cosab2csame->GetYaxis()->SetTitle("cos(a+b-2c)");
hcent_cosab2csame->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2csame->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2csame->GetYaxis()->SetTitleSize(0.05);

c15 = new TCanvas("c15","diffcos(a+b-2c)",320,300);
hcent_cosab2cdiff->SetLineColor(kBlue);
hcent_cosab2cdiff->Draw();
hcent_cosab2cdiff->GetXaxis()->SetTitle("Centrality");
hcent_cosab2cdiff->GetYaxis()->SetTitle("cos(a+b-2c)");
hcent_cosab2cdiff->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2cdiff->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2cdiff->GetYaxis()->SetTitleSize(0.05);

c16 = new TCanvas("c16","totalcos(a+b-2#psi_pp)",320,300);
hcent_cosab2ptotal->SetLineColor(kBlack);
hcent_cosab2ptotal->Draw();
hcent_cosab2ptotal->GetXaxis()->SetTitle("Centrality");
hcent_cosab2ptotal->GetYaxis()->SetTitle("cos(a+b-2#phi_pp)");
hcent_cosab2ptotal->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2ptotal->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2ptotal->GetYaxis()->SetTitleSize(0.05);

c17 = new TCanvas("c17","totalcos(a+b-2#psi_pp)",320,300);
hcent_cosab2pplus->SetLineColor(kOrange);
hcent_cosab2pplus->Draw();
hcent_cosab2pplus->GetXaxis()->SetTitle("Centrality");
hcent_cosab2pplus->GetYaxis()->SetTitle("cos(a+b-2#phi_pp)");
hcent_cosab2pplus->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2pplus->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2pplus->GetYaxis()->SetTitleSize(0.05);

c18 = new TCanvas("c18","cos(a+b-2#psi_pp)",320,300);
hcent_cosab2pminus->SetLineColor(kRed);
hcent_cosab2pminus->Draw();
hcent_cosab2pminus->GetXaxis()->SetTitle("Centrality");
hcent_cosab2pminus->GetYaxis()->SetTitle("cos(a+b-2#phi_pp)");
hcent_cosab2pminus->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2pminus->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2pminus->GetYaxis()->SetTitleSize(0.05);

c19 = new TCanvas("c19","cos(a+b-2#psi_pp)",320,300);
hcent_cosab2psame->SetLineColor(kGreen);
hcent_cosab2psame->Draw();
hcent_cosab2psame->GetXaxis()->SetTitle("Centrality");
hcent_cosab2psame->GetYaxis()->SetTitle("cos(a+b-2#phi_pp)");
hcent_cosab2psame->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2psame->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2psame->GetYaxis()->SetTitleSize(0.05);

c20 = new TCanvas("c20","cos(a+b-2#psi_pp)",320,300);
hcent_cosab2pdiff->SetLineColor(kBlue);
hcent_cosab2pdiff->Draw();
hcent_cosab2pdiff->GetXaxis()->SetTitle("Centrality");
hcent_cosab2pdiff->GetYaxis()->SetTitle("cos(a+b-2#phi_pp)");
hcent_cosab2pdiff->GetYaxis()->SetLabelSize(0.025);
hcent_cosab2pdiff->GetXaxis()->SetTitleSize(0.05);
hcent_cosab2pdiff->GetYaxis()->SetTitleSize(0.05);
*/

}
