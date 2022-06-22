void S12S18_EDM_delta_prime_hist_1000_1000-2500MeV_trackTruth_WORLD_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun  3 03:45:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__3 = new TH1D("h__3","",53,1.133302,2.196571);
   h__3->SetBinContent(16,1);
   h__3->SetBinContent(17,6);
   h__3->SetBinContent(18,8);
   h__3->SetBinContent(19,17);
   h__3->SetBinContent(20,34);
   h__3->SetBinContent(21,47);
   h__3->SetBinContent(22,64);
   h__3->SetBinContent(23,63);
   h__3->SetBinContent(24,86);
   h__3->SetBinContent(25,104);
   h__3->SetBinContent(26,108);
   h__3->SetBinContent(27,106);
   h__3->SetBinContent(28,82);
   h__3->SetBinContent(29,74);
   h__3->SetBinContent(30,59);
   h__3->SetBinContent(31,39);
   h__3->SetBinContent(32,39);
   h__3->SetBinContent(33,26);
   h__3->SetBinContent(34,21);
   h__3->SetBinContent(35,6);
   h__3->SetBinContent(36,3);
   h__3->SetBinContent(37,2);
   h__3->SetBinContent(38,1);
   h__3->SetBinContent(39,3);
   h__3->SetBinContent(40,1);
   h__3->SetEntries(1000);
   h__3->SetStats(0);
   h__3->SetLineWidth(3);
   h__3->GetXaxis()->SetTitle("#delta [mrad]");
   h__3->GetXaxis()->CenterTitle(true);
   h__3->GetXaxis()->SetLabelFont(42);
   h__3->GetXaxis()->SetTitleSize(0.04);
   h__3->GetXaxis()->SetTitleOffset(1.1);
   h__3->GetXaxis()->SetTitleFont(42);
   h__3->GetYaxis()->SetTitle("Trials / 0.02 mrad");
   h__3->GetYaxis()->CenterTitle(true);
   h__3->GetYaxis()->SetNdivisions(4000510);
   h__3->GetYaxis()->SetLabelFont(42);
   h__3->GetYaxis()->SetTitleSize(0.04);
   h__3->GetYaxis()->SetTitleOffset(1.1);
   h__3->GetYaxis()->SetTitleFont(42);
   h__3->GetZaxis()->SetLabelFont(42);
   h__3->GetZaxis()->SetTitleOffset(1);
   h__3->GetZaxis()->SetTitleFont(42);
   h__3->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.65
#pm0.002
");
   pt_LaTex = pt->AddText("0.078
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
