void BrErr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:57 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 75",1000,0,4);
   __8->SetBinContent(170,1);
   __8->SetBinContent(172,1);
   __8->SetBinContent(173,5);
   __8->SetBinContent(174,9);
   __8->SetBinContent(175,4);
   __8->SetBinContent(176,24);
   __8->SetBinContent(177,29);
   __8->SetBinContent(178,44);
   __8->SetBinContent(179,56);
   __8->SetBinContent(180,67);
   __8->SetBinContent(181,77);
   __8->SetBinContent(182,100);
   __8->SetBinContent(183,104);
   __8->SetBinContent(184,99);
   __8->SetBinContent(185,95);
   __8->SetBinContent(186,78);
   __8->SetBinContent(187,67);
   __8->SetBinContent(188,42);
   __8->SetBinContent(189,30);
   __8->SetBinContent(190,25);
   __8->SetBinContent(191,9);
   __8->SetBinContent(192,13);
   __8->SetBinContent(193,8);
   __8->SetBinContent(194,2);
   __8->SetBinContent(195,8);
   __8->SetBinContent(196,1);
   __8->SetBinContent(197,1);
   __8->SetBinContent(198,1);
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
