void S12_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1b_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 13 18:32:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__4 = new TH1D("h__4","S12",31,0.09172194,0.4090683);
   h__4->SetBinContent(12,5);
   h__4->SetBinContent(13,39);
   h__4->SetBinContent(14,128);
   h__4->SetBinContent(15,235);
   h__4->SetBinContent(16,251);
   h__4->SetBinContent(17,184);
   h__4->SetBinContent(18,104);
   h__4->SetBinContent(19,38);
   h__4->SetBinContent(20,11);
   h__4->SetBinContent(21,3);
   h__4->SetBinContent(22,2);
   h__4->SetEntries(1000);
   h__4->SetStats(0);
   h__4->SetLineWidth(3);
   h__4->GetXaxis()->SetTitle("#delta^{BLIND} [mrad]");
   h__4->GetXaxis()->CenterTitle(true);
   h__4->GetXaxis()->SetLabelFont(42);
   h__4->GetXaxis()->SetTitleSize(0.04);
   h__4->GetXaxis()->SetTitleOffset(1.1);
   h__4->GetXaxis()->SetTitleFont(42);
   h__4->GetYaxis()->SetTitle("Trials  / 0.01 [mrad]");
   h__4->GetYaxis()->CenterTitle(true);
   h__4->GetYaxis()->SetNdivisions(4000510);
   h__4->GetYaxis()->SetLabelFont(42);
   h__4->GetYaxis()->SetTitleSize(0.04);
   h__4->GetYaxis()->SetTitleOffset(1.1);
   h__4->GetYaxis()->SetTitleFont(42);
   h__4->GetZaxis()->SetLabelFont(42);
   h__4->GetZaxis()->SetTitleOffset(1);
   h__4->GetZaxis()->SetTitleFont(42);
   h__4->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.2497
#pm0.0005
");
   pt_LaTex = pt->AddText("0.0159
#pm0.0004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
