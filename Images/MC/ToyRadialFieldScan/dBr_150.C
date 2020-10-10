void dBr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 19:09:37 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__17 = new TH1D("__17","Number of sub-runs: 150",1000,0,4);
   __17->SetBinContent(132,3);
   __17->SetBinContent(134,9);
   __17->SetBinContent(135,13);
   __17->SetBinContent(136,21);
   __17->SetBinContent(137,45);
   __17->SetBinContent(138,67);
   __17->SetBinContent(139,83);
   __17->SetBinContent(140,86);
   __17->SetBinContent(141,121);
   __17->SetBinContent(142,105);
   __17->SetBinContent(143,125);
   __17->SetBinContent(144,96);
   __17->SetBinContent(145,77);
   __17->SetBinContent(146,53);
   __17->SetBinContent(147,38);
   __17->SetBinContent(148,24);
   __17->SetBinContent(149,12);
   __17->SetBinContent(150,7);
   __17->SetBinContent(151,9);
   __17->SetBinContent(152,2);
   __17->SetBinContent(154,3);
   __17->SetBinContent(155,1);
   __17->SetEntries(1000);
   __17->SetLineWidth(3);
   __17->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __17->GetXaxis()->CenterTitle(true);
   __17->GetXaxis()->SetLabelFont(42);
   __17->GetXaxis()->SetTitleSize(0.04);
   __17->GetXaxis()->SetTitleOffset(1.1);
   __17->GetXaxis()->SetTitleFont(42);
   __17->GetYaxis()->SetTitle("Experiments");
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
