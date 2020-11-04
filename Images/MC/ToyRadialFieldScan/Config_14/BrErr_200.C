void BrErr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 10:31:23 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__23 = new TH1D("__23","Number of sub-runs: 200",1000,0,4);
   __23->SetBinContent(101,8);
   __23->SetBinContent(102,21);
   __23->SetBinContent(103,49);
   __23->SetBinContent(104,74);
   __23->SetBinContent(105,125);
   __23->SetBinContent(106,185);
   __23->SetBinContent(107,169);
   __23->SetBinContent(108,143);
   __23->SetBinContent(109,104);
   __23->SetBinContent(110,69);
   __23->SetBinContent(111,35);
   __23->SetBinContent(112,12);
   __23->SetBinContent(113,2);
   __23->SetBinContent(114,2);
   __23->SetBinContent(115,1);
   __23->SetBinContent(116,1);
   __23->SetEntries(1000);
   __23->SetLineWidth(3);
   __23->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __23->GetXaxis()->CenterTitle(true);
   __23->GetXaxis()->SetLabelFont(42);
   __23->GetXaxis()->SetTitleSize(0.04);
   __23->GetXaxis()->SetTitleOffset(1.1);
   __23->GetXaxis()->SetTitleFont(42);
   __23->GetYaxis()->SetTitle("Trials");
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
