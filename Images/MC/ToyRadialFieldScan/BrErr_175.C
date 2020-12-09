void BrErr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",1000,0,10);
   __20->SetBinContent(57,6);
   __20->SetBinContent(58,17);
   __20->SetBinContent(59,92);
   __20->SetBinContent(60,230);
   __20->SetBinContent(61,319);
   __20->SetBinContent(62,194);
   __20->SetBinContent(63,110);
   __20->SetBinContent(64,26);
   __20->SetBinContent(65,5);
   __20->SetBinContent(66,1);
   __20->SetEntries(1000);
   __20->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{Bkg}#GT [ppm]");
   __20->GetXaxis()->CenterTitle(true);
   __20->GetXaxis()->SetLabelFont(42);
   __20->GetXaxis()->SetTitleSize(0.04);
   __20->GetXaxis()->SetTitleOffset(1.1);
   __20->GetXaxis()->SetTitleFont(42);
   __20->GetYaxis()->SetTitle("Trials");
   __20->GetYaxis()->CenterTitle(true);
   __20->GetYaxis()->SetNdivisions(4000510);
   __20->GetYaxis()->SetLabelFont(42);
   __20->GetYaxis()->SetTitleSize(0.04);
   __20->GetYaxis()->SetTitleOffset(1.1);
   __20->GetYaxis()->SetTitleFont(42);
   __20->GetZaxis()->SetLabelFont(42);
   __20->GetZaxis()->SetTitleOffset(1);
   __20->GetZaxis()->SetTitleFont(42);
   __20->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
