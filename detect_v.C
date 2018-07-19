void detect_v()
{
TFile* in_file= new TFile("2_Pion_psi=0.root");

c1 = new TCanvas("c","v2square",640,320);
v2squareg->SetLineColor(kBlue);
v2squareg->SetTitle("v2square count");
v2squareg->GetXaxis()->SetTitle("v2square");
v2squareg->GetXaxis()->SetRangeUser(-0.1,0.1); 
v2squarec->SetLineColor(kGreen);
v2squareg->Draw();
v2squarec->Draw("same");

}
