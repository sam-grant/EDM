void 1D_res_10.000000()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 21 16:03:43 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__3 = new TH1D("h_res__3","",100,-0.05,0.05);
   h_res__3->SetBinContent(44,1);
   h_res__3->SetBinContent(55,1);
   h_res__3->SetBinContent(59,1);
   h_res__3->SetEntries(3);
   h_res__3->GetXaxis()->SetTitle("Fit residual [mm]");
   h_res__3->GetXaxis()->CenterTitle(true);
   h_res__3->GetXaxis()->SetLabelFont(42);
   h_res__3->GetXaxis()->SetTitleSize(0.04);
   h_res__3->GetXaxis()->SetTitleOffset(1.1);
   h_res__3->GetXaxis()->SetTitleFont(42);
   h_res__3->GetYaxis()->SetTitle("Entries");
   h_res__3->GetYaxis()->CenterTitle(true);
   h_res__3->GetYaxis()->SetNdivisions(4000510);
   h_res__3->GetYaxis()->SetLabelFont(42);
   h_res__3->GetYaxis()->SetTitleSize(0.04);
   h_res__3->GetYaxis()->SetTitleOffset(1.1);
   h_res__3->GetYaxis()->SetTitleFont(42);
   h_res__3->GetZaxis()->SetLabelFont(42);
   h_res__3->GetZaxis()->SetTitleOffset(1);
   h_res__3->GetZaxis()->SetTitleFont(42);
   h_res__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
