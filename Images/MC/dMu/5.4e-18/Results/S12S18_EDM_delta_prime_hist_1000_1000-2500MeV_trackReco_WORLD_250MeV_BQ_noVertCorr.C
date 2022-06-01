void S12S18_EDM_delta_prime_hist_1000_1000-2500MeV_trackReco_WORLD_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 24 20:46:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__6 = new TH1D("h__6","",52,1.142477,2.199726);
   h__6->SetBinContent(15,1);
   h__6->SetBinContent(16,4);
   h__6->SetBinContent(17,6);
   h__6->SetBinContent(18,13);
   h__6->SetBinContent(19,22);
   h__6->SetBinContent(20,44);
   h__6->SetBinContent(21,57);
   h__6->SetBinContent(22,64);
   h__6->SetBinContent(23,78);
   h__6->SetBinContent(24,98);
   h__6->SetBinContent(25,98);
   h__6->SetBinContent(26,119);
   h__6->SetBinContent(27,83);
   h__6->SetBinContent(28,92);
   h__6->SetBinContent(29,49);
   h__6->SetBinContent(30,58);
   h__6->SetBinContent(31,40);
   h__6->SetBinContent(32,28);
   h__6->SetBinContent(33,23);
   h__6->SetBinContent(34,11);
   h__6->SetBinContent(35,5);
   h__6->SetBinContent(36,1);
   h__6->SetBinContent(37,2);
   h__6->SetBinContent(38,1);
   h__6->SetBinContent(39,3);
   h__6->SetEntries(1000);
   h__6->SetStats(0);
   h__6->SetLineWidth(3);
   h__6->GetXaxis()->SetTitle("#delta [mrad]");
   h__6->GetXaxis()->CenterTitle(true);
   h__6->GetXaxis()->SetLabelFont(42);
   h__6->GetXaxis()->SetTitleSize(0.04);
   h__6->GetXaxis()->SetTitleOffset(1.1);
   h__6->GetXaxis()->SetTitleFont(42);
   h__6->GetYaxis()->SetTitle("Trials / 0.02");
   h__6->GetYaxis()->CenterTitle(true);
   h__6->GetYaxis()->SetNdivisions(4000510);
   h__6->GetYaxis()->SetLabelFont(42);
   h__6->GetYaxis()->SetTitleSize(0.04);
   h__6->GetYaxis()->SetTitleOffset(1.1);
   h__6->GetYaxis()->SetTitleFont(42);
   h__6->GetZaxis()->SetLabelFont(42);
   h__6->GetZaxis()->SetTitleOffset(1);
   h__6->GetZaxis()->SetTitleFont(42);
   h__6->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.655
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
