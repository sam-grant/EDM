void S12_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1d_250MeV_1000_2500MeV_50usStartTime_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 13 18:32:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__10 = new TH1D("h__10","S12",33,0.1822253,0.5186019);
   h__10->SetBinContent(11,1);
   h__10->SetBinContent(12,10);
   h__10->SetBinContent(13,22);
   h__10->SetBinContent(14,89);
   h__10->SetBinContent(15,129);
   h__10->SetBinContent(16,158);
   h__10->SetBinContent(17,200);
   h__10->SetBinContent(18,153);
   h__10->SetBinContent(19,102);
   h__10->SetBinContent(20,64);
   h__10->SetBinContent(21,45);
   h__10->SetBinContent(22,17);
   h__10->SetBinContent(23,5);
   h__10->SetBinContent(24,3);
   h__10->SetBinContent(25,1);
   h__10->SetBinContent(26,1);
   h__10->SetEntries(1000);
   h__10->SetStats(0);
   h__10->SetLineWidth(3);
   h__10->GetXaxis()->SetTitle("#delta^{BLIND} [mrad]");
   h__10->GetXaxis()->CenterTitle(true);
   h__10->GetXaxis()->SetLabelFont(42);
   h__10->GetXaxis()->SetTitleSize(0.04);
   h__10->GetXaxis()->SetTitleOffset(1.1);
   h__10->GetXaxis()->SetTitleFont(42);
   h__10->GetYaxis()->SetTitle("Trials  / 0.01 [mrad]");
   h__10->GetYaxis()->CenterTitle(true);
   h__10->GetYaxis()->SetNdivisions(4000510);
   h__10->GetYaxis()->SetLabelFont(42);
   h__10->GetYaxis()->SetTitleSize(0.04);
   h__10->GetYaxis()->SetTitleOffset(1.1);
   h__10->GetYaxis()->SetTitleFont(42);
   h__10->GetZaxis()->SetLabelFont(42);
   h__10->GetZaxis()->SetTitleOffset(1);
   h__10->GetZaxis()->SetTitleFont(42);
   h__10->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.3509
#pm0.0007
");
   pt_LaTex = pt->AddText("0.0223
#pm0.0005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
