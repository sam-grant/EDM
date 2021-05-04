void 1D_res_30.000000()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 28 15:17:22 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__2 = new TH1D("h_res__2","",100,-0.05,0.05);
   h_res__2->SetBinContent(32,1);
   h_res__2->SetBinContent(42,1);
   h_res__2->SetBinContent(59,1);
   h_res__2->SetBinContent(98,1);
   h_res__2->SetEntries(4);
   h_res__2->GetXaxis()->SetTitle("Fit residual [mm]");
   h_res__2->GetXaxis()->CenterTitle(true);
   h_res__2->GetXaxis()->SetLabelFont(42);
   h_res__2->GetXaxis()->SetTitleSize(0.04);
   h_res__2->GetXaxis()->SetTitleOffset(1.1);
   h_res__2->GetXaxis()->SetTitleFont(42);
   h_res__2->GetYaxis()->SetTitle("Entries");
   h_res__2->GetYaxis()->CenterTitle(true);
   h_res__2->GetYaxis()->SetNdivisions(4000510);
   h_res__2->GetYaxis()->SetLabelFont(42);
   h_res__2->GetYaxis()->SetTitleSize(0.04);
   h_res__2->GetYaxis()->SetTitleOffset(1.1);
   h_res__2->GetYaxis()->SetTitleFont(42);
   h_res__2->GetZaxis()->SetLabelFont(42);
   h_res__2->GetZaxis()->SetTitleOffset(1);
   h_res__2->GetZaxis()->SetTitleFont(42);
   h_res__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
