void 1D_res_-30.000000()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 26 22:47:40 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__5 = new TH1D("h_res__5","",100,-0.05,0.05);
   h_res__5->SetBinContent(35,1);
   h_res__5->SetBinContent(42,1);
   h_res__5->SetBinContent(60,1);
   h_res__5->SetBinContent(73,1);
   h_res__5->SetEntries(4);
   h_res__5->GetXaxis()->SetTitle("Fit residual [mm]");
   h_res__5->GetXaxis()->CenterTitle(true);
   h_res__5->GetXaxis()->SetLabelFont(42);
   h_res__5->GetXaxis()->SetTitleSize(0.04);
   h_res__5->GetXaxis()->SetTitleOffset(1.1);
   h_res__5->GetXaxis()->SetTitleFont(42);
   h_res__5->GetYaxis()->SetTitle("Entries");
   h_res__5->GetYaxis()->CenterTitle(true);
   h_res__5->GetYaxis()->SetNdivisions(4000510);
   h_res__5->GetYaxis()->SetLabelFont(42);
   h_res__5->GetYaxis()->SetTitleSize(0.04);
   h_res__5->GetYaxis()->SetTitleOffset(1.1);
   h_res__5->GetYaxis()->SetTitleFont(42);
   h_res__5->GetZaxis()->SetLabelFont(42);
   h_res__5->GetZaxis()->SetTitleOffset(1);
   h_res__5->GetZaxis()->SetTitleFont(42);
   h_res__5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
