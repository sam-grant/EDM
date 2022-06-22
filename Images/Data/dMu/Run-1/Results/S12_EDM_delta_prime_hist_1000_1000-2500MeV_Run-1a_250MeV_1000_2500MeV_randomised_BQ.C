void S12_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1a_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 13 18:32:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__1 = new TH1D("h__1","S12",31,0.2495286,0.5656164);
   h__1->SetBinContent(8,1);
   h__1->SetBinContent(9,2);
   h__1->SetBinContent(10,15);
   h__1->SetBinContent(11,17);
   h__1->SetBinContent(12,45);
   h__1->SetBinContent(13,59);
   h__1->SetBinContent(14,112);
   h__1->SetBinContent(15,139);
   h__1->SetBinContent(16,140);
   h__1->SetBinContent(17,111);
   h__1->SetBinContent(18,118);
   h__1->SetBinContent(19,116);
   h__1->SetBinContent(20,44);
   h__1->SetBinContent(21,38);
   h__1->SetBinContent(22,20);
   h__1->SetBinContent(23,11);
   h__1->SetBinContent(24,8);
   h__1->SetBinContent(25,1);
   h__1->SetBinContent(26,1);
   h__1->SetBinContent(27,1);
   h__1->SetBinContent(28,1);
   h__1->SetEntries(1000);
   h__1->SetStats(0);
   h__1->SetLineWidth(3);
   h__1->GetXaxis()->SetTitle("#delta^{BLIND} [mrad]");
   h__1->GetXaxis()->CenterTitle(true);
   h__1->GetXaxis()->SetLabelFont(42);
   h__1->GetXaxis()->SetTitleSize(0.04);
   h__1->GetXaxis()->SetTitleOffset(1.1);
   h__1->GetXaxis()->SetTitleFont(42);
   h__1->GetYaxis()->SetTitle("Trials  / 0.01 [mrad]");
   h__1->GetYaxis()->CenterTitle(true);
   h__1->GetYaxis()->SetNdivisions(4000510);
   h__1->GetYaxis()->SetLabelFont(42);
   h__1->GetYaxis()->SetTitleSize(0.04);
   h__1->GetYaxis()->SetTitleOffset(1.1);
   h__1->GetYaxis()->SetTitleFont(42);
   h__1->GetZaxis()->SetLabelFont(42);
   h__1->GetZaxis()->SetTitleOffset(1);
   h__1->GetZaxis()->SetTitleFont(42);
   h__1->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.4121
#pm0.0009
");
   pt_LaTex = pt->AddText("0.0292
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
