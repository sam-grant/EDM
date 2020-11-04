void BrErr_275()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:47 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__32 = new TH1D("__32","Number of sub-runs: 275",1000,0,4);
   __32->SetBinContent(119,2);
   __32->SetBinContent(120,3);
   __32->SetBinContent(121,14);
   __32->SetBinContent(122,27);
   __32->SetBinContent(123,43);
   __32->SetBinContent(124,74);
   __32->SetBinContent(125,109);
   __32->SetBinContent(126,146);
   __32->SetBinContent(127,131);
   __32->SetBinContent(128,122);
   __32->SetBinContent(129,125);
   __32->SetBinContent(130,69);
   __32->SetBinContent(131,72);
   __32->SetBinContent(132,32);
   __32->SetBinContent(133,15);
   __32->SetBinContent(134,5);
   __32->SetBinContent(135,2);
   __32->SetBinContent(136,3);
   __32->SetBinContent(137,4);
   __32->SetBinContent(138,2);
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
