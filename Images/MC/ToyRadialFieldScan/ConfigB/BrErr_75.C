void BrErr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:41 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 75",1000,0,4);
   __8->SetBinContent(124,1);
   __8->SetBinContent(125,2);
   __8->SetBinContent(126,3);
   __8->SetBinContent(127,11);
   __8->SetBinContent(128,33);
   __8->SetBinContent(129,76);
   __8->SetBinContent(130,108);
   __8->SetBinContent(131,192);
   __8->SetBinContent(132,184);
   __8->SetBinContent(133,161);
   __8->SetBinContent(134,110);
   __8->SetBinContent(135,72);
   __8->SetBinContent(136,27);
   __8->SetBinContent(137,15);
   __8->SetBinContent(138,3);
   __8->SetBinContent(139,2);
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
