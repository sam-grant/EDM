void BrErr_250()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:49:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__29 = new TH1D("__29","Number of sub-runs: 250",1000,0,4);
   __29->SetBinContent(109,1);
   __29->SetBinContent(110,2);
   __29->SetBinContent(111,12);
   __29->SetBinContent(112,32);
   __29->SetBinContent(113,60);
   __29->SetBinContent(114,98);
   __29->SetBinContent(115,123);
   __29->SetBinContent(116,140);
   __29->SetBinContent(117,154);
   __29->SetBinContent(118,127);
   __29->SetBinContent(119,92);
   __29->SetBinContent(120,71);
   __29->SetBinContent(121,50);
   __29->SetBinContent(122,23);
   __29->SetBinContent(123,7);
   __29->SetBinContent(124,6);
   __29->SetBinContent(125,1);
   __29->SetBinContent(126,1);
   __29->SetEntries(1000);
   __29->SetLineWidth(3);
   __29->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __29->GetXaxis()->CenterTitle(true);
   __29->GetXaxis()->SetLabelFont(42);
   __29->GetXaxis()->SetTitleSize(0.04);
   __29->GetXaxis()->SetTitleOffset(1.1);
   __29->GetXaxis()->SetTitleFont(42);
   __29->GetYaxis()->SetTitle("Trials");
   __29->GetYaxis()->CenterTitle(true);
   __29->GetYaxis()->SetNdivisions(4000510);
   __29->GetYaxis()->SetLabelFont(42);
   __29->GetYaxis()->SetTitleSize(0.04);
   __29->GetYaxis()->SetTitleOffset(1.1);
   __29->GetYaxis()->SetTitleFont(42);
   __29->GetZaxis()->SetLabelFont(42);
   __29->GetZaxis()->SetTitleOffset(1);
   __29->GetZaxis()->SetTitleFont(42);
   __29->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
