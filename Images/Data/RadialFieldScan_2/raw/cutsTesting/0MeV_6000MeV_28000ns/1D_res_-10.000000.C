void 1D_res_-10.000000()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 21 16:07:46 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__4 = new TH1D("h_res__4","",100,-0.05,0.05);
   h_res__4->SetBinContent(31,1);
   h_res__4->SetBinContent(48,1);
   h_res__4->SetBinContent(63,1);
   h_res__4->SetBinContent(64,1);
   h_res__4->SetEntries(4);
   h_res__4->GetXaxis()->SetTitle("Fit residual [mm]");
   h_res__4->GetXaxis()->CenterTitle(true);
   h_res__4->GetXaxis()->SetLabelFont(42);
   h_res__4->GetXaxis()->SetTitleSize(0.04);
   h_res__4->GetXaxis()->SetTitleOffset(1.1);
   h_res__4->GetXaxis()->SetTitleFont(42);
   h_res__4->GetYaxis()->SetTitle("Entries");
   h_res__4->GetYaxis()->CenterTitle(true);
   h_res__4->GetYaxis()->SetNdivisions(4000510);
   h_res__4->GetYaxis()->SetLabelFont(42);
   h_res__4->GetYaxis()->SetTitleSize(0.04);
   h_res__4->GetYaxis()->SetTitleOffset(1.1);
   h_res__4->GetYaxis()->SetTitleFont(42);
   h_res__4->GetZaxis()->SetLabelFont(42);
   h_res__4->GetZaxis()->SetTitleOffset(1);
   h_res__4->GetZaxis()->SetTitleFont(42);
   h_res__4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
