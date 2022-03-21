void Residuals_AEDM_vs_p_acceptedInterpolatedMomBins()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar  1 12:25:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__3 = new TH1D("h_res__3","Momentum binned acceptance weighting with interpolation",25,-0.15,0.15);
   h_res__3->SetBinContent(10,1);
   h_res__3->SetBinContent(11,1);
   h_res__3->SetBinContent(13,1);
   h_res__3->SetBinContent(14,1);
   h_res__3->SetBinContent(15,2);
   h_res__3->SetBinContent(16,1);
   h_res__3->SetBinContent(21,1);
   h_res__3->SetEntries(8);
   h_res__3->SetStats(0);
   h_res__3->GetXaxis()->SetTitle("Residuals [mrad]");
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
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.04
#pm0.01
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
