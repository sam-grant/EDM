void S18_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1d_250MeV_1000_2500MeV_50usStartTime_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 13 18:32:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__11 = new TH1D("h__11","S18",33,0.1718248,0.5031518);
   h__11->SetBinContent(8,1);
   h__11->SetBinContent(9,4);
   h__11->SetBinContent(10,12);
   h__11->SetBinContent(11,19);
   h__11->SetBinContent(12,43);
   h__11->SetBinContent(13,84);
   h__11->SetBinContent(14,119);
   h__11->SetBinContent(15,156);
   h__11->SetBinContent(16,146);
   h__11->SetBinContent(17,125);
   h__11->SetBinContent(18,109);
   h__11->SetBinContent(19,78);
   h__11->SetBinContent(20,48);
   h__11->SetBinContent(21,31);
   h__11->SetBinContent(22,18);
   h__11->SetBinContent(23,1);
   h__11->SetBinContent(24,3);
   h__11->SetBinContent(25,2);
   h__11->SetBinContent(31,1);
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
   pt_LaTex = pt->AddText("0.3283
#pm0.0009
");
   pt_LaTex = pt->AddText("0.027
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
