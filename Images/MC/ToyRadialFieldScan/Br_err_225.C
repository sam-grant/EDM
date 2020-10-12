void Br_err_225()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 17:58:33 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__26 = new TH1D("__26","Number of sub-runs: 225",1000,0,4);
   __26->SetBinContent(113,1);
   __26->SetBinContent(114,1);
   __26->SetBinContent(115,1);
   __26->SetBinContent(116,4);
   __26->SetBinContent(117,17);
   __26->SetBinContent(118,25);
   __26->SetBinContent(119,45);
   __26->SetBinContent(120,86);
   __26->SetBinContent(121,118);
   __26->SetBinContent(122,131);
   __26->SetBinContent(123,131);
   __26->SetBinContent(124,127);
   __26->SetBinContent(125,108);
   __26->SetBinContent(126,83);
   __26->SetBinContent(127,52);
   __26->SetBinContent(128,29);
   __26->SetBinContent(129,24);
   __26->SetBinContent(130,8);
   __26->SetBinContent(131,3);
   __26->SetBinContent(132,4);
   __26->SetBinContent(133,1);
   __26->SetBinContent(134,1);
   __26->SetEntries(1000);
   __26->SetLineWidth(3);
   __26->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __26->GetXaxis()->CenterTitle(true);
   __26->GetXaxis()->SetLabelFont(42);
   __26->GetXaxis()->SetTitleSize(0.04);
   __26->GetXaxis()->SetTitleOffset(1.1);
   __26->GetXaxis()->SetTitleFont(42);
   __26->GetYaxis()->SetTitle("Experiments");
   __26->GetYaxis()->CenterTitle(true);
   __26->GetYaxis()->SetNdivisions(4000510);
   __26->GetYaxis()->SetLabelFont(42);
   __26->GetYaxis()->SetTitleSize(0.04);
   __26->GetYaxis()->SetTitleOffset(1.1);
   __26->GetYaxis()->SetTitleFont(42);
   __26->GetZaxis()->SetLabelFont(42);
   __26->GetZaxis()->SetTitleOffset(1);
   __26->GetZaxis()->SetTitleFont(42);
   __26->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
