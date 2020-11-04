void BrErr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:56:24 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__17 = new TH1D("__17","Number of sub-runs: 150",1000,0,4);
   __17->SetBinContent(191,1);
   __17->SetBinContent(193,2);
   __17->SetBinContent(194,4);
   __17->SetBinContent(195,6);
   __17->SetBinContent(196,6);
   __17->SetBinContent(197,17);
   __17->SetBinContent(198,47);
   __17->SetBinContent(199,63);
   __17->SetBinContent(200,70);
   __17->SetBinContent(201,87);
   __17->SetBinContent(202,123);
   __17->SetBinContent(203,105);
   __17->SetBinContent(204,120);
   __17->SetBinContent(205,98);
   __17->SetBinContent(206,78);
   __17->SetBinContent(207,81);
   __17->SetBinContent(208,38);
   __17->SetBinContent(209,31);
   __17->SetBinContent(210,9);
   __17->SetBinContent(211,8);
   __17->SetBinContent(212,3);
   __17->SetBinContent(213,2);
   __17->SetBinContent(214,1);
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
