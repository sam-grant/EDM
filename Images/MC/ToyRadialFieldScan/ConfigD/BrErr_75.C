void BrErr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:19:19 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 75",1000,0,4);
   __8->SetBinContent(110,1);
   __8->SetBinContent(111,1);
   __8->SetBinContent(112,6);
   __8->SetBinContent(113,35);
   __8->SetBinContent(114,62);
   __8->SetBinContent(115,86);
   __8->SetBinContent(116,110);
   __8->SetBinContent(117,138);
   __8->SetBinContent(118,138);
   __8->SetBinContent(119,154);
   __8->SetBinContent(120,106);
   __8->SetBinContent(121,67);
   __8->SetBinContent(122,54);
   __8->SetBinContent(123,21);
   __8->SetBinContent(124,12);
   __8->SetBinContent(125,4);
   __8->SetBinContent(126,2);
   __8->SetBinContent(127,3);
   __8->SetEntries(1000);
   __8->SetLineWidth(3);
   __8->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __8->GetXaxis()->CenterTitle(true);
   __8->GetXaxis()->SetLabelFont(42);
   __8->GetXaxis()->SetTitleSize(0.04);
   __8->GetXaxis()->SetTitleOffset(1.1);
   __8->GetXaxis()->SetTitleFont(42);
   __8->GetYaxis()->SetTitle("Trials");
   __8->GetYaxis()->CenterTitle(true);
   __8->GetYaxis()->SetNdivisions(4000510);
   __8->GetYaxis()->SetLabelFont(42);
   __8->GetYaxis()->SetTitleSize(0.04);
   __8->GetYaxis()->SetTitleOffset(1.1);
   __8->GetYaxis()->SetTitleFont(42);
   __8->GetZaxis()->SetLabelFont(42);
   __8->GetZaxis()->SetTitleOffset(1);
   __8->GetZaxis()->SetTitleFont(42);
   __8->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
