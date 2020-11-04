void BrErr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:57 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__23 = new TH1D("__23","Number of sub-runs: 200",1000,0,4);
   __23->SetBinContent(167,1);
   __23->SetBinContent(168,4);
   __23->SetBinContent(169,2);
   __23->SetBinContent(170,4);
   __23->SetBinContent(171,12);
   __23->SetBinContent(172,18);
   __23->SetBinContent(173,26);
   __23->SetBinContent(174,35);
   __23->SetBinContent(175,74);
   __23->SetBinContent(176,69);
   __23->SetBinContent(177,82);
   __23->SetBinContent(178,107);
   __23->SetBinContent(179,107);
   __23->SetBinContent(180,99);
   __23->SetBinContent(181,82);
   __23->SetBinContent(182,84);
   __23->SetBinContent(183,65);
   __23->SetBinContent(184,55);
   __23->SetBinContent(185,25);
   __23->SetBinContent(186,19);
   __23->SetBinContent(187,13);
   __23->SetBinContent(188,5);
   __23->SetBinContent(189,7);
   __23->SetBinContent(190,2);
   __23->SetBinContent(191,1);
   __23->SetBinContent(193,2);
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
