void S18_EDM_delta_prime_hist_1000_1000-2500MeV_trackTruth_WORLD_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 24 18:14:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__2 = new TH1D("h__2","",54,1.129436,2.218405);
   h__2->SetBinContent(12,1);
   h__2->SetBinContent(13,3);
   h__2->SetBinContent(14,5);
   h__2->SetBinContent(15,8);
   h__2->SetBinContent(16,11);
   h__2->SetBinContent(17,12);
   h__2->SetBinContent(18,41);
   h__2->SetBinContent(19,34);
   h__2->SetBinContent(20,48);
   h__2->SetBinContent(21,46);
   h__2->SetBinContent(22,58);
   h__2->SetBinContent(23,58);
   h__2->SetBinContent(24,74);
   h__2->SetBinContent(25,72);
   h__2->SetBinContent(26,80);
   h__2->SetBinContent(27,82);
   h__2->SetBinContent(28,56);
   h__2->SetBinContent(29,60);
   h__2->SetBinContent(30,45);
   h__2->SetBinContent(31,40);
   h__2->SetBinContent(32,40);
   h__2->SetBinContent(33,34);
   h__2->SetBinContent(34,25);
   h__2->SetBinContent(35,17);
   h__2->SetBinContent(36,14);
   h__2->SetBinContent(37,15);
   h__2->SetBinContent(38,7);
   h__2->SetBinContent(39,3);
   h__2->SetBinContent(40,4);
   h__2->SetBinContent(41,2);
   h__2->SetBinContent(42,1);
   h__2->SetBinContent(43,1);
   h__2->SetBinContent(44,2);
   h__2->SetBinContent(46,1);
   h__2->SetEntries(1000);
   h__2->SetStats(0);
   h__2->SetLineWidth(3);
   h__2->GetXaxis()->SetTitle("#delta [mrad]");
   h__2->GetXaxis()->CenterTitle(true);
   h__2->GetXaxis()->SetLabelFont(42);
   h__2->GetXaxis()->SetTitleSize(0.04);
   h__2->GetXaxis()->SetTitleOffset(1.1);
   h__2->GetXaxis()->SetTitleFont(42);
   h__2->GetYaxis()->SetTitle("Trials / 0.02");
   h__2->GetYaxis()->CenterTitle(true);
   h__2->GetYaxis()->SetNdivisions(4000510);
   h__2->GetYaxis()->SetLabelFont(42);
   h__2->GetYaxis()->SetTitleSize(0.04);
   h__2->GetYaxis()->SetTitleOffset(1.1);
   h__2->GetYaxis()->SetTitleFont(42);
   h__2->GetZaxis()->SetLabelFont(42);
   h__2->GetZaxis()->SetTitleOffset(1);
   h__2->GetZaxis()->SetTitleFont(42);
   h__2->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.645
#pm0.003
");
   pt_LaTex = pt->AddText("0.11
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
