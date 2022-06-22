void S18_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1c_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 13 18:32:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__8 = new TH1D("h__8","S18",33,0.3087134,0.6469904);
   h__8->SetBinContent(6,3);
   h__8->SetBinContent(7,4);
   h__8->SetBinContent(8,18);
   h__8->SetBinContent(9,34);
   h__8->SetBinContent(10,50);
   h__8->SetBinContent(11,72);
   h__8->SetBinContent(12,98);
   h__8->SetBinContent(13,101);
   h__8->SetBinContent(14,138);
   h__8->SetBinContent(15,109);
   h__8->SetBinContent(16,115);
   h__8->SetBinContent(17,67);
   h__8->SetBinContent(18,78);
   h__8->SetBinContent(19,39);
   h__8->SetBinContent(20,21);
   h__8->SetBinContent(21,24);
   h__8->SetBinContent(22,14);
   h__8->SetBinContent(23,9);
   h__8->SetBinContent(24,4);
   h__8->SetBinContent(25,1);
   h__8->SetBinContent(27,1);
   h__8->SetEntries(1000);
   h__8->SetStats(0);
   h__8->SetLineWidth(3);
   h__8->GetXaxis()->SetTitle("#delta^{BLIND} [mrad]");
   h__8->GetXaxis()->CenterTitle(true);
   h__8->GetXaxis()->SetLabelFont(42);
   h__8->GetXaxis()->SetTitleSize(0.04);
   h__8->GetXaxis()->SetTitleOffset(1.1);
   h__8->GetXaxis()->SetTitleFont(42);
   h__8->GetYaxis()->SetTitle("Trials  / 0.01 [mrad]");
   h__8->GetYaxis()->CenterTitle(true);
   h__8->GetYaxis()->SetNdivisions(4000510);
   h__8->GetYaxis()->SetLabelFont(42);
   h__8->GetYaxis()->SetTitleSize(0.04);
   h__8->GetYaxis()->SetTitleOffset(1.1);
   h__8->GetYaxis()->SetTitleFont(42);
   h__8->GetZaxis()->SetLabelFont(42);
   h__8->GetZaxis()->SetTitleOffset(1);
   h__8->GetZaxis()->SetTitleFont(42);
   h__8->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.4529
#pm0.001
");
   pt_LaTex = pt->AddText("0.0343
#pm0.0008
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
