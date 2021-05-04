void 1D_res_50.000000()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 26 22:58:24 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__1 = new TH1D("h_res__1","",100,-0.05,0.05);
   h_res__1->SetBinContent(37,1);
   h_res__1->SetBinContent(50,1);
   h_res__1->SetBinContent(57,1);
   h_res__1->SetBinContent(62,1);
   h_res__1->SetEntries(4);
   h_res__1->GetXaxis()->SetTitle("Fit residual [mm]");
   h_res__1->GetXaxis()->CenterTitle(true);
   h_res__1->GetXaxis()->SetLabelFont(42);
   h_res__1->GetXaxis()->SetTitleSize(0.04);
   h_res__1->GetXaxis()->SetTitleOffset(1.1);
   h_res__1->GetXaxis()->SetTitleFont(42);
   h_res__1->GetYaxis()->SetTitle("Entries");
   h_res__1->GetYaxis()->CenterTitle(true);
   h_res__1->GetYaxis()->SetNdivisions(4000510);
   h_res__1->GetYaxis()->SetLabelFont(42);
   h_res__1->GetYaxis()->SetTitleSize(0.04);
   h_res__1->GetYaxis()->SetTitleOffset(1.1);
   h_res__1->GetYaxis()->SetTitleFont(42);
   h_res__1->GetZaxis()->SetLabelFont(42);
   h_res__1->GetZaxis()->SetTitleOffset(1);
   h_res__1->GetZaxis()->SetTitleFont(42);
   h_res__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
