void hBr_gm2pro_daq_offline_dqc_run3O_5207A_34702_34920()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 10 19:41:51 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1__1 = new TH1D("h1__1","",100,-50,50);
   h1__1->SetBinContent(46,1);
   h1__1->SetBinContent(47,6);
   h1__1->SetBinContent(48,116);
   h1__1->SetBinContent(49,18);
   h1__1->SetBinContent(50,1);
   h1__1->SetBinContent(51,1);
   h1__1->SetEntries(143);
   h1__1->GetXaxis()->SetTitle("#LTB_{r}#GT [ppm]");
   h1__1->GetXaxis()->CenterTitle(true);
   h1__1->GetXaxis()->SetLabelFont(42);
   h1__1->GetXaxis()->SetLabelSize(0.035);
   h1__1->GetXaxis()->SetTitleOffset(1.1);
   h1__1->GetXaxis()->SetTitleFont(42);
   h1__1->GetYaxis()->SetTitle("Entries");
   h1__1->GetYaxis()->CenterTitle(true);
   h1__1->GetYaxis()->SetNdivisions(4000510);
   h1__1->GetYaxis()->SetLabelFont(42);
   h1__1->GetYaxis()->SetLabelSize(0.035);
   h1__1->GetYaxis()->SetTitleOffset(1.1);
   h1__1->GetYaxis()->SetTitleFont(42);
   h1__1->GetZaxis()->SetLabelFont(42);
   h1__1->GetZaxis()->SetLabelSize(0.035);
   h1__1->GetZaxis()->SetTitleSize(0.035);
   h1__1->GetZaxis()->SetTitleFont(42);
   h1__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
