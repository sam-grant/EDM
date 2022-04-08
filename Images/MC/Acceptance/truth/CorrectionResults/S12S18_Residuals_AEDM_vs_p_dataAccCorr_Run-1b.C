void S12S18_Residuals_AEDM_vs_p_dataAccCorr_Run-1b()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:23:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__6 = new TH1D("h_res__6","",20,-0.05,0.05);
   h_res__6->SetBinContent(0,7);
   h_res__6->SetBinContent(4,1);
   h_res__6->SetEntries(8);
   h_res__6->SetStats(0);
   h_res__6->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   h_res__6->GetXaxis()->CenterTitle(true);
   h_res__6->GetXaxis()->SetLabelFont(42);
   h_res__6->GetXaxis()->SetTitleSize(0.04);
   h_res__6->GetXaxis()->SetTitleOffset(1.1);
   h_res__6->GetXaxis()->SetTitleFont(42);
   h_res__6->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
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
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0
#pm0
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
