void BrErr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:02 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__17 = new TH1D("__17","Number of sub-runs: 150",1000,0,10);
   __17->SetBinContent(45,13);
   __17->SetBinContent(46,97);
   __17->SetBinContent(47,272);
   __17->SetBinContent(48,343);
   __17->SetBinContent(49,210);
   __17->SetBinContent(50,56);
   __17->SetBinContent(51,9);
   __17->SetEntries(1000);
   __17->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{Bkg}#GT [ppm]");
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
