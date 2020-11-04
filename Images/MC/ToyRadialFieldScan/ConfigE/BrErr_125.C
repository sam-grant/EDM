void BrErr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 15:08:47 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",1000,0,4);
   __14->SetBinContent(121,2);
   __14->SetBinContent(122,8);
   __14->SetBinContent(123,13);
   __14->SetBinContent(124,20);
   __14->SetBinContent(125,33);
   __14->SetBinContent(126,53);
   __14->SetBinContent(127,83);
   __14->SetBinContent(128,113);
   __14->SetBinContent(129,110);
   __14->SetBinContent(130,132);
   __14->SetBinContent(131,98);
   __14->SetBinContent(132,99);
   __14->SetBinContent(133,80);
   __14->SetBinContent(134,59);
   __14->SetBinContent(135,40);
   __14->SetBinContent(136,25);
   __14->SetBinContent(137,15);
   __14->SetBinContent(138,10);
   __14->SetBinContent(139,4);
   __14->SetBinContent(140,1);
   __14->SetBinContent(142,1);
   __14->SetBinContent(143,1);
   __14->SetEntries(1000);
   __14->SetLineWidth(3);
   __14->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __14->GetXaxis()->CenterTitle(true);
   __14->GetXaxis()->SetLabelFont(42);
   __14->GetXaxis()->SetTitleSize(0.04);
   __14->GetXaxis()->SetTitleOffset(1.1);
   __14->GetXaxis()->SetTitleFont(42);
   __14->GetYaxis()->SetTitle("Trials");
   __14->GetYaxis()->CenterTitle(true);
   __14->GetYaxis()->SetNdivisions(4000510);
   __14->GetYaxis()->SetLabelFont(42);
   __14->GetYaxis()->SetTitleSize(0.04);
   __14->GetYaxis()->SetTitleOffset(1.1);
   __14->GetYaxis()->SetTitleFont(42);
   __14->GetZaxis()->SetLabelFont(42);
   __14->GetZaxis()->SetTitleOffset(1);
   __14->GetZaxis()->SetTitleFont(42);
   __14->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
