void S18_EDM_delta_prime_hist_1000_1000-2500MeV_trackReco_WORLD_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 19:31:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__2 = new TH1D("h__2","",53,1.137755,2.208374);
   h__2->SetBinContent(12,2);
   h__2->SetBinContent(13,4);
   h__2->SetBinContent(14,8);
   h__2->SetBinContent(15,12);
   h__2->SetBinContent(16,10);
   h__2->SetBinContent(17,27);
   h__2->SetBinContent(18,34);
   h__2->SetBinContent(19,44);
   h__2->SetBinContent(20,48);
   h__2->SetBinContent(21,56);
   h__2->SetBinContent(22,56);
   h__2->SetBinContent(23,64);
   h__2->SetBinContent(24,77);
   h__2->SetBinContent(25,80);
   h__2->SetBinContent(26,80);
   h__2->SetBinContent(27,63);
   h__2->SetBinContent(28,59);
   h__2->SetBinContent(29,56);
   h__2->SetBinContent(30,40);
   h__2->SetBinContent(31,40);
   h__2->SetBinContent(32,35);
   h__2->SetBinContent(33,34);
   h__2->SetBinContent(34,18);
   h__2->SetBinContent(35,15);
   h__2->SetBinContent(36,10);
   h__2->SetBinContent(37,12);
   h__2->SetBinContent(38,5);
   h__2->SetBinContent(39,3);
   h__2->SetBinContent(40,3);
   h__2->SetBinContent(42,1);
   h__2->SetBinContent(43,2);
   h__2->SetBinContent(44,1);
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
   pt_LaTex = pt->AddText("1.642
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
