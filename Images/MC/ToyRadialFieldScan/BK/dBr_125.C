void dBr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  7 18:21:00 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 125",300,0,3);
   __5->SetBinContent(72,2);
   __5->SetBinContent(73,4);
   __5->SetBinContent(74,15);
   __5->SetBinContent(75,23);
   __5->SetBinContent(76,60);
   __5->SetBinContent(77,66);
   __5->SetBinContent(78,102);
   __5->SetBinContent(79,121);
   __5->SetBinContent(80,139);
   __5->SetBinContent(81,117);
   __5->SetBinContent(82,91);
   __5->SetBinContent(83,96);
   __5->SetBinContent(84,63);
   __5->SetBinContent(85,47);
   __5->SetBinContent(86,18);
   __5->SetBinContent(87,14);
   __5->SetBinContent(88,14);
   __5->SetBinContent(89,5);
   __5->SetBinContent(90,2);
   __5->SetBinContent(92,1);
   __5->SetEntries(1000);
   __5->SetLineWidth(3);
   __5->GetXaxis()->SetTitle("Residual #deltaB_{r} [ppm]");
   __5->GetXaxis()->CenterTitle(true);
   __5->GetXaxis()->SetLabelFont(42);
   __5->GetXaxis()->SetTitleSize(0.04);
   __5->GetXaxis()->SetTitleOffset(1.1);
   __5->GetXaxis()->SetTitleFont(42);
   __5->GetYaxis()->SetTitle("Experiments");
   __5->GetYaxis()->CenterTitle(true);
   __5->GetYaxis()->SetNdivisions(4000510);
   __5->GetYaxis()->SetLabelFont(42);
   __5->GetYaxis()->SetTitleSize(0.04);
   __5->GetYaxis()->SetTitleOffset(1.1);
   __5->GetYaxis()->SetTitleFont(42);
   __5->GetZaxis()->SetLabelFont(42);
   __5->GetZaxis()->SetTitleOffset(1);
   __5->GetZaxis()->SetTitleFont(42);
   __5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
