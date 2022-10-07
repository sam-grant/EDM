#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S18_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1d_250MeV_1000_2500MeV_50usStartTime_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  7 13:29:17 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__11 = new TH1D("h__11","S18",31,0.1920096,0.5107045);
   h__11->SetBinContent(9,1);
   h__11->SetBinContent(10,7);
   h__11->SetBinContent(11,18);
   h__11->SetBinContent(12,46);
   h__11->SetBinContent(13,102);
   h__11->SetBinContent(14,164);
   h__11->SetBinContent(15,182);
   h__11->SetBinContent(16,169);
   h__11->SetBinContent(17,140);
   h__11->SetBinContent(18,85);
   h__11->SetBinContent(19,53);
   h__11->SetBinContent(20,25);
   h__11->SetBinContent(21,2);
   h__11->SetBinContent(22,5);
   h__11->SetBinContent(27,1);
   h__11->SetEntries(1000);
   h__11->SetStats(0);
   h__11->SetLineWidth(3);
   h__11->GetXaxis()->SetTitle("#delta^{BLIND} [mrad]");
   h__11->GetXaxis()->CenterTitle(true);
   h__11->GetXaxis()->SetLabelFont(42);
   h__11->GetXaxis()->SetTitleSize(0.04);
   h__11->GetXaxis()->SetTitleOffset(1.1);
   h__11->GetXaxis()->SetTitleFont(42);
   h__11->GetYaxis()->SetTitle("Trials  / 0.01 [mrad]");
   h__11->GetYaxis()->CenterTitle(true);
   h__11->GetYaxis()->SetNdivisions(4000510);
   h__11->GetYaxis()->SetLabelFont(42);
   h__11->GetYaxis()->SetTitleSize(0.04);
   h__11->GetYaxis()->SetTitleOffset(1.1);
   h__11->GetYaxis()->SetTitleFont(42);
   h__11->GetZaxis()->SetLabelFont(42);
   h__11->GetZaxis()->SetTitleOffset(1);
   h__11->GetZaxis()->SetTitleFont(42);
   h__11->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.3461
#pm0.0007
");
   pt_LaTex = pt->AddText("0.022
#pm0.0005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
