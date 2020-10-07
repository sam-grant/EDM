void dBr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  7 18:21:02 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 200",300,0,3);
   __8->SetBinContent(57,1);
   __8->SetBinContent(58,5);
   __8->SetBinContent(59,11);
   __8->SetBinContent(60,42);
   __8->SetBinContent(61,98);
   __8->SetBinContent(62,172);
   __8->SetBinContent(63,224);
   __8->SetBinContent(64,192);
   __8->SetBinContent(65,128);
   __8->SetBinContent(66,76);
   __8->SetBinContent(67,30);
   __8->SetBinContent(68,13);
   __8->SetBinContent(69,5);
   __8->SetBinContent(70,1);
   __8->SetBinContent(71,2);
   __8->SetEntries(1000);
   __8->SetLineWidth(3);
   __8->GetXaxis()->SetTitle("Residual #deltaB_{r} [ppm]");
   __8->GetXaxis()->CenterTitle(true);
   __8->GetXaxis()->SetLabelFont(42);
   __8->GetXaxis()->SetTitleSize(0.04);
   __8->GetXaxis()->SetTitleOffset(1.1);
   __8->GetXaxis()->SetTitleFont(42);
   __8->GetYaxis()->SetTitle("Experiments");
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
