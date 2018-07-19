void sincospart()
{
TFile* in_file= new TFile("5_Pion_psi=0.root");

c1 = new TCanvas("1","",480,450);
hcent_sinpart1 -> Draw();
c2 = new TCanvas("2","",480,450);
hcent_sinpart2 -> Draw();
c3 = new TCanvas("3","",480,450);
hcent_cospart1 -> Draw();
c4 = new TCanvas("4","",480,450);
hcent_cospart2 -> Draw();



}
