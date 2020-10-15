void BrErr_275()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:49:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__32 = new TH1D("__32","Number of sub-runs: 275",1000,0,4);
   __32->SetBinContent(104,1);
   __32->SetBinContent(105,4);
   __32->SetBinContent(106,9);
   __32->SetBinContent(107,39);
   __32->SetBinContent(108,62);
   __32->SetBinContent(109,110);
   __32->SetBinContent(110,158);
   __32->SetBinContent(111,179);
   __32->SetBinContent(112,144);
   __32->SetBinContent(113,132);
   __32->SetBinContent(114,89);
   __32->SetBinContent(115,44);
   __32->SetBinContent(116,16);
   __32->SetBinContent(117,11);
   __32->SetBinContent(118,2);
   __32->SetEntries(1000);
   __32->SetLineWidth(3);
   __32->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __32->GetXaxis()->CenterTitle(true);
   __32->GetXaxis()->SetLabelFont(42);
   __32->GetXaxis()->SetTitleSize(0.04);
   __32->GetXaxis()->SetTitleOffset(1.1);
   __32->GetXaxis()->SetTitleFont(42);
   __32->GetYaxis()->SetTitle("Trials");
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
