void BrErr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:00 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",1000,0,4);
   __14->SetBinContent(135,2);
   __14->SetBinContent(136,4);
   __14->SetBinContent(137,9);
   __14->SetBinContent(138,19);
   __14->SetBinContent(139,49);
   __14->SetBinContent(140,91);
   __14->SetBinContent(141,137);
   __14->SetBinContent(142,157);
   __14->SetBinContent(143,162);
   __14->SetBinContent(144,120);
   __14->SetBinContent(145,115);
   __14->SetBinContent(146,63);
   __14->SetBinContent(147,47);
   __14->SetBinContent(148,12);
   __14->SetBinContent(149,9);
   __14->SetBinContent(150,3);
   __14->SetBinContent(151,1);
   __14->SetEntries(1000);
   __14->SetLineWidth(3);
   __14->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __14->GetXaxis()->CenterTitle(true);
   __14->GetXaxis()->SetLabelFont(42);
   __14->GetXaxis()->SetTitleSize(0.04);
   __14->GetXaxis()->SetTitleOffset(1.1);
   __14->GetXaxis()->SetTitleFont(42);
   __14->GetYaxis()->SetTitle("Trials");
   __14->GetYaxis()->CenterTitle(true);
   __14->GetYaxis()->SetNdivisions(4000510);
   __14->GetYaxis()->SetLabelFont(42);
   __14->GetYaxis()->SetTitleSize(0.04);
   __14->GetYaxis()->SetTitleOffset(1.1);
   __14->GetYaxis()->SetTitleFont(42);
   __14->GetZaxis()->SetLabelFont(42);
   __14->GetZaxis()->SetTitleOffset(1);
   __14->GetZaxis()->SetTitleFont(42);
   __14->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
