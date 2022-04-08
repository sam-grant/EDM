void S18_Residuals_AEDM_vs_p_dataAccCorr_Run-1c()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:23:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__8 = new TH1D("h_res__8","",20,-0.05,0.05);
   h_res__8->SetBinContent(0,4);
   h_res__8->SetBinContent(3,1);
   h_res__8->SetBinContent(4,2);
   h_res__8->SetBinContent(5,1);
   h_res__8->SetEntries(8);
   h_res__8->SetStats(0);
   h_res__8->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   h_res__8->GetXaxis()->CenterTitle(true);
   h_res__8->GetXaxis()->SetLabelFont(42);
   h_res__8->GetXaxis()->SetTitleSize(0.04);
   h_res__8->GetXaxis()->SetTitleOffset(1.1);
   h_res__8->GetXaxis()->SetTitleFont(42);
   h_res__8->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   h_res__8->GetYaxis()->CenterTitle(true);
   h_res__8->GetYaxis()->SetNdivisions(4000510);
   h_res__8->GetYaxis()->SetLabelFont(42);
   h_res__8->GetYaxis()->SetTitleSize(0.04);
   h_res__8->GetYaxis()->SetTitleOffset(1.1);
   h_res__8->GetYaxis()->SetTitleFont(42);
   h_res__8->GetZaxis()->SetLabelFont(42);
   h_res__8->GetZaxis()->SetTitleOffset(1);
   h_res__8->GetZaxis()->SetTitleFont(42);
   h_res__8->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.0043
#pm0.002
");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#sigma [mrad]");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
