void BrErr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:56:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__23 = new TH1D("__23","Number of sub-runs: 200",1000,0,4);
   __23->SetBinContent(167,2);
   __23->SetBinContent(169,4);
   __23->SetBinContent(170,9);
   __23->SetBinContent(171,21);
   __23->SetBinContent(172,54);
   __23->SetBinContent(173,83);
   __23->SetBinContent(174,147);
   __23->SetBinContent(175,147);
   __23->SetBinContent(176,159);
   __23->SetBinContent(177,131);
   __23->SetBinContent(178,97);
   __23->SetBinContent(179,65);
   __23->SetBinContent(180,46);
   __23->SetBinContent(181,24);
   __23->SetBinContent(182,5);
   __23->SetBinContent(183,3);
   __23->SetBinContent(184,2);
   __23->SetBinContent(185,1);
   __23->SetEntries(1000);
   __23->SetLineWidth(3);
   __23->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __23->GetXaxis()->CenterTitle(true);
   __23->GetXaxis()->SetLabelFont(42);
   __23->GetXaxis()->SetTitleSize(0.04);
   __23->GetXaxis()->SetTitleOffset(1.1);
   __23->GetXaxis()->SetTitleFont(42);
   __23->GetYaxis()->SetTitle("Trials");
   __23->GetYaxis()->CenterTitle(true);
   __23->GetYaxis()->SetNdivisions(4000510);
   __23->GetYaxis()->SetLabelFont(42);
   __23->GetYaxis()->SetTitleSize(0.04);
   __23->GetYaxis()->SetTitleOffset(1.1);
   __23->GetYaxis()->SetTitleFont(42);
   __23->GetZaxis()->SetLabelFont(42);
   __23->GetZaxis()->SetTitleOffset(1);
   __23->GetZaxis()->SetTitleFont(42);
   __23->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
