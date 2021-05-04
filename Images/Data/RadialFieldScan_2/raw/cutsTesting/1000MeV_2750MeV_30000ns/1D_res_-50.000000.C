void 1D_res_-50.000000()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 26 21:52:28 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__6 = new TH1D("h_res__6","",100,-0.05,0.05);
   h_res__6->SetBinContent(45,1);
   h_res__6->SetBinContent(46,1);
   h_res__6->SetBinContent(58,1);
   h_res__6->SetEntries(3);
   h_res__6->GetXaxis()->SetTitle("Fit residual [mm]");
   h_res__6->GetXaxis()->CenterTitle(true);
   h_res__6->GetXaxis()->SetLabelFont(42);
   h_res__6->GetXaxis()->SetTitleSize(0.04);
   h_res__6->GetXaxis()->SetTitleOffset(1.1);
   h_res__6->GetXaxis()->SetTitleFont(42);
   h_res__6->GetYaxis()->SetTitle("Entries");
   h_res__6->GetYaxis()->CenterTitle(true);
   h_res__6->GetYaxis()->SetNdivisions(4000510);
   h_res__6->GetYaxis()->SetLabelFont(42);
   h_res__6->GetYaxis()->SetTitleSize(0.04);
   h_res__6->GetYaxis()->SetTitleOffset(1.1);
   h_res__6->GetYaxis()->SetTitleFont(42);
   h_res__6->GetZaxis()->SetLabelFont(42);
   h_res__6->GetZaxis()->SetTitleOffset(1);
   h_res__6->GetZaxis()->SetTitleFont(42);
   h_res__6->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
