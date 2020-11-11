void BrErr_25()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 10 15:16:12 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__2 = new TH1D("__2","Number of sub-runs: 25",1000,0,4);
   __2->SetBinContent(150,3);
   __2->SetBinContent(151,4);
   __2->SetBinContent(152,9);
   __2->SetBinContent(153,15);
   __2->SetBinContent(154,26);
   __2->SetBinContent(155,55);
   __2->SetBinContent(156,70);
   __2->SetBinContent(157,104);
   __2->SetBinContent(158,106);
   __2->SetBinContent(159,130);
   __2->SetBinContent(160,140);
   __2->SetBinContent(161,94);
   __2->SetBinContent(162,86);
   __2->SetBinContent(163,69);
   __2->SetBinContent(164,31);
   __2->SetBinContent(165,31);
   __2->SetBinContent(166,14);
   __2->SetBinContent(167,8);
   __2->SetBinContent(168,4);
   __2->SetBinContent(169,1);
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
