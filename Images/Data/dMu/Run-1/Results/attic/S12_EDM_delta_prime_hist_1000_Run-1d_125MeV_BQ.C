void S12_EDM_delta_prime_hist_1000_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 20:00:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__19 = new TH1D("h__19","S12_",23,0.2706747,0.7312937);
   h__19->SetBinContent(9,5);
   h__19->SetBinContent(10,52);
   h__19->SetBinContent(11,190);
   h__19->SetBinContent(12,338);
   h__19->SetBinContent(13,260);
   h__19->SetBinContent(14,113);
   h__19->SetBinContent(15,36);
   h__19->SetBinContent(16,3);
   h__19->SetBinContent(17,3);
   h__19->SetEntries(1000);
   h__19->SetStats(0);
   h__19->SetLineWidth(3);
   h__19->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__19->GetXaxis()->CenterTitle(true);
   h__19->GetXaxis()->SetLabelFont(42);
   h__19->GetXaxis()->SetTitleSize(0.04);
   h__19->GetXaxis()->SetTitleOffset(1.1);
   h__19->GetXaxis()->SetTitleFont(42);
   h__19->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__19->GetYaxis()->CenterTitle(true);
   h__19->GetYaxis()->SetNdivisions(4000510);
   h__19->GetYaxis()->SetLabelFont(42);
   h__19->GetYaxis()->SetTitleSize(0.04);
   h__19->GetYaxis()->SetTitleOffset(1.1);
   h__19->GetYaxis()->SetTitleFont(42);
   h__19->GetZaxis()->SetLabelFont(42);
   h__19->GetZaxis()->SetTitleOffset(1);
   h__19->GetZaxis()->SetTitleFont(42);
   h__19->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.5075
#pm0.0008
");
   pt_LaTex = pt->AddText("0.024
#pm0.0005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
