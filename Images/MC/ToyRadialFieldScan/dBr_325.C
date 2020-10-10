void dBr_325()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 19:09:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__38 = new TH1D("__38","Number of sub-runs: 325",1000,0,4);
   __38->SetBinContent(91,1);
   __38->SetBinContent(92,6);
   __38->SetBinContent(93,27);
   __38->SetBinContent(94,97);
   __38->SetBinContent(95,181);
   __38->SetBinContent(96,230);
   __38->SetBinContent(97,211);
   __38->SetBinContent(98,140);
   __38->SetBinContent(99,68);
   __38->SetBinContent(100,26);
   __38->SetBinContent(101,11);
   __38->SetBinContent(102,1);
   __38->SetBinContent(103,1);
   __38->SetEntries(1000);
   __38->SetLineWidth(3);
   __38->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __38->GetXaxis()->CenterTitle(true);
   __38->GetXaxis()->SetLabelFont(42);
   __38->GetXaxis()->SetTitleSize(0.04);
   __38->GetXaxis()->SetTitleOffset(1.1);
   __38->GetXaxis()->SetTitleFont(42);
   __38->GetYaxis()->SetTitle("Experiments");
   __38->GetYaxis()->CenterTitle(true);
   __38->GetYaxis()->SetNdivisions(4000510);
   __38->GetYaxis()->SetLabelFont(42);
   __38->GetYaxis()->SetTitleSize(0.04);
   __38->GetYaxis()->SetTitleOffset(1.1);
   __38->GetYaxis()->SetTitleFont(42);
   __38->GetZaxis()->SetLabelFont(42);
   __38->GetZaxis()->SetTitleOffset(1);
   __38->GetZaxis()->SetTitleFont(42);
   __38->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
