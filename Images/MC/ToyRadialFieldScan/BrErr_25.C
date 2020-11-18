void BrErr_25()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 18 14:06:07 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__2 = new TH1D("__2","Number of sub-runs: 25",1000,0,4);
   __2->SetBinContent(153,3);
   __2->SetBinContent(154,4);
   __2->SetBinContent(155,9);
   __2->SetBinContent(156,14);
   __2->SetBinContent(157,24);
   __2->SetBinContent(158,50);
   __2->SetBinContent(159,68);
   __2->SetBinContent(160,96);
   __2->SetBinContent(161,100);
   __2->SetBinContent(162,125);
   __2->SetBinContent(163,127);
   __2->SetBinContent(164,103);
   __2->SetBinContent(165,92);
   __2->SetBinContent(166,75);
   __2->SetBinContent(167,41);
   __2->SetBinContent(168,28);
   __2->SetBinContent(169,23);
   __2->SetBinContent(170,10);
   __2->SetBinContent(171,5);
   __2->SetBinContent(172,2);
   __2->SetBinContent(173,1);
   __2->SetEntries(1000);
   __2->SetLineWidth(3);
   __2->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __2->GetXaxis()->CenterTitle(true);
   __2->GetXaxis()->SetLabelFont(42);
   __2->GetXaxis()->SetTitleSize(0.04);
   __2->GetXaxis()->SetTitleOffset(1.1);
   __2->GetXaxis()->SetTitleFont(42);
   __2->GetYaxis()->SetTitle("Trials");
   __2->GetYaxis()->CenterTitle(true);
   __2->GetYaxis()->SetNdivisions(4000510);
   __2->GetYaxis()->SetLabelFont(42);
   __2->GetYaxis()->SetTitleSize(0.04);
   __2->GetYaxis()->SetTitleOffset(1.1);
   __2->GetYaxis()->SetTitleFont(42);
   __2->GetZaxis()->SetLabelFont(42);
   __2->GetZaxis()->SetTitleOffset(1);
   __2->GetZaxis()->SetTitleFont(42);
   __2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
