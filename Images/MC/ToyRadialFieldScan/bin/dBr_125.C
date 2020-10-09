void dBr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:41 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__9 = new TH1D("__9","Number of sub-runs: 125",300,-1000,1000);
   __9->SetBinContent(151,1000);
   __9->SetEntries(1000);
   __9->SetLineWidth(3);
   __9->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __9->GetXaxis()->CenterTitle(true);
   __9->GetXaxis()->SetLabelFont(42);
   __9->GetXaxis()->SetTitleSize(0.04);
   __9->GetXaxis()->SetTitleOffset(1.1);
   __9->GetXaxis()->SetTitleFont(42);
   __9->GetYaxis()->SetTitle("Experiments");
   __9->GetYaxis()->CenterTitle(true);
   __9->GetYaxis()->SetNdivisions(4000510);
   __9->GetYaxis()->SetLabelFont(42);
   __9->GetYaxis()->SetTitleSize(0.04);
   __9->GetYaxis()->SetTitleOffset(1.1);
   __9->GetYaxis()->SetTitleFont(42);
   __9->GetZaxis()->SetLabelFont(42);
   __9->GetZaxis()->SetTitleOffset(1);
   __9->GetZaxis()->SetTitleFont(42);
   __9->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
