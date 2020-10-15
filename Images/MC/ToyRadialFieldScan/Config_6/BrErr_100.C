void BrErr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:33 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 100",1000,0,4);
   __11->SetBinContent(104,3);
   __11->SetBinContent(105,20);
   __11->SetBinContent(106,90);
   __11->SetBinContent(107,193);
   __11->SetBinContent(108,209);
   __11->SetBinContent(109,253);
   __11->SetBinContent(110,154);
   __11->SetBinContent(111,52);
   __11->SetBinContent(112,21);
   __11->SetBinContent(113,3);
   __11->SetBinContent(114,2);
   __11->SetEntries(1000);
   __11->SetLineWidth(3);
   __11->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __11->GetXaxis()->CenterTitle(true);
   __11->GetXaxis()->SetLabelFont(42);
   __11->GetXaxis()->SetTitleSize(0.04);
   __11->GetXaxis()->SetTitleOffset(1.1);
   __11->GetXaxis()->SetTitleFont(42);
   __11->GetYaxis()->SetTitle("Trials");
   __11->GetYaxis()->CenterTitle(true);
   __11->GetYaxis()->SetNdivisions(4000510);
   __11->GetYaxis()->SetLabelFont(42);
   __11->GetYaxis()->SetTitleSize(0.04);
   __11->GetYaxis()->SetTitleOffset(1.1);
   __11->GetYaxis()->SetTitleFont(42);
   __11->GetZaxis()->SetLabelFont(42);
   __11->GetZaxis()->SetTitleOffset(1);
   __11->GetZaxis()->SetTitleFont(42);
   __11->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
