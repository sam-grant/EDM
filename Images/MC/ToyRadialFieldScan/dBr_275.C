void dBr_275()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 17:32:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__21 = new TH1D("__21","Number of sub-runs: 275",300,0,3);
   __21->SetBinContent(0,497);
   __21->SetBinContent(47,2);
   __21->SetBinContent(48,8);
   __21->SetBinContent(49,50);
   __21->SetBinContent(50,125);
   __21->SetBinContent(51,172);
   __21->SetBinContent(52,110);
   __21->SetBinContent(53,29);
   __21->SetBinContent(54,6);
   __21->SetBinContent(55,1);
   __21->SetEntries(1000);
   __21->SetLineWidth(3);
   __21->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __21->GetXaxis()->CenterTitle(true);
   __21->GetXaxis()->SetLabelFont(42);
   __21->GetXaxis()->SetTitleSize(0.04);
   __21->GetXaxis()->SetTitleOffset(1.1);
   __21->GetXaxis()->SetTitleFont(42);
   __21->GetYaxis()->SetTitle("Experiments");
   __21->GetYaxis()->CenterTitle(true);
   __21->GetYaxis()->SetNdivisions(4000510);
   __21->GetYaxis()->SetLabelFont(42);
   __21->GetYaxis()->SetTitleSize(0.04);
   __21->GetYaxis()->SetTitleOffset(1.1);
   __21->GetYaxis()->SetTitleFont(42);
   __21->GetZaxis()->SetLabelFont(42);
   __21->GetZaxis()->SetTitleOffset(1);
   __21->GetZaxis()->SetTitleFont(42);
   __21->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
