void BrErr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:39:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 75",1000,0,4);
   __8->SetBinContent(119,5);
   __8->SetBinContent(120,16);
   __8->SetBinContent(121,63);
   __8->SetBinContent(122,114);
   __8->SetBinContent(123,164);
   __8->SetBinContent(124,180);
   __8->SetBinContent(125,175);
   __8->SetBinContent(126,136);
   __8->SetBinContent(127,80);
   __8->SetBinContent(128,43);
   __8->SetBinContent(129,16);
   __8->SetBinContent(130,6);
   __8->SetBinContent(131,1);
   __8->SetBinContent(133,1);
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
