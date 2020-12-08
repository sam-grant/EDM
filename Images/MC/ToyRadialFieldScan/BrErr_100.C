void BrErr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:07:59 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 100",1000,0,10);
   __11->SetBinContent(54,6);
   __11->SetBinContent(55,15);
   __11->SetBinContent(56,62);
   __11->SetBinContent(57,150);
   __11->SetBinContent(58,222);
   __11->SetBinContent(59,256);
   __11->SetBinContent(60,160);
   __11->SetBinContent(61,79);
   __11->SetBinContent(62,37);
   __11->SetBinContent(63,11);
   __11->SetBinContent(64,2);
   __11->SetEntries(1000);
   __11->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{Bkg}#GT [ppm]");
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
