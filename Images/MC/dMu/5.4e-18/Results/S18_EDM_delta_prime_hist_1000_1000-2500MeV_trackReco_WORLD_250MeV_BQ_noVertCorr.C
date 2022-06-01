void S18_EDM_delta_prime_hist_1000_1000-2500MeV_trackReco_WORLD_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 24 20:46:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__5 = new TH1D("h__5","",53,1.137755,2.208374);
   h__5->SetBinContent(12,2);
   h__5->SetBinContent(13,4);
   h__5->SetBinContent(14,8);
   h__5->SetBinContent(15,12);
   h__5->SetBinContent(16,10);
   h__5->SetBinContent(17,27);
   h__5->SetBinContent(18,34);
   h__5->SetBinContent(19,44);
   h__5->SetBinContent(20,48);
   h__5->SetBinContent(21,56);
   h__5->SetBinContent(22,56);
   h__5->SetBinContent(23,64);
   h__5->SetBinContent(24,77);
   h__5->SetBinContent(25,80);
   h__5->SetBinContent(26,80);
   h__5->SetBinContent(27,63);
   h__5->SetBinContent(28,59);
   h__5->SetBinContent(29,56);
   h__5->SetBinContent(30,40);
   h__5->SetBinContent(31,40);
   h__5->SetBinContent(32,35);
   h__5->SetBinContent(33,34);
   h__5->SetBinContent(34,18);
   h__5->SetBinContent(35,15);
   h__5->SetBinContent(36,10);
   h__5->SetBinContent(37,12);
   h__5->SetBinContent(38,5);
   h__5->SetBinContent(39,3);
   h__5->SetBinContent(40,3);
   h__5->SetBinContent(42,1);
   h__5->SetBinContent(43,2);
   h__5->SetBinContent(44,1);
   h__5->SetBinContent(46,1);
   h__5->SetEntries(1000);
   h__5->SetStats(0);
   h__5->SetLineWidth(3);
   h__5->GetXaxis()->SetTitle("#delta [mrad]");
   h__5->GetXaxis()->CenterTitle(true);
   h__5->GetXaxis()->SetLabelFont(42);
   h__5->GetXaxis()->SetTitleSize(0.04);
   h__5->GetXaxis()->SetTitleOffset(1.1);
   h__5->GetXaxis()->SetTitleFont(42);
   h__5->GetYaxis()->SetTitle("Trials / 0.02");
   h__5->GetYaxis()->CenterTitle(true);
   h__5->GetYaxis()->SetNdivisions(4000510);
   h__5->GetYaxis()->SetLabelFont(42);
   h__5->GetYaxis()->SetTitleSize(0.04);
   h__5->GetYaxis()->SetTitleOffset(1.1);
   h__5->GetYaxis()->SetTitleFont(42);
   h__5->GetZaxis()->SetLabelFont(42);
   h__5->GetZaxis()->SetTitleOffset(1);
   h__5->GetZaxis()->SetTitleFont(42);
   h__5->Draw("HIST");
   
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
