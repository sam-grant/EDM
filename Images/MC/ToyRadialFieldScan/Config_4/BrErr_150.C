void BrErr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:01 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__17 = new TH1D("__17","Number of sub-runs: 150",1000,0,4);
   __17->SetBinContent(124,1);
   __17->SetBinContent(125,5);
   __17->SetBinContent(126,25);
   __17->SetBinContent(127,51);
   __17->SetBinContent(128,98);
   __17->SetBinContent(129,166);
   __17->SetBinContent(130,222);
   __17->SetBinContent(131,189);
   __17->SetBinContent(132,116);
   __17->SetBinContent(133,72);
   __17->SetBinContent(134,41);
   __17->SetBinContent(135,10);
   __17->SetBinContent(136,4);
   __17->SetEntries(1000);
   __17->SetLineWidth(3);
   __17->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __17->GetXaxis()->CenterTitle(true);
   __17->GetXaxis()->SetLabelFont(42);
   __17->GetXaxis()->SetTitleSize(0.04);
   __17->GetXaxis()->SetTitleOffset(1.1);
   __17->GetXaxis()->SetTitleFont(42);
   __17->GetYaxis()->SetTitle("Trials");
   __17->GetYaxis()->CenterTitle(true);
   __17->GetYaxis()->SetNdivisions(4000510);
   __17->GetYaxis()->SetLabelFont(42);
   __17->GetYaxis()->SetTitleSize(0.04);
   __17->GetYaxis()->SetTitleOffset(1.1);
   __17->GetYaxis()->SetTitleFont(42);
   __17->GetZaxis()->SetLabelFont(42);
   __17->GetZaxis()->SetTitleOffset(1);
   __17->GetZaxis()->SetTitleFont(42);
   __17->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
