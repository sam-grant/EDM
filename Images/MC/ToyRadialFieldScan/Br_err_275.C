void Br_err_275()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 17:58:34 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__32 = new TH1D("__32","Number of sub-runs: 275",1000,0,4);
   __32->SetBinContent(103,1);
   __32->SetBinContent(104,1);
   __32->SetBinContent(105,2);
   __32->SetBinContent(106,17);
   __32->SetBinContent(107,34);
   __32->SetBinContent(108,67);
   __32->SetBinContent(109,75);
   __32->SetBinContent(110,153);
   __32->SetBinContent(111,151);
   __32->SetBinContent(112,166);
   __32->SetBinContent(113,134);
   __32->SetBinContent(114,89);
   __32->SetBinContent(115,59);
   __32->SetBinContent(116,30);
   __32->SetBinContent(117,11);
   __32->SetBinContent(118,9);
   __32->SetBinContent(119,1);
   __32->SetEntries(1000);
   __32->SetLineWidth(3);
   __32->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __32->GetXaxis()->CenterTitle(true);
   __32->GetXaxis()->SetLabelFont(42);
   __32->GetXaxis()->SetTitleSize(0.04);
   __32->GetXaxis()->SetTitleOffset(1.1);
   __32->GetXaxis()->SetTitleFont(42);
   __32->GetYaxis()->SetTitle("Experiments");
   __32->GetYaxis()->CenterTitle(true);
   __32->GetYaxis()->SetNdivisions(4000510);
   __32->GetYaxis()->SetLabelFont(42);
   __32->GetYaxis()->SetTitleSize(0.04);
   __32->GetYaxis()->SetTitleOffset(1.1);
   __32->GetYaxis()->SetTitleFont(42);
   __32->GetZaxis()->SetLabelFont(42);
   __32->GetZaxis()->SetTitleOffset(1);
   __32->GetZaxis()->SetTitleFont(42);
   __32->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
