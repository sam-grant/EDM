void BrErr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 10:31:21 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__17 = new TH1D("__17","Number of sub-runs: 150",1000,0,4);
   __17->SetBinContent(114,1);
   __17->SetBinContent(115,1);
   __17->SetBinContent(116,8);
   __17->SetBinContent(117,11);
   __17->SetBinContent(118,29);
   __17->SetBinContent(119,44);
   __17->SetBinContent(120,67);
   __17->SetBinContent(121,114);
   __17->SetBinContent(122,114);
   __17->SetBinContent(123,144);
   __17->SetBinContent(124,133);
   __17->SetBinContent(125,109);
   __17->SetBinContent(126,80);
   __17->SetBinContent(127,64);
   __17->SetBinContent(128,39);
   __17->SetBinContent(129,21);
   __17->SetBinContent(130,11);
   __17->SetBinContent(131,7);
   __17->SetBinContent(132,2);
   __17->SetBinContent(133,1);
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
