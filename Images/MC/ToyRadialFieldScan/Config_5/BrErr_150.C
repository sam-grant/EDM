void BrErr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:41 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__17 = new TH1D("__17","Number of sub-runs: 150",1000,0,4);
   __17->SetBinContent(134,7);
   __17->SetBinContent(135,15);
   __17->SetBinContent(136,20);
   __17->SetBinContent(137,55);
   __17->SetBinContent(138,123);
   __17->SetBinContent(139,140);
   __17->SetBinContent(140,135);
   __17->SetBinContent(141,133);
   __17->SetBinContent(142,149);
   __17->SetBinContent(143,95);
   __17->SetBinContent(144,68);
   __17->SetBinContent(145,28);
   __17->SetBinContent(146,18);
   __17->SetBinContent(147,7);
   __17->SetBinContent(148,5);
   __17->SetBinContent(149,2);
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
