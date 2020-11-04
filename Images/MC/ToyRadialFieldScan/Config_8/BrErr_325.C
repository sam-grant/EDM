void BrErr_325()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:03 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__38 = new TH1D("__38","Number of sub-runs: 325",1000,0,4);
   __38->SetBinContent(133,1);
   __38->SetBinContent(134,1);
   __38->SetBinContent(135,13);
   __38->SetBinContent(136,20);
   __38->SetBinContent(137,55);
   __38->SetBinContent(138,84);
   __38->SetBinContent(139,151);
   __38->SetBinContent(140,163);
   __38->SetBinContent(141,176);
   __38->SetBinContent(142,132);
   __38->SetBinContent(143,104);
   __38->SetBinContent(144,59);
   __38->SetBinContent(145,27);
   __38->SetBinContent(146,7);
   __38->SetBinContent(147,4);
   __38->SetBinContent(148,3);
   __38->SetEntries(1000);
   __38->SetLineWidth(3);
   __38->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __38->GetXaxis()->CenterTitle(true);
   __38->GetXaxis()->SetLabelFont(42);
   __38->GetXaxis()->SetTitleSize(0.04);
   __38->GetXaxis()->SetTitleOffset(1.1);
   __38->GetXaxis()->SetTitleFont(42);
   __38->GetYaxis()->SetTitle("Trials");
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
