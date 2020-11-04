void BrErr_50()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 50",1000,0,4);
   __5->SetBinContent(153,5);
   __5->SetBinContent(154,13);
   __5->SetBinContent(155,12);
   __5->SetBinContent(156,33);
   __5->SetBinContent(157,51);
   __5->SetBinContent(158,93);
   __5->SetBinContent(159,93);
   __5->SetBinContent(160,111);
   __5->SetBinContent(161,114);
   __5->SetBinContent(162,119);
   __5->SetBinContent(163,116);
   __5->SetBinContent(164,79);
   __5->SetBinContent(165,62);
   __5->SetBinContent(166,41);
   __5->SetBinContent(167,34);
   __5->SetBinContent(168,9);
   __5->SetBinContent(169,6);
   __5->SetBinContent(170,6);
   __5->SetBinContent(171,2);
   __5->SetBinContent(172,1);
   __5->SetEntries(1000);
   __5->SetLineWidth(3);
   __5->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __5->GetXaxis()->CenterTitle(true);
   __5->GetXaxis()->SetLabelFont(42);
   __5->GetXaxis()->SetTitleSize(0.04);
   __5->GetXaxis()->SetTitleOffset(1.1);
   __5->GetXaxis()->SetTitleFont(42);
   __5->GetYaxis()->SetTitle("Trials");
   __5->GetYaxis()->CenterTitle(true);
   __5->GetYaxis()->SetNdivisions(4000510);
   __5->GetYaxis()->SetLabelFont(42);
   __5->GetYaxis()->SetTitleSize(0.04);
   __5->GetYaxis()->SetTitleOffset(1.1);
   __5->GetYaxis()->SetTitleFont(42);
   __5->GetZaxis()->SetLabelFont(42);
   __5->GetZaxis()->SetTitleOffset(1);
   __5->GetZaxis()->SetTitleFont(42);
   __5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
