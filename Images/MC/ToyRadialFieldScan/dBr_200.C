void dBr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 19:09:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__23 = new TH1D("__23","Number of sub-runs: 200",1000,0,4);
   __23->SetBinContent(115,1);
   __23->SetBinContent(116,3);
   __23->SetBinContent(117,15);
   __23->SetBinContent(118,27);
   __23->SetBinContent(119,49);
   __23->SetBinContent(120,94);
   __23->SetBinContent(121,120);
   __23->SetBinContent(122,159);
   __23->SetBinContent(123,154);
   __23->SetBinContent(124,127);
   __23->SetBinContent(125,95);
   __23->SetBinContent(126,65);
   __23->SetBinContent(127,41);
   __23->SetBinContent(128,32);
   __23->SetBinContent(129,12);
   __23->SetBinContent(130,2);
   __23->SetBinContent(131,2);
   __23->SetBinContent(132,1);
   __23->SetBinContent(133,1);
   __23->SetEntries(1000);
   __23->SetLineWidth(3);
   __23->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __23->GetXaxis()->CenterTitle(true);
   __23->GetXaxis()->SetLabelFont(42);
   __23->GetXaxis()->SetTitleSize(0.04);
   __23->GetXaxis()->SetTitleOffset(1.1);
   __23->GetXaxis()->SetTitleFont(42);
   __23->GetYaxis()->SetTitle("Experiments");
   __23->GetYaxis()->CenterTitle(true);
   __23->GetYaxis()->SetNdivisions(4000510);
   __23->GetYaxis()->SetLabelFont(42);
   __23->GetYaxis()->SetTitleSize(0.04);
   __23->GetYaxis()->SetTitleOffset(1.1);
   __23->GetYaxis()->SetTitleFont(42);
   __23->GetZaxis()->SetLabelFont(42);
   __23->GetZaxis()->SetTitleOffset(1);
   __23->GetZaxis()->SetTitleFont(42);
   __23->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
